
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ cookieok; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_10__ {scalar_t__ hello_retry_request; TYPE_2__ ext; TYPE_1__ s3; } ;
typedef TYPE_3__ SSL ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;

int FUNC_4(SSL *VAR_2)
{
    int VAR_3;


    if (!FUNC_2(VAR_2))
        return 0;

    FUNC_0();

    VAR_2->s3.flags |= VAR_1;
    VAR_3 = FUNC_1(VAR_2);
    VAR_2->s3.flags &= ~VAR_1;

    if (VAR_3 > 0 && VAR_2->ext.cookieok)
        return 1;

    if (VAR_2->hello_retry_request == VAR_0 && !FUNC_3(VAR_2))
        return 0;

    return -1;
}
