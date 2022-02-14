
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_2__ {int mono_abi_version; char const* mono_libdir; char* mono_path; char* mscorlib_path; } ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,int) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    int VAR_9, VAR_10;
    static const WCHAR VAR_11[] = {'\\','l','i','b','\\','m','o','n','o','\\',0};
    static const WCHAR VAR_12[] = {'\\','m','s','c','o','r','l','i','b','.','d','l','l',0};
    WCHAR VAR_13[VAR_2], VAR_14[VAR_2];
    BOOL VAR_15 = VAR_0;

    if (VAR_8) return;

    FUNC_0(&VAR_6);

    if (VAR_8) goto end;

    for (VAR_9=VAR_3; VAR_9>0; VAR_9--)
    {
        if (!FUNC_3(VAR_13, VAR_9))
            continue;

        for (VAR_10=0; VAR_10<VAR_4; VAR_10++)
        {
            if (VAR_7[VAR_10].mono_abi_version == 0)
            {
                FUNC_5(VAR_14, VAR_13);
                FUNC_4(VAR_14, VAR_11);
                FUNC_4(VAR_14, VAR_7[VAR_10].mono_libdir);
                FUNC_4(VAR_14, VAR_12);

                if (FUNC_1(VAR_14) != VAR_1)
                {
                    VAR_7[VAR_10].mono_abi_version = VAR_9;

                    FUNC_5(VAR_7[VAR_10].mono_path, VAR_13);
                    FUNC_5(VAR_7[VAR_10].mscorlib_path, VAR_14);

                    VAR_15 = VAR_5;
                }
            }
        }
    }

    if (!VAR_15)
    {


        for (VAR_10=0; VAR_10<VAR_4; VAR_10++)
            VAR_7[VAR_10].mono_abi_version = -1;
    }

    VAR_8 = 1;

end:
    FUNC_2(&VAR_6);
}
