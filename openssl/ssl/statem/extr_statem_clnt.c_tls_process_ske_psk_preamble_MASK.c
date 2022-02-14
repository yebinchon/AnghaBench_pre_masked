
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* session; } ;
struct TYPE_5__ {int * psk_identity_hint; } ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int **) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_2__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(SSL *VAR_8, PACKET *VAR_9)
{

    PACKET VAR_10;



    if (!FUNC_1(VAR_9, &VAR_10)) {
        FUNC_4(VAR_8, VAR_2, VAR_5,
                 VAR_7);
        return 0;
    }







    if (FUNC_2(&VAR_10) > VAR_1) {
        FUNC_4(VAR_8, VAR_3,
                 VAR_5,
                 VAR_6);
        return 0;
    }

    if (FUNC_2(&VAR_10) == 0) {
        FUNC_0(VAR_8->session->psk_identity_hint);
        VAR_8->session->psk_identity_hint = ((void*)0);
    } else if (!FUNC_3(&VAR_10,
                               &VAR_8->session->psk_identity_hint)) {
        FUNC_4(VAR_8, VAR_4, VAR_5,
                 VAR_0);
        return 0;
    }

    return 1;





}
