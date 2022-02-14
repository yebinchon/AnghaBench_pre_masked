
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *,unsigned char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,char const*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, unsigned char *VAR_2,
                      unsigned int VAR_3)
{
    int VAR_4;
    BIGNUM *VAR_5 = ((void*)0);

    VAR_4 = FUNC_3(&VAR_5, VAR_1);
    if (!VAR_4) {
        FUNC_0(VAR_0, "Could not convert PSK key '%s' to BIGNUM\n",
                   VAR_1);
        FUNC_2(VAR_5);
        return 0;
    }
    if (FUNC_4(VAR_5) > (int)VAR_3) {
        FUNC_0(VAR_0,
                   "psk buffer of callback is too small (%d) for key (%d)\n",
                   VAR_3, FUNC_4(VAR_5));
        FUNC_2(VAR_5);
        return 0;
    }
    VAR_4 = FUNC_1(VAR_5, VAR_2);
    FUNC_2(VAR_5);
    return VAR_4;
}
