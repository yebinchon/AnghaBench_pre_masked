
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num; scalar_t__ ptr; } ;
struct TYPE_4__ {int accept_sock; } ;
typedef TYPE_1__ BIO_ACCEPT ;
typedef TYPE_2__ BIO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(BIO *VAR_1)
{
    BIO_ACCEPT *VAR_2;

    VAR_2 = (BIO_ACCEPT *)VAR_1->ptr;
    if (VAR_2->accept_sock != (int)VAR_0) {
        FUNC_1(VAR_2->accept_sock, 2);
        FUNC_0(VAR_2->accept_sock);
        VAR_2->accept_sock = (int)VAR_0;
        VAR_1->num = (int)VAR_0;
    }
}
