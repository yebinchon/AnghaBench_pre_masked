
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(SSL *VAR_4, int *VAR_5, void *VAR_6)
{
    SSL_CTX *VAR_7 = (SSL_CTX *)VAR_6;

    if (FUNC_0(VAR_4, VAR_7) == ((void*)0)) {
        *VAR_5 = VAR_0;
        return VAR_1;
    }
    VAR_3++;
    return VAR_2;
}
