
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * peer_ca_names; } ;
struct TYPE_6__ {TYPE_1__ tmp; } ;
struct TYPE_7__ {TYPE_2__ s3; } ;
typedef TYPE_3__ SSL ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(SSL *VAR_1, unsigned int VAR_2)
{
    FUNC_0(VAR_1->s3.tmp.peer_ca_names, VAR_0);
    VAR_1->s3.tmp.peer_ca_names = ((void*)0);
    return 1;
}
