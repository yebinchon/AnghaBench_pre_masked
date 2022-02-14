
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,char const*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0, const char *VAR_1,
                          char *VAR_2, int VAR_3)
{
    int VAR_4 = -1;
    char *VAR_5 = FUNC_4(VAR_0, VAR_1);

    if (VAR_5 != ((void*)0)) {
        BIO *VAR_6 = FUNC_1(VAR_5, "r");

        if (VAR_6 != ((void*)0))
            VAR_4 = FUNC_2(VAR_6, VAR_2, VAR_3);
        FUNC_0(VAR_6);
    }

    FUNC_3(VAR_5);
    return VAR_4;
}
