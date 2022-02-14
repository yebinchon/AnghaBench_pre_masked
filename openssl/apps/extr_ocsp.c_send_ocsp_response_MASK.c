
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OCSP_RESPONSE ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_0, OCSP_RESPONSE *VAR_1)
{
    char VAR_2[] =
        "HTTP/1.0 200 OK\r\nContent-type: application/ocsp-response\r\n"
        "Content-Length: %d\r\n\r\n";
    if (VAR_0 == ((void*)0))
        return 0;
    FUNC_1(VAR_0, VAR_2, FUNC_2(VAR_1, ((void*)0)));
    FUNC_3(VAR_0, VAR_1);
    (void)FUNC_0(VAR_0);
    return 1;
}
