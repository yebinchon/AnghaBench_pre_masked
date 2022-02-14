
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CONF ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,char const*) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*) ;
 int VAR_1 ;

__attribute__((used)) static CONF *FUNC_9(const char *VAR_2)
{
    CONF *VAR_3 = FUNC_8(VAR_2);

    if (VAR_3 != ((void*)0)) {
        const char *VAR_4;

        FUNC_2(VAR_1, "Using configuration from %s\n", VAR_2);
        VAR_4 = FUNC_5(VAR_3, ((void*)0), VAR_0);
        if (VAR_4 != ((void*)0)) {
            BIO *VAR_5 = FUNC_1(VAR_4, "r");
            if (!VAR_5)
                FUNC_4(VAR_1);
            else {
                FUNC_6(VAR_5);
                FUNC_0(VAR_5);
            }
        } else
            FUNC_3();
        if (!FUNC_7(VAR_3))
            FUNC_4(VAR_1);
    }
    return VAR_3;
}
