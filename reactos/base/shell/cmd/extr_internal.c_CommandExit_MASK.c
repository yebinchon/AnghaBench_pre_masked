
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPTSTR ;
typedef int INT ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int) ;
 scalar_t__ FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

INT FUNC_8(LPTSTR VAR_6)
{
    if (!FUNC_5(VAR_6, FUNC_2("/?"), 2))
    {
        FUNC_0(VAR_2, VAR_1);


        VAR_3 = VAR_0;
        return 0;
    }

    if (FUNC_6(VAR_6, FUNC_2("/b"), 2) == 0)
    {
        VAR_6 += 2;





        if (VAR_4)
            FUNC_1();
        else
            VAR_3 = VAR_2;
    }
    else
    {

        VAR_3 = VAR_2;
    }


    while (FUNC_4(*VAR_6))
        VAR_6++;


    if (FUNC_3(*VAR_6))
        VAR_5 = FUNC_7(VAR_6);

    return 0;
}
