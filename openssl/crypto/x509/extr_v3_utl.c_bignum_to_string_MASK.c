
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 char* FUNC_0 (int const*) ;
 char* FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 int FUNC_5 (char*,char*,size_t) ;
 int FUNC_6 (char*,char*,size_t) ;
 int VAR_1 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static char *FUNC_9(const BIGNUM *VAR_2)
{
    char *VAR_3, *VAR_4;
    size_t VAR_5;






    if (FUNC_2(VAR_2) < 128)
        return FUNC_0(VAR_2);

    VAR_3 = FUNC_1(VAR_2);
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    VAR_5 = FUNC_8(VAR_3) + 3;
    VAR_4 = FUNC_4(VAR_5);
    if (VAR_4 == ((void*)0)) {
        FUNC_7(VAR_1, VAR_0);
        FUNC_3(VAR_3);
        return ((void*)0);
    }


    if (VAR_3[0] == '-') {
        FUNC_6(VAR_4, "-0x", VAR_5);
        FUNC_5(VAR_4, VAR_3 + 1, VAR_5);
    } else {
        FUNC_6(VAR_4, "0x", VAR_5);
        FUNC_5(VAR_4, VAR_3, VAR_5);
    }
    FUNC_3(VAR_3);
    return VAR_4;
}
