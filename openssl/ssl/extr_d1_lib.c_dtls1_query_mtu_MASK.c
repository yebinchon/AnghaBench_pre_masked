
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* d1; } ;
struct TYPE_7__ {scalar_t__ link_mtu; scalar_t__ mtu; } ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,long,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

int FUNC_5(SSL *VAR_3)
{
    if (VAR_3->d1->link_mtu) {
        VAR_3->d1->mtu =
            VAR_3->d1->link_mtu - FUNC_1(FUNC_3(VAR_3));
        VAR_3->d1->link_mtu = 0;
    }


    if (VAR_3->d1->mtu < FUNC_4(VAR_3)) {
        if (!(FUNC_2(VAR_3) & VAR_2)) {
            VAR_3->d1->mtu =
                FUNC_0(FUNC_3(VAR_3), VAR_0, 0, ((void*)0));





            if (VAR_3->d1->mtu < FUNC_4(VAR_3)) {

                VAR_3->d1->mtu = FUNC_4(VAR_3);
                FUNC_0(FUNC_3(VAR_3), VAR_1,
                         (long)VAR_3->d1->mtu, ((void*)0));
            }
        } else
            return 0;
    }
    return 1;
}
