
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DH ;
typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int const*,unsigned char*,int) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int const*,int const**,int *) ;
 int FUNC_3 (int const*,int const**,int *,int *) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (unsigned char*) ;
 unsigned char* FUNC_6 (int) ;

size_t FUNC_7(const DH *VAR_4, unsigned char **VAR_5)
{
    const BIGNUM *VAR_6;
    unsigned char *VAR_7;
    const BIGNUM *VAR_8;
    int VAR_9;

    FUNC_3(VAR_4, &VAR_8, ((void*)0), ((void*)0));
    FUNC_2(VAR_4, &VAR_6, ((void*)0));
    if (VAR_8 == ((void*)0) || VAR_6 == ((void*)0)
            || (VAR_9 = FUNC_1(VAR_8)) == 0
            || FUNC_1(VAR_6) == 0) {
        FUNC_4(VAR_0, VAR_2);
        return 0;
    }
    if ((VAR_7 = FUNC_6(VAR_9)) == ((void*)0)) {
        FUNC_4(VAR_0, VAR_3);
        return 0;
    }




    if (FUNC_0(VAR_6, VAR_7, VAR_9) < 0) {
        FUNC_5(VAR_7);
        FUNC_4(VAR_0, VAR_1);
        return 0;
    }
    *VAR_5 = VAR_7;
    return VAR_9;
}
