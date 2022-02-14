
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct StringHashTable {int dummy; } ;
typedef int ULONG_PTR ;
typedef int ULONG ;
struct TYPE_14__ {scalar_t__ e_zeroes; int e_offset; } ;
struct TYPE_15__ {int e_name; TYPE_1__ e; } ;
struct TYPE_19__ {scalar_t__ e_sclass; int e_scnum; scalar_t__ e_numaux; TYPE_2__ e; int e_value; int e_type; } ;
struct TYPE_18__ {int NumberOfSections; } ;
struct TYPE_17__ {scalar_t__ VirtualAddress; } ;
struct TYPE_16__ {scalar_t__ SourceLine; int FunctionOffset; scalar_t__ FileOffset; int Address; } ;
typedef int ROSSYM_ENTRY ;
typedef TYPE_3__* PROSSYM_ENTRY ;
typedef TYPE_4__* PIMAGE_SECTION_HEADER ;
typedef TYPE_5__* PIMAGE_FILE_HEADER ;
typedef TYPE_6__* PCOFF_SYMENT ;
typedef int FuncName ;
typedef int COFF_SYMENT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct StringHashTable*,char*,int*,void*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct StringHashTable*) ;
 int FUNC_3 (struct StringHashTable*,int,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int) ;
 int FUNC_7 (char*,int ,size_t) ;
 int FUNC_8 (TYPE_3__*,int ,int) ;
 int FUNC_9 (TYPE_3__*,int,int,int (*) (void const*,void const*)) ;
 int VAR_3 ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char*,char) ;

__attribute__((used)) static int
FUNC_13(ULONG *VAR_4, PROSSYM_ENTRY *VAR_5,
             ULONG *VAR_6, void *VAR_7,
             ULONG VAR_8, void *VAR_9,
             ULONG VAR_10, void *VAR_11,
             ULONG_PTR VAR_12, PIMAGE_FILE_HEADER VAR_13,
             PIMAGE_SECTION_HEADER VAR_14)
{
    ULONG VAR_15, VAR_16;
    PCOFF_SYMENT VAR_17;
    char VAR_18[256], VAR_19[1024];
    char *VAR_20;
    PROSSYM_ENTRY VAR_21;
    struct StringHashTable VAR_22;

    VAR_17 = (PCOFF_SYMENT) VAR_9;
    VAR_15 = VAR_8 / sizeof(COFF_SYMENT);

    *VAR_5 = FUNC_6(VAR_15 * sizeof(ROSSYM_ENTRY));
    if (*VAR_5 == ((void*)0))
    {
        FUNC_4(VAR_3, "Unable to allocate memory for converted COFF symbols\n");
        return 1;
    }
    *VAR_4 = 0;
    VAR_21 = *VAR_5;

    FUNC_3(&VAR_22, *VAR_6, (char*)VAR_7);

    for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++)
    {
        if (FUNC_1(VAR_17[VAR_16].e_type) || VAR_0 == VAR_17[VAR_16].e_sclass)
        {
            VAR_21->Address = VAR_17[VAR_16].e_value;
            if (VAR_17[VAR_16].e_scnum > 0)
            {
                if (VAR_13->NumberOfSections < VAR_17[VAR_16].e_scnum)
                {
                    FUNC_5(*VAR_5);
                    FUNC_4(VAR_3,
                            "Invalid section number %d in COFF symbols (only %d sections present)\n",
                            VAR_17[VAR_16].e_scnum,
                            VAR_13->NumberOfSections);
                    return 1;
                }
                VAR_21->Address += VAR_14[VAR_17[VAR_16].e_scnum - 1].VirtualAddress;
            }
            VAR_21->FileOffset = 0;
            if (VAR_17[VAR_16].e.e.e_zeroes == 0)
            {
                if (sizeof(VAR_18) <= FUNC_11((char *) VAR_11 + VAR_17[VAR_16].e.e.e_offset))
                {
                    FUNC_5(*VAR_5);
                    FUNC_4(VAR_3, "Function name too long\n");
                    FUNC_2(&VAR_22);
                    return 1;
                }
                FUNC_10(VAR_18, (char *) VAR_11 + VAR_17[VAR_16].e.e.e_offset);
            }
            else
            {
                FUNC_7(VAR_18, VAR_17[VAR_16].e.e_name, VAR_2);
                VAR_18[VAR_2] = '\0';
            }


            VAR_20 = FUNC_12(VAR_18, '@');
            if (VAR_20 != ((void*)0))
            {
                *VAR_20 = '\0';
            }
            VAR_20 = ('_' == VAR_18[0] || '@' == VAR_18[0] ? VAR_18 + 1 : VAR_18);
            VAR_21->FunctionOffset = FUNC_0(&VAR_22,
                                                      VAR_20,
                                                      VAR_6,
                                                      VAR_7);
            VAR_21->SourceLine = 0;
            FUNC_8(++VAR_21, 0, sizeof(*VAR_21));
        }

        VAR_16 += VAR_17[VAR_16].e_numaux;
    }

    *VAR_4 = (VAR_21 - *VAR_5 + 1);
    FUNC_9(*VAR_5, *VAR_4, sizeof(ROSSYM_ENTRY), (int (*)(const void *, const void *)) VAR_1);

    FUNC_2(&VAR_22);

    return 0;
}
