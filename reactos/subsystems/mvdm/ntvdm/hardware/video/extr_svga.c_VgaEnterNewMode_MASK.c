
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SCREEN_MODE ;
typedef int PCOORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_5(SCREEN_MODE VAR_10, PCOORD VAR_11)
{

    if (VAR_10 == VAR_6)
    {


        if (!FUNC_4(
                                        VAR_11,
                                        VAR_9))
        {
            FUNC_0(L"An unexpected VGA error occurred while switching into text mode. Error: %u", FUNC_2());
            FUNC_1();
            return VAR_1;
        }


        VAR_0 = VAR_8;


        VAR_5 = VAR_6;

        return VAR_7;
    }
    else
    {


        if (!FUNC_3(
                                            VAR_11,
                                            VAR_4))
        {
            FUNC_0(L"An unexpected VGA error occurred while switching into graphics mode. Error: %u", FUNC_2());
            FUNC_1();
            return VAR_1;
        }


        VAR_0 = VAR_3;


        VAR_5 = VAR_2;

        return VAR_7;
    }
}
