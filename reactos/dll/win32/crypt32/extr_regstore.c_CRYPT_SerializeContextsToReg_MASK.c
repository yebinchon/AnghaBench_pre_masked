
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hash ;
struct TYPE_3__ {void* (* enumContextsInStore ) (int ,void const*) ;scalar_t__ (* serialize ) (void const*,int ,int *,int*) ;scalar_t__ (* getProp ) (void const*,int ,int *,int*) ;} ;
typedef TYPE_1__ WINE_CONTEXT_INTERFACE ;
typedef int * LPBYTE ;
typedef int HKEY ;
typedef int HCERTSTORE ;
typedef int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int *,int *,int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (void const*) ;
 void* FUNC_5 (int ,void const*) ;
 scalar_t__ FUNC_6 (void const*,int ,int *,int*) ;
 scalar_t__ FUNC_7 (void const*,int ,int *,int*) ;
 scalar_t__ FUNC_8 (void const*,int ,int *,int*) ;

BOOL FUNC_9(HKEY VAR_2, DWORD VAR_3,
 const WINE_CONTEXT_INTERFACE *VAR_4, HCERTSTORE VAR_5)
{
    const void *VAR_6 = ((void*)0);
    BOOL VAR_7;

    do {
        VAR_6 = VAR_4->enumContextsInStore(VAR_5, VAR_6);
        if (VAR_6)
        {
            BYTE VAR_8[20];
            DWORD VAR_9 = sizeof(VAR_8);

            VAR_7 = VAR_4->getProp(VAR_6, VAR_0, VAR_8,
             &VAR_9);
            if (VAR_7)
            {
                DWORD VAR_10 = 0;
                LPBYTE VAR_11 = ((void*)0);

                VAR_7 = VAR_4->serialize(VAR_6, 0, ((void*)0), &VAR_10);
                if (VAR_10)
                    VAR_11 = FUNC_2(VAR_10);
                if (VAR_11)
                {
                    VAR_7 = VAR_4->serialize(VAR_6, 0, VAR_11, &VAR_10);
                    if (VAR_7)
                        VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_8, VAR_11, VAR_10);
                }
                FUNC_3(VAR_11);
            }
        }
        else
            VAR_7 = VAR_1;
    } while (VAR_7 && VAR_6 != ((void*)0));
    if (VAR_6)
        FUNC_1(FUNC_4(VAR_6));
    return VAR_7;
}
