
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int USBDriver ;
struct TYPE_10__ {TYPE_4__* array; } ;
struct TYPE_8__ {int * in_state; } ;
struct TYPE_7__ {int * out_state; } ;
struct TYPE_6__ {int * in_state; } ;
struct TYPE_9__ {int config; int int_ep_state; TYPE_3__ int_ep_config; int out_ep_state; TYPE_2__ out_ep_config; int in_ep_state; TYPE_1__ in_ep_config; int driver; } ;
typedef int QMKUSBDriver ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_5__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int VAR_3 ;
 int FUNC_6 (int) ;

void FUNC_7(USBDriver *VAR_4) {
    for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        QMKUSBDriver *VAR_6 = &VAR_1.array[VAR_5].driver;
        VAR_1.array[VAR_5].in_ep_config.in_state = &VAR_1.array[VAR_5].in_ep_state;
        VAR_1.array[VAR_5].out_ep_config.out_state = &VAR_1.array[VAR_5].out_ep_state;
        VAR_1.array[VAR_5].int_ep_config.in_state = &VAR_1.array[VAR_5].int_ep_state;
        FUNC_1(VAR_6, &VAR_1.array[VAR_5].config);
        FUNC_2(VAR_6, &VAR_1.array[VAR_5].config);
    }






    FUNC_4(VAR_4);
    FUNC_6(1500);
    FUNC_5(VAR_4, &VAR_3);
    FUNC_3(VAR_4);

    FUNC_0(&VAR_2);
}
