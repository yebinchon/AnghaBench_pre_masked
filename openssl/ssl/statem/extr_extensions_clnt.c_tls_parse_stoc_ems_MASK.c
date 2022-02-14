
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_5__ {int flags; } ;
struct TYPE_7__ {int options; TYPE_2__* session; int hit; TYPE_1__ s3; } ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_3__ SSL ;
typedef int PACKET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(SSL *VAR_3, PACKET *VAR_4, unsigned int VAR_5, X509 *VAR_6,
                       size_t VAR_7)
{
    if (VAR_3->options & VAR_0)
        return 1;
    VAR_3->s3.flags |= VAR_2;
    if (!VAR_3->hit)
        VAR_3->session->flags |= VAR_1;

    return 1;
}
