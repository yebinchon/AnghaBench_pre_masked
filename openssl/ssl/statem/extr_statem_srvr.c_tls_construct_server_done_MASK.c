
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_6__ {int cert_request; } ;
struct TYPE_7__ {TYPE_1__ tmp; } ;
struct TYPE_8__ {TYPE_2__ s3; } ;
typedef TYPE_3__ SSL ;


 int FUNC_0 (TYPE_3__*,int ) ;

int FUNC_1(SSL *VAR_0, WPACKET *VAR_1)
{
    if (!VAR_0->s3.tmp.cert_request) {
        if (!FUNC_0(VAR_0, 0)) {

            return 0;
        }
    }
    return 1;
}
