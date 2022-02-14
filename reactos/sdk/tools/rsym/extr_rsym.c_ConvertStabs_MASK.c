
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct StringHashTable {int dummy; } ;
typedef scalar_t__ ULONG_PTR ;
typedef int ULONG ;
struct TYPE_9__ {scalar_t__ Address; int SourceLine; void* FunctionOffset; void* FileOffset; } ;
struct TYPE_8__ {scalar_t__ n_value; int n_type; int n_strx; int n_desc; } ;
typedef int STAB_ENTRY ;
typedef int ROSSYM_ENTRY ;
typedef TYPE_1__* PSTAB_ENTRY ;
typedef TYPE_2__* PROSSYM_ENTRY ;
typedef int PIMAGE_SECTION_HEADER ;
typedef int PIMAGE_FILE_HEADER ;
typedef int FuncName ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (struct StringHashTable*,char*,int*,void*) ;





 int FUNC_1 (struct StringHashTable*) ;
 int FUNC_2 (struct StringHashTable*,int,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int FUNC_8 (TYPE_2__*,int,int,int (*) (void const*,void const*)) ;
 int VAR_1 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int
FUNC_11(ULONG *VAR_2, PROSSYM_ENTRY *VAR_3,
             ULONG *VAR_4, void *VAR_5,
             ULONG VAR_6, void *VAR_7,
             ULONG VAR_8, void *VAR_9,
             ULONG_PTR VAR_10, PIMAGE_FILE_HEADER VAR_11,
             PIMAGE_SECTION_HEADER VAR_12)
{
    PSTAB_ENTRY VAR_13;
    ULONG VAR_14, VAR_15;
    ULONG_PTR VAR_16, VAR_17;
    int VAR_18 = 1;
    char *VAR_19;
    ULONG VAR_20;
    char VAR_21[256];
    PROSSYM_ENTRY VAR_22;
    struct StringHashTable VAR_23;

    VAR_13 = VAR_7;
    VAR_14 = VAR_6 / sizeof(STAB_ENTRY);
    *VAR_2 = 0;

    if (VAR_14 == 0)
    {

        *VAR_3 = ((void*)0);
        return 0;
    }

    *VAR_3 = FUNC_5(VAR_14 * sizeof(ROSSYM_ENTRY));
    if (*VAR_3 == ((void*)0))
    {
        FUNC_3(VAR_1, "Failed to allocate memory for converted .stab symbols\n");
        return 1;
    }
    VAR_22 = *VAR_3;
    FUNC_7(VAR_22, 0, sizeof(*VAR_22));

    FUNC_2(&VAR_23, *VAR_4, (char *)VAR_5);

    VAR_17 = 0;
    for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
    {
        if (VAR_17 == 0)
        {
            VAR_16 = VAR_13[VAR_15].n_value - VAR_10;
        }
        else
        {
            VAR_16 = VAR_17 + VAR_13[VAR_15].n_value;
        }
        switch (VAR_13[VAR_15].n_type)
        {
            case 129:
            case 128:
            case 132:
                VAR_19 = (char *) VAR_9 + VAR_13[VAR_15].n_strx;
                if (VAR_8 < VAR_13[VAR_15].n_strx
                    || *VAR_19 == '\0' || VAR_19[FUNC_10(VAR_19) - 1] == '/'
                    || VAR_19[FUNC_10(VAR_19) - 1] == '\\'
                    || VAR_13[VAR_15].n_value < VAR_10)
                {
                    continue;
                }
                if (VAR_18 || VAR_16 != VAR_22->Address)
                {
                    if (!VAR_18)
                    {
                        FUNC_7(++VAR_22, 0, sizeof(*VAR_22));
                        VAR_22->FunctionOffset = VAR_22[-1].FunctionOffset;
                    }
                    else
                        VAR_18 = 0;
                    VAR_22->Address = VAR_16;
                }
                VAR_22->FileOffset = FUNC_0(&VAR_23,
                                                      (char *)VAR_9 + VAR_13[VAR_15].n_strx,
                                                      VAR_4,
                                                      VAR_5);
                break;
            case 131:
                if (VAR_13[VAR_15].n_desc == 0 || VAR_13[VAR_15].n_value < VAR_10)
                {
                    VAR_17 = 0;
                    continue;
                }
                if (VAR_18 || VAR_16 != VAR_22->Address)
                {
                    if (!VAR_18)
                        FUNC_7(++VAR_22, 0, sizeof(*VAR_22));
                    else
                        VAR_18 = 0;
                    VAR_22->Address = VAR_16;
                    VAR_22->FileOffset = VAR_22[-1].FileOffset;
                }
                VAR_19 = (char *)VAR_9 + VAR_13[VAR_15].n_strx;
                VAR_20 = FUNC_9(VAR_19, ":");
                if (sizeof(VAR_21) <= VAR_20)
                {
                    FUNC_4(*VAR_3);
                    FUNC_3(VAR_1, "Function name too long\n");
                    return 1;
                }
                FUNC_6(VAR_21, VAR_19, VAR_20);
                VAR_21[VAR_20] = '\0';
                VAR_22->FunctionOffset = FUNC_0(&VAR_23,
                                                          VAR_21,
                                                          VAR_4,
                                                          VAR_5);
                VAR_22->SourceLine = 0;
                VAR_17 = VAR_16;
                break;
            case 130:
                if (VAR_18 || VAR_16 != VAR_22->Address)
                {
                    if (!VAR_18)
                    {
                        FUNC_7(++VAR_22, 0, sizeof(*VAR_22));
                        VAR_22->FileOffset = VAR_22[-1].FileOffset;
                        VAR_22->FunctionOffset = VAR_22[-1].FunctionOffset;
                    }
                    else
                        VAR_18 = 0;
                    VAR_22->Address = VAR_16;
                }
                VAR_22->SourceLine = VAR_13[VAR_15].n_desc;
                break;
            default:
                continue;
        }
    }
    *VAR_2 = (VAR_22 - *VAR_3 + 1);

    FUNC_8(*VAR_3, *VAR_2, sizeof(ROSSYM_ENTRY), (int (*)(const void *, const void *)) VAR_0);

    FUNC_1(&VAR_23);

    return 0;
}
