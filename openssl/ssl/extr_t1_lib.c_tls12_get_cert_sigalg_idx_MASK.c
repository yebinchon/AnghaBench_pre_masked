
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int sig_idx; } ;
struct TYPE_11__ {int* valid_flags; TYPE_1__* new_cipher; } ;
struct TYPE_12__ {TYPE_2__ tmp; } ;
struct TYPE_14__ {TYPE_3__ s3; } ;
struct TYPE_13__ {int amask; scalar_t__ nid; } ;
struct TYPE_10__ {int algorithm_auth; int algorithm_mkey; } ;
typedef TYPE_4__ SSL_CERT_LOOKUP ;
typedef TYPE_5__ SSL ;
typedef TYPE_6__ SIGALG_LOOKUP ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const SSL *VAR_3, const SIGALG_LOOKUP *VAR_4)
{
    int VAR_5 = VAR_4->sig_idx;
    const SSL_CERT_LOOKUP *VAR_6 = FUNC_0(VAR_5);


    if (VAR_6 == ((void*)0)
            || (VAR_6->amask & VAR_3->s3.tmp.new_cipher->algorithm_auth) == 0
            || (VAR_6->nid == VAR_1
                && (VAR_3->s3.tmp.new_cipher->algorithm_mkey & VAR_2) != 0))
        return -1;

    return VAR_3->s3.tmp.valid_flags[VAR_5] & VAR_0 ? VAR_5 : -1;
}
