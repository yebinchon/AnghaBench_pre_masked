
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * sigalg; } ;
struct TYPE_9__ {TYPE_1__ tmp; } ;
struct TYPE_11__ {TYPE_3__* cert; TYPE_2__ s3; } ;
struct TYPE_10__ {int cert_flags; } ;
typedef TYPE_4__ SSL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *,int *,int *,int) ;
 int FUNC_1 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_2(SSL *VAR_1)
{

    if (!FUNC_1(VAR_1, 0) || VAR_1->s3.tmp.sigalg == ((void*)0))
        return 0;




    if (VAR_1->cert->cert_flags & VAR_0 &&
        !FUNC_0(VAR_1, ((void*)0), ((void*)0), ((void*)0), -2))
        return 0;
    return 1;
}
