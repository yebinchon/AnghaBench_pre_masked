
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int message; } ;
typedef TYPE_1__ MSG ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef void* HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (scalar_t__,...) ;
 int FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int *,int ,int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int,void**,int ,int,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (int ,int (*) (scalar_t__)) ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static void FUNC_12(void)
{
    DWORD VAR_10;
    HRESULT VAR_11;
    HANDLE VAR_12;
    DWORD VAR_13;
    HANDLE VAR_14[2];

    VAR_9 = FUNC_3(((void*)0), VAR_6, VAR_2, ((void*)0));
    VAR_12 = FUNC_3(((void*)0), VAR_2, VAR_2, "Wine COM Test Ready Event");
    VAR_14[0] = FUNC_3(((void*)0), VAR_2, VAR_2, "Wine COM Test Quit Event");
    VAR_14[1] = FUNC_3(((void*)0), VAR_2, VAR_2, "Wine COM Test Repeat Event");

again:
    VAR_11 = FUNC_1(&VAR_1, (IUnknown *)&VAR_7,
                               VAR_0, VAR_5, &VAR_10);
    FUNC_10(VAR_11, FUNC_1);

    FUNC_7(VAR_12);

    do
    {
        VAR_13 = FUNC_5(2, VAR_14, VAR_2, 30000, VAR_4);
        if (VAR_13 == VAR_8+2)
        {
            MSG VAR_15;

            if (FUNC_6(&VAR_15, ((void*)0), 0, 0, VAR_3))
            {
                FUNC_11("Message 0x%x\n", VAR_15.message);
                FUNC_8(&VAR_15);
                FUNC_4(&VAR_15);
            }
        }
        else if (VAR_13 == VAR_8+1)
        {
            VAR_11 = FUNC_2(VAR_10);
            FUNC_10(VAR_11, FUNC_2);
            goto again;
        }
    }
    while (VAR_13 == VAR_8+2);

    FUNC_9( VAR_13 == VAR_8, "quit event wait timed out\n" );
    VAR_11 = FUNC_2(VAR_10);
    FUNC_10(VAR_11, FUNC_2);
    FUNC_0(VAR_14[0]);
    FUNC_0(VAR_14[1]);
}
