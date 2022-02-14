
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MP_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int ,char*) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(MP_t VAR_4, MP_t VAR_5, MP_t VAR_6)
{
    int VAR_7 = VAR_3;
    MP_t VAR_8;
    FUNC_9(VAR_4);

    FUNC_4(VAR_8);
    FUNC_9(VAR_8);


    FUNC_6(VAR_8, 1);
    if (FUNC_0(VAR_4, VAR_8) < 0)
    {
        FUNC_8(VAR_1, "DH public key must be at least 2");
        VAR_7 = VAR_0;
        goto failed;
    }


    FUNC_5(VAR_8, VAR_5);
    FUNC_7(VAR_8, 1);
    if (FUNC_0(VAR_4, VAR_8) > 0)
    {
        FUNC_8(VAR_1, "DH public key must be at most p-2");
        VAR_7 = VAR_0;
        goto failed;
    }







    if (VAR_6)
    {

        FUNC_3(VAR_8, VAR_4, VAR_6, VAR_5);

        if (FUNC_1(VAR_8) != 0)
        {
            FUNC_8(VAR_2, "DH public key does not fulfill y^q mod p = 1");
        }
    }

failed:
    FUNC_2(VAR_8);
    return VAR_7;
}
