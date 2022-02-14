
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_7__ {TYPE_1__* new_cipher; } ;
struct TYPE_8__ {TYPE_2__ tmp; } ;
struct TYPE_9__ {TYPE_3__ s3; } ;
struct TYPE_6__ {int algorithm_auth; } ;
typedef TYPE_4__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;

int FUNC_2(X509 *VAR_4, SSL *VAR_5)
{
    if (VAR_5->s3.tmp.new_cipher->algorithm_auth & VAR_2) {

        if (!(FUNC_1(VAR_4) & VAR_3)) {
            FUNC_0(VAR_0,
                   VAR_1);
            return 0;
        }
    }
    return 1;
}
