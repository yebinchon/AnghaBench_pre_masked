
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_4__ {int cert; } ;
typedef TYPE_1__ SSL_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,TYPE_1__*,int *,int ,int) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(SSL_CTX *VAR_2, X509 *VAR_3)
{
    int VAR_4;
    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_1, VAR_0);
        return 0;
    }
    VAR_4 = FUNC_1(((void*)0), VAR_2, VAR_3, 0, 1);
    if (VAR_4 != 1) {
        FUNC_0(VAR_1, VAR_4);
        return 0;
    }
    return FUNC_2(VAR_2->cert, VAR_3);
}
