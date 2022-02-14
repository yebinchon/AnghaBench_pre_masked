
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t tid_t ;
typedef char WCHAR ;
typedef int ITypeLib ;
typedef int ITypeInfo ;
typedef int HRESULT ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int **) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (void**,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int *,int,int ,int ,int **) ;
 int FUNC_7 (char const*,int **) ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (size_t) ;
 int ** VAR_3 ;
 int VAR_4 ;

HRESULT FUNC_10(tid_t VAR_5, ITypeInfo **VAR_6)
{
    HRESULT VAR_7;

    if (!VAR_4)
    {
        ITypeLib *VAR_8;

        VAR_7 = FUNC_6(&VAR_0, 1, 0, VAR_1, &VAR_8);
        if (FUNC_1(VAR_7)) {
            static const WCHAR VAR_9[] = {'m','s','i','s','e','r','v','e','r','.','t','l','b',0};
            VAR_7 = FUNC_7(VAR_9, &VAR_8);
            if (FUNC_1(VAR_7)) {
                FUNC_0("Could not load msiserver.tlb\n");
                return VAR_7;
            }
        }

        if (FUNC_5((void**)&VAR_4, VAR_8, ((void*)0)))
            FUNC_4(VAR_8);
    }

    if (!VAR_3[VAR_5])
    {
        ITypeInfo *VAR_10;

        VAR_7 = FUNC_3(VAR_4, FUNC_9(VAR_5), &VAR_10);
        if (FUNC_1(VAR_7)) {
            FUNC_0("Could not load ITypeInfo for %s\n", FUNC_8(FUNC_9(VAR_5)));
            return VAR_7;
        }

        if(FUNC_5((void**)(VAR_3+VAR_5), VAR_10, ((void*)0)))
            FUNC_2(VAR_10);
    }

    *VAR_6 = VAR_3[VAR_5];
    return VAR_2;
}
