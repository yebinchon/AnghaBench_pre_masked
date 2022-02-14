
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_6(BIO *VAR_1, const char *VAR_2, int VAR_3)
{
    int VAR_4;
    BIO *VAR_5 = FUNC_0(VAR_1);
    char *VAR_6;

    if (VAR_0) {
        if (!FUNC_4(VAR_6 = FUNC_3(VAR_2, VAR_3)))
            return 0;

        VAR_6[VAR_3-1] ^= 1;
        VAR_4 = FUNC_1(VAR_5, VAR_6, VAR_3);
        FUNC_2(VAR_6);
    } else {
        VAR_4 = FUNC_1(VAR_5, VAR_2, VAR_3);
    }
    FUNC_5(VAR_1);

    return VAR_4;
}
