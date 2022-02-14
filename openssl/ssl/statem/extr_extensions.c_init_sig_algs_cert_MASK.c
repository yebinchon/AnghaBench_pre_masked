
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * peer_cert_sigalgs; } ;
struct TYPE_6__ {TYPE_1__ tmp; } ;
struct TYPE_7__ {TYPE_2__ s3; } ;
typedef TYPE_3__ SSL ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(SSL *VAR_0, unsigned int VAR_1)
{

    FUNC_0(VAR_0->s3.tmp.peer_cert_sigalgs);
    VAR_0->s3.tmp.peer_cert_sigalgs = ((void*)0);

    return 1;
}
