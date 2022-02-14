
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int on ;
typedef int BIO_ADDR ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int,int ,int ,void const*,int) ;

int FUNC_7(int VAR_8, const BIO_ADDR *VAR_9, int VAR_10)
{

    int VAR_11 = 1;


    if (VAR_8 == -1) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }






    if (VAR_10 & VAR_4) {
        if (FUNC_6(VAR_8, VAR_6, VAR_7,
                       (const void *)&VAR_11, sizeof(VAR_11)) != 0) {
            FUNC_3(VAR_5, FUNC_5(),
                           "calling setsockopt()");
            FUNC_2(VAR_0, VAR_3);
            return 0;
        }
    }


    if (FUNC_4(VAR_8, FUNC_0(VAR_9), FUNC_1(VAR_9)) != 0) {
        FUNC_3(VAR_5, FUNC_5(),
                       "calling bind()");
        FUNC_2(VAR_0, VAR_2);
        return 0;
    }

    return 1;
}
