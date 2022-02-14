
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device_monitor ;
typedef int sd_device ;
typedef int Manager ;
typedef scalar_t__ DeviceAction ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,char const*,int,int) ;
 int FUNC_6 (int *,int,char*) ;
 int FUNC_7 (int *,int,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char const**) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static int FUNC_12(sd_device_monitor *VAR_5, sd_device *VAR_6, void *VAR_7) {
        Manager *VAR_8 = VAR_7;
        DeviceAction VAR_9;
        const char *VAR_10;
        int VAR_11;

        FUNC_0(VAR_8);
        FUNC_0(VAR_6);

        VAR_11 = FUNC_9(VAR_6, &VAR_10);
        if (VAR_11 < 0) {
                FUNC_6(VAR_6, VAR_11, "Failed to get device sys path: %m");
                return 0;
        }

        VAR_11 = FUNC_1(VAR_6, &VAR_9);
        if (VAR_11 < 0) {
                FUNC_6(VAR_6, VAR_11, "Failed to get udev action: %m");
                return 0;
        }

        if (VAR_9 == VAR_0)
                FUNC_4(VAR_8, VAR_10);




        if (VAR_9 == VAR_1) {
                VAR_11 = FUNC_11(VAR_8, VAR_6);
                if (VAR_11 < 0)
                        FUNC_7(VAR_6, VAR_11, "Failed to process swap device remove event, ignoring: %m");




                FUNC_5(VAR_8, VAR_10, 0, VAR_4|VAR_2|VAR_3);

        } else if (FUNC_2(VAR_6)) {

                (void) FUNC_3(VAR_8, VAR_6);

                VAR_11 = FUNC_10(VAR_8, VAR_6);
                if (VAR_11 < 0)
                        FUNC_7(VAR_6, VAR_11, "Failed to process swap device new event, ignoring: %m");

                FUNC_8(VAR_8);


                FUNC_5(VAR_8, VAR_10, VAR_4, VAR_4);

        } else {




                FUNC_5(VAR_8, VAR_10, 0, VAR_4);
        }

        return 0;
}
