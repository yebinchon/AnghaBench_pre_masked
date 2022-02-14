
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Description; int ServiceName; int BinPath; int DisplayName; } ;
typedef scalar_t__ SC_HANDLE ;
typedef TYPE_1__* PCREATE_DATA ;
typedef int LPWSTR ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,int ,int ,int ,int ,int ,int *,int *,int *,int *,int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static BOOL
FUNC_7(PCREATE_DATA VAR_9)
{
    SC_HANDLE VAR_10;
    SC_HANDLE VAR_11;
    BOOL VAR_12 = VAR_0;


    VAR_10 = FUNC_5(((void*)0),
                                ((void*)0),
                                VAR_2);
    if (VAR_10)
    {
        VAR_11 = FUNC_2(VAR_10,
                             VAR_9->ServiceName,
                             VAR_9->DisplayName,
                             VAR_3,
                             VAR_6,
                             VAR_4,
                             VAR_5,
                             VAR_9->BinPath,
                             ((void*)0),
                             ((void*)0),
                             ((void*)0),
                             ((void*)0),
                             ((void*)0));

        if (VAR_11)
        {
            LPWSTR VAR_13;



            FUNC_6(VAR_9->ServiceName,
                                  VAR_9->Description);


            if (FUNC_0(&VAR_13,
                                   VAR_8,
                                   VAR_1))
            {
                FUNC_3(VAR_13);

                FUNC_4(VAR_13);
            }

            FUNC_1(VAR_11);
            VAR_12 = VAR_7;
        }

        FUNC_1(VAR_10);
    }

    return VAR_12;
}
