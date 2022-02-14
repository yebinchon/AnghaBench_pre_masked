
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;



 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ,unsigned char**) ;
 int FUNC_6 (int ,unsigned char**) ;
 int FUNC_7 (int ,unsigned char**) ;

int FUNC_8(const EVP_PKEY *VAR_2, unsigned char **VAR_3)
{
    switch (FUNC_4(VAR_2)) {

    case 128:
        return FUNC_6(FUNC_3(VAR_2), VAR_3);


    case 130:
        return FUNC_5(FUNC_1(VAR_2), VAR_3);


    case 129:
        return FUNC_7(FUNC_2(VAR_2), VAR_3);

    default:
        FUNC_0(VAR_0, VAR_1);
        return -1;
    }
}
