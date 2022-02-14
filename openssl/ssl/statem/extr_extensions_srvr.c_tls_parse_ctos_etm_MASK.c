
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_4__ {int use_etm; } ;
struct TYPE_5__ {int options; TYPE_1__ ext; } ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;


 int VAR_0 ;

int FUNC_0(SSL *VAR_1, PACKET *VAR_2, unsigned int VAR_3, X509 *VAR_4,
                       size_t VAR_5)
{
    if (!(VAR_1->options & VAR_0))
        VAR_1->ext.use_etm = 1;

    return 1;
}
