
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {int hand_state; } ;
struct TYPE_19__ {TYPE_2__ statem; } ;
typedef TYPE_1__ SSL ;
typedef int PACKET ;
typedef TYPE_2__ OSSL_STATEM ;
typedef int MSG_PROCESS_RETURN ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (TYPE_1__*,int *) ;
 int FUNC_14 (TYPE_1__*,int *) ;

MSG_PROCESS_RETURN FUNC_15(SSL *VAR_4, PACKET *VAR_5)
{
    OSSL_STATEM *VAR_6 = &VAR_4->statem;

    switch (VAR_6->hand_state) {
    default:

        FUNC_0(VAR_4, VAR_2,
                 VAR_3,
                 VAR_0);
        return VAR_1;

    case 128:
        return FUNC_14(VAR_4, VAR_5);

    case 141:
        return FUNC_1(VAR_4, VAR_5);

    case 140:
        return FUNC_12(VAR_4, VAR_5);

    case 137:
        return FUNC_3(VAR_4, VAR_5);

    case 138:
        return FUNC_2(VAR_4, VAR_5);

    case 132:
        return FUNC_9(VAR_4, VAR_5);

    case 139:
        return FUNC_4(VAR_4, VAR_5);

    case 129:
        return FUNC_13(VAR_4, VAR_5);

    case 136:
        return FUNC_5(VAR_4, VAR_5);

    case 130:
        return FUNC_11(VAR_4, VAR_5);

    case 134:
        return FUNC_7(VAR_4, VAR_5);

    case 133:
        return FUNC_8(VAR_4, VAR_5);

    case 135:
        return FUNC_6(VAR_4, VAR_5);

    case 131:
        return FUNC_10(VAR_4, VAR_5);
    }
}
