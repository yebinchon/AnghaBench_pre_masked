
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int usbevent_t ;
typedef int USBDriver ;
struct TYPE_6__ {TYPE_2__* array; } ;
struct TYPE_4__ {int int_in; int bulk_out; int bulk_in; } ;
struct TYPE_5__ {int driver; int int_ep_config; TYPE_1__ config; int out_ep_config; int in_ep_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_3__ VAR_4 ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_7 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int *,int ,int *) ;

__attribute__((used)) static void FUNC_13(USBDriver *VAR_8, usbevent_t VAR_9) {
    switch (VAR_9) {
        case 134:
            return;

        case 133:
            FUNC_4();


            FUNC_12(VAR_8, VAR_0, &VAR_5);







            for (int VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
                FUNC_12(VAR_8, VAR_4.array[VAR_10].config.bulk_in, &VAR_4.array[VAR_10].in_ep_config);
                FUNC_12(VAR_8, VAR_4.array[VAR_10].config.bulk_out, &VAR_4.array[VAR_10].out_ep_config);
                if (VAR_4.array[VAR_10].config.int_in) {
                    FUNC_12(VAR_8, VAR_4.array[VAR_10].config.int_in, &VAR_4.array[VAR_10].int_ep_config);
                }
                FUNC_6(&VAR_4.array[VAR_10].driver);
            }
            FUNC_5();
            return;
        case 130:




        case 129:

        case 132:
            for (int VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
                FUNC_0();

                FUNC_7(&VAR_4.array[VAR_11].driver);
                FUNC_1();
            }
            return;

        case 128:

            for (int VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
                FUNC_0();

                FUNC_8(&VAR_4.array[VAR_12].driver);
                FUNC_1();
            }
            FUNC_11();





            return;

        case 131:
            return;
    }
}
