
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* (* enumContextsInStore ) (int ,void const*) ;scalar_t__ (* serialize ) (void const*,int ,int *,scalar_t__*) ;} ;
typedef TYPE_1__ WINE_CONTEXT_INTERFACE ;
typedef scalar_t__ (* SerializedOutputFunc ) (void*,int *,scalar_t__) ;
typedef int * LPBYTE ;
typedef int HCERTSTORE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (void const*) ;
 void* FUNC_4 (int ,void const*) ;
 scalar_t__ FUNC_5 (void const*,int ,int *,scalar_t__*) ;
 scalar_t__ FUNC_6 (void const*,int ,int *,scalar_t__*) ;

__attribute__((used)) static BOOL FUNC_7(SerializedOutputFunc VAR_1,
 void *VAR_2, const WINE_CONTEXT_INTERFACE *VAR_3, HCERTSTORE VAR_4)
{
    const void *VAR_5 = ((void*)0);
    BOOL VAR_6;

    do {
        VAR_5 = VAR_3->enumContextsInStore(VAR_4, VAR_5);
        if (VAR_5)
        {
            DWORD VAR_7 = 0;
            LPBYTE VAR_8 = ((void*)0);

            VAR_6 = VAR_3->serialize(VAR_5, 0, ((void*)0), &VAR_7);
            if (VAR_7)
                VAR_8 = FUNC_1(VAR_7);
            if (VAR_8)
            {
                VAR_6 = VAR_3->serialize(VAR_5, 0, VAR_8, &VAR_7);
                if (VAR_6)
                    VAR_6 = VAR_1(VAR_2, VAR_8, VAR_7);
            }
            FUNC_2(VAR_8);
        }
        else
            VAR_6 = VAR_0;
    } while (VAR_6 && VAR_5 != ((void*)0));
    if (VAR_5)
        FUNC_0(FUNC_3(VAR_5));
    return VAR_6;
}
