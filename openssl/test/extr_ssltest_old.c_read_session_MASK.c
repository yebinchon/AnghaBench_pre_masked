
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_SESSION ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,int *,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static SSL_SESSION *FUNC_5(const char *VAR_1)
{
    SSL_SESSION *VAR_2;
    BIO *VAR_3 = FUNC_1(VAR_1, "r");

    if (VAR_3 == ((void*)0)) {
        FUNC_2(VAR_0, "Can't open session file %s\n", VAR_1);
        FUNC_3(VAR_0);
        return ((void*)0);
    }
    VAR_2 = FUNC_4(VAR_3, ((void*)0), 0, ((void*)0));
    if (VAR_2 == ((void*)0)) {
        FUNC_2(VAR_0, "Can't parse session file %s\n", VAR_1);
        FUNC_3(VAR_0);
    }
    FUNC_0(VAR_3);
    return VAR_2;
}
