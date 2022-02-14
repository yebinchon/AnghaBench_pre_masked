
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORK_STATE ;
struct TYPE_7__ {int hand_state; } ;
struct TYPE_6__ {TYPE_2__ statem; } ;
typedef TYPE_1__ SSL ;
typedef TYPE_2__ OSSL_STATEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;


 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ) ;

WORK_STATE FUNC_2(SSL *VAR_4, WORK_STATE VAR_5)
{
    OSSL_STATEM *VAR_6 = &VAR_4->statem;

    switch (VAR_6->hand_state) {
    default:

        FUNC_0(VAR_4, VAR_1,
                 VAR_2,
                 VAR_0);
        return VAR_3;

    case 128:
    case 129:
        return FUNC_1(VAR_4, VAR_5);
    }
}
