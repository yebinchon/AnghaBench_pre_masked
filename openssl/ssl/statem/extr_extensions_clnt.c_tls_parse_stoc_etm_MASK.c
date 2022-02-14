
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_10__ {int use_etm; } ;
struct TYPE_8__ {TYPE_1__* new_cipher; } ;
struct TYPE_9__ {TYPE_2__ tmp; } ;
struct TYPE_11__ {int options; TYPE_4__ ext; TYPE_3__ s3; } ;
struct TYPE_7__ {scalar_t__ algorithm_mac; scalar_t__ algorithm_enc; } ;
typedef TYPE_5__ SSL ;
typedef int PACKET ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_0(SSL *VAR_3, PACKET *VAR_4, unsigned int VAR_5, X509 *VAR_6,
                       size_t VAR_7)
{

    if (!(VAR_3->options & VAR_1)
            && VAR_3->s3.tmp.new_cipher->algorithm_mac != VAR_0
            && VAR_3->s3.tmp.new_cipher->algorithm_enc != VAR_2)
        VAR_3->ext.use_etm = 1;

    return 1;
}
