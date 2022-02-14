
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int OCSP_RESPONSE ;


 int FUNC_0 (void*,char*,int,int) ;
 int FUNC_1 (void*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*,int *,int ) ;
 int FUNC_4 (int *,unsigned char const**) ;
 int * FUNC_5 (int *,unsigned char const**,int) ;

__attribute__((used)) static int FUNC_6(SSL *VAR_0, void *VAR_1)
{
    const unsigned char *VAR_2;
    int VAR_3;
    OCSP_RESPONSE *VAR_4;
    VAR_3 = FUNC_4(VAR_0, &VAR_2);
    FUNC_1(VAR_1, "OCSP response: ");
    if (VAR_2 == ((void*)0)) {
        FUNC_1(VAR_1, "no response sent\n");
        return 1;
    }
    VAR_4 = FUNC_5(((void*)0), &VAR_2, VAR_3);
    if (VAR_4 == ((void*)0)) {
        FUNC_1(VAR_1, "response parse error\n");
        FUNC_0(VAR_1, (char *)VAR_2, VAR_3, 4);
        return 0;
    }
    FUNC_1(VAR_1, "\n======================================\n");
    FUNC_3(VAR_1, VAR_4, 0);
    FUNC_1(VAR_1, "======================================\n");
    FUNC_2(VAR_4);
    return 1;
}
