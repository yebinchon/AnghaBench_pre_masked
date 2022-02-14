
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct metadata_container {int pattern_count; int patterns_size; TYPE_1__* patterns; } ;
struct TYPE_12__ {scalar_t__ QuadPart; } ;
struct TYPE_10__ {int Length; TYPE_3__* Mask; TYPE_3__* Pattern; TYPE_3__ Position; TYPE_3__ DataOffset; } ;
typedef TYPE_1__ WICMetadataPattern ;
typedef char WCHAR ;
typedef int UINT ;
struct TYPE_11__ {int classkey; } ;
typedef TYPE_2__ MetadataReaderInfo ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int GUID ;
typedef int DWORD64 ;
typedef int DWORD ;
typedef TYPE_3__ BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,char const*,int,int *,TYPE_3__*,int*) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int *,int *,int*,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_4 (int *,char*,int) ;
 char* VAR_5 ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_3__* FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (char*,int,char const*,int) ;

__attribute__((used)) static void FUNC_9(MetadataReaderInfo *VAR_6, GUID *VAR_7,
                                   struct metadata_container *VAR_8)
{
    UINT VAR_9=0, VAR_10=0;
    WCHAR VAR_11[11], VAR_12[39];
    LONG VAR_13;
    HKEY VAR_14, VAR_15, VAR_16;
    static const WCHAR VAR_17[] = {'%','u',0};
    static const WCHAR VAR_18[] = {'P','a','t','t','e','r','n',0};
    static const WCHAR VAR_19[] = {'P','o','s','i','t','i','o','n',0};
    static const WCHAR VAR_20[] = {'M','a','s','k',0};
    static const WCHAR VAR_21[] = {'D','a','t','a','O','f','f','s','e','t',0};
    UINT VAR_22;
    WICMetadataPattern *VAR_23;
    BYTE *VAR_24;
    DWORD VAR_25, VAR_26;

    VAR_13 = FUNC_2(VAR_6->classkey, VAR_5, 0, VAR_1, &VAR_14);
    if (VAR_13 != VAR_0) return;

    FUNC_4(VAR_7, VAR_12, 39);
    VAR_13 = FUNC_2(VAR_14, VAR_12, 0, VAR_1, &VAR_15);
    FUNC_0(VAR_14);
    if (VAR_13 != VAR_0) return;

    VAR_13 = FUNC_3(VAR_15, ((void*)0), ((void*)0), ((void*)0), &VAR_9,
                           ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    if (VAR_13 != VAR_0)
    {
        FUNC_0(VAR_15);
        return;
    }

    VAR_10 = VAR_9 * sizeof(WICMetadataPattern);
    VAR_23 = FUNC_5(VAR_10);
    if (!VAR_23)
    {
        FUNC_0(VAR_15);
        return;
    }

    for (VAR_22=0; VAR_13 == VAR_0 && VAR_22 < VAR_9; VAR_22++)
    {
        FUNC_8(VAR_11, 11, VAR_17, VAR_22);
        VAR_13 = FUNC_2(VAR_15, VAR_11, 0, VAR_1, &VAR_16);
        if (VAR_13 != VAR_0) break;

        VAR_13 = FUNC_1(VAR_16, ((void*)0), VAR_18, VAR_4, ((void*)0), ((void*)0), &VAR_25);
        if (VAR_13 == VAR_0)
        {
            VAR_10 += VAR_25*2;
            VAR_23[VAR_22].Length = VAR_25;

            VAR_26 = sizeof(DWORD64);
            VAR_13 = FUNC_1(VAR_16, ((void*)0), VAR_21, VAR_2|VAR_3, ((void*)0),
                               &VAR_23[VAR_22].DataOffset, &VAR_26);
            if (VAR_13) VAR_23[VAR_22].DataOffset.QuadPart = 0;

            VAR_23[VAR_22].Position.QuadPart = 0;
            VAR_26 = sizeof(DWORD64);
            VAR_13 = FUNC_1(VAR_16, ((void*)0), VAR_19, VAR_2|VAR_3, ((void*)0),
                               &VAR_23[VAR_22].Position, &VAR_26);
        }

        FUNC_0(VAR_16);
    }

    if (VAR_13 != VAR_0 || !(VAR_24 = FUNC_7(VAR_23, VAR_10)))
    {
        FUNC_6(VAR_23);
        FUNC_0(VAR_15);
        return;
    }
    VAR_23 = (WICMetadataPattern*)VAR_24;
    VAR_24 += VAR_9 * sizeof(*VAR_23);

    for (VAR_22=0; VAR_13 == VAR_0 && VAR_22 < VAR_9; VAR_22++)
    {
        FUNC_8(VAR_11, 11, VAR_17, VAR_22);
        VAR_13 = FUNC_2(VAR_15, VAR_11, 0, VAR_1, &VAR_16);
        if (VAR_13 != VAR_0) break;

        VAR_25 = VAR_23[VAR_22].Length;
        VAR_23[VAR_22].Pattern = VAR_24;
        VAR_26 = VAR_25;
        VAR_13 = FUNC_1(VAR_16, ((void*)0), VAR_18, VAR_4, ((void*)0),
                           VAR_23[VAR_22].Pattern, &VAR_26);
        VAR_24 += VAR_25;

        if (VAR_13 == VAR_0)
        {
            VAR_23[VAR_22].Mask = VAR_24;
            VAR_26 = VAR_25;
            VAR_13 = FUNC_1(VAR_16, ((void*)0), VAR_20, VAR_4, ((void*)0),
                               VAR_23[VAR_22].Mask, &VAR_26);
            VAR_24 += VAR_25;
        }

        FUNC_0(VAR_16);
    }

    FUNC_0(VAR_15);

    if (VAR_13 != VAR_0)
    {
        FUNC_6(VAR_23);
        return;
    }

    VAR_8->pattern_count = VAR_9;
    VAR_8->patterns_size = VAR_10;
    VAR_8->patterns = VAR_23;
}
