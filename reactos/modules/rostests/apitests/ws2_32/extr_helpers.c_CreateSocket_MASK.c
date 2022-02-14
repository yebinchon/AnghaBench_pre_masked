
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SOCKET ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;

int FUNC_5(SOCKET* VAR_4)
{

    *VAR_4 = FUNC_4(VAR_0, VAR_3, VAR_2);
    FUNC_2(*VAR_4 != VAR_1, "*psck = %d\n", *VAR_4);

    if(*VAR_4 == VAR_1)
    {
        FUNC_3("Winsock error code is %u\n", FUNC_1());
        FUNC_0();
        return 0;
    }

    return 1;
}
