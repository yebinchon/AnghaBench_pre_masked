
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int handshake_dgst; } ;
struct TYPE_6__ {int * pha_dgst; TYPE_1__ s3; } ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;

int FUNC_2(SSL *VAR_3)
{
    if (VAR_3->pha_dgst == ((void*)0)) {
        FUNC_1(VAR_3, VAR_1,
                 VAR_2,
                 VAR_0);
        return 0;
    }
    if (!FUNC_0(VAR_3->s3.handshake_dgst,
                            VAR_3->pha_dgst)) {
        FUNC_1(VAR_3, VAR_1,
                 VAR_2,
                 VAR_0);
        return 0;
    }
    return 1;
}
