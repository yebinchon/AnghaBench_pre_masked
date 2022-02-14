
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {int options; TYPE_1__ s3; } ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int VAR_4 ;

int FUNC_2(SSL *VAR_5, PACKET *VAR_6, unsigned int VAR_7, X509 *VAR_8,
                       size_t VAR_9)
{

    if (FUNC_0(VAR_6) != 0) {
        FUNC_1(VAR_5, VAR_0,
                 VAR_1, VAR_3);
        return 0;
    }

    if (VAR_5->options & VAR_2)
        return 1;

    VAR_5->s3.flags |= VAR_4;

    return 1;
}
