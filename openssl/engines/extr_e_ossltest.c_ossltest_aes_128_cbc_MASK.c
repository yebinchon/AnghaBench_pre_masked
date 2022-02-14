
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int ,int,int) ;
 int FUNC_3 (int const*,int ) ;
 int FUNC_4 (int const*,int) ;
 int FUNC_5 (int const*,int ) ;
 int FUNC_6 (int const*,int ) ;
 int FUNC_7 (int const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 () ;
 int VAR_2 ;
 int const* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static const EVP_CIPHER *FUNC_9(void)
{
    if (VAR_3 == ((void*)0)
        && ((VAR_3 = FUNC_2(VAR_2,
                                                       16 ,
                                                       16 )) == ((void*)0)
            || !FUNC_7(VAR_3,16)
            || !FUNC_4(VAR_3,
                                          VAR_1
                                          | VAR_0)
            || !FUNC_6(VAR_3,
                                         VAR_5)
            || !FUNC_3(VAR_3,
                                              VAR_4)
            || !FUNC_5(VAR_3,
                                                  FUNC_0(FUNC_8())))) {
        FUNC_1(VAR_3);
        VAR_3 = ((void*)0);
    }
    return VAR_3;
}
