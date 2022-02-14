
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ hand_state; } ;
struct TYPE_8__ {TYPE_2__ statem; } ;
typedef TYPE_1__ SSL ;
typedef TYPE_2__ OSSL_STATEM ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(SSL *VAR_3)
{
    OSSL_STATEM *VAR_4 = &VAR_3->statem;

    if (VAR_4->hand_state == VAR_1
        || VAR_4->hand_state == VAR_2) {
        if (FUNC_0(VAR_3))
            return FUNC_1(VAR_3, VAR_0);
        else
            return FUNC_2(VAR_3, VAR_0);
    } else {
        return FUNC_3(VAR_3);
    }
}
