
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int hash ;
struct TYPE_5__ {int (* addContextToStore ) (int ,void const*,int ,int *) ;scalar_t__ (* getProp ) (void const*,int ,int *,int*) ;} ;
typedef TYPE_1__ WINE_CONTEXT_INTERFACE ;
typedef int WCHAR ;
typedef int * LPBYTE ;
typedef int LONG ;
typedef int HKEY ;
typedef int HCERTSTORE ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (int *,int *) ;
 void* FUNC_2 (int *,int,int,int*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int *,int*,int *,int *,int *,int *) ;
 int FUNC_8 (int ,int *,int ,int ,int *) ;
 int FUNC_9 (int ,int ,int *,int *,int *,int*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (void const*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 scalar_t__ FUNC_14 (void const*,int ,int *,int*) ;
 int FUNC_15 (int ,void const*,int ,int *) ;

__attribute__((used)) static void FUNC_16(HKEY VAR_9, DWORD VAR_10,
 HCERTSTORE VAR_11)
{
    LONG VAR_12;
    DWORD VAR_13 = 0;
    WCHAR VAR_14[VAR_5];

    do {
        DWORD VAR_15 = FUNC_0(VAR_14);

        VAR_12 = FUNC_7(VAR_9, VAR_13++, VAR_14, &VAR_15, ((void*)0), ((void*)0), ((void*)0),
         ((void*)0));
        if (!VAR_12)
        {
            HKEY VAR_16;

            VAR_12 = FUNC_8(VAR_9, VAR_14, 0, VAR_4, &VAR_16);
            if (!VAR_12)
            {
                LPBYTE VAR_17 = ((void*)0);

                VAR_15 = 0;
                VAR_12 = FUNC_9(VAR_16, VAR_0, ((void*)0), ((void*)0), ((void*)0), &VAR_15);
                if (!VAR_12)
                    VAR_17 = FUNC_4(VAR_15);
                if (VAR_17)
                {
                    VAR_12 = FUNC_9(VAR_16, VAR_0, ((void*)0), ((void*)0), VAR_17,
                     &VAR_15);
                    if (!VAR_12)
                    {
                        const void *VAR_18;
                        DWORD VAR_19;

                        FUNC_10("Adding cert with hash %s\n",
                         FUNC_12(VAR_14));
                        VAR_18 = FUNC_2(VAR_17, VAR_15,
                         VAR_10, &VAR_19);
                        if (VAR_18)
                        {
                            const WINE_CONTEXT_INTERFACE *VAR_20;
                            BYTE VAR_21[20];

                            switch (VAR_19)
                            {
                            case 130:
                                VAR_20 = VAR_8;
                                break;
                            case 129:
                                VAR_20 = VAR_6;
                                break;
                            case 128:
                                VAR_20 = VAR_7;
                                break;
                            default:
                                VAR_20 = ((void*)0);
                            }
                            if (VAR_20)
                            {
                                VAR_15 = sizeof(VAR_21);
                                if (VAR_20->getProp(VAR_18,
                                 VAR_1, VAR_21, &VAR_15))
                                {
                                    WCHAR VAR_22[20 * 2 + 1];

                                    FUNC_1(VAR_21, VAR_22);
                                    FUNC_10("comparing %s\n",
                                     FUNC_12(VAR_22));
                                    FUNC_10("with %s\n", FUNC_12(VAR_14));
                                    if (!FUNC_13(VAR_22, VAR_14))
                                    {
                                        FUNC_10("hash matches, adding\n");
                                        VAR_20->addContextToStore(
                                         VAR_11, VAR_18,
                                         VAR_2, ((void*)0));
                                    }
                                    else
                                        FUNC_10("hash doesn't match, ignoring\n");
                                }
                                FUNC_3(FUNC_11(VAR_18));
                            }
                        }
                    }
                    FUNC_5(VAR_17);
                }
                FUNC_6(VAR_16);
            }

            VAR_12 = VAR_3;
        }
    } while (!VAR_12);
}
