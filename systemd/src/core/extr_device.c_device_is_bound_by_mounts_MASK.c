
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int bind_mounts; } ;
typedef TYPE_1__ sd_device ;
typedef TYPE_1__ Device ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,char*,char const*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char*,char const**) ;

__attribute__((used)) static bool FUNC_4(Device *VAR_0, sd_device *VAR_1) {
        const char *VAR_2;
        int VAR_3;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        if (FUNC_3(VAR_1, "SYSTEMD_MOUNT_DEVICE_BOUND", &VAR_2) >= 0) {
                VAR_3 = FUNC_2(VAR_2);
                if (VAR_3 < 0)
                        FUNC_1(VAR_1, VAR_3, "Failed to parse SYSTEMD_MOUNT_DEVICE_BOUND='%s' udev property, ignoring: %m", VAR_2);

                VAR_0->bind_mounts = VAR_3 > 0;
        } else
                VAR_0->bind_mounts = 0;

        return VAR_0->bind_mounts;
}
