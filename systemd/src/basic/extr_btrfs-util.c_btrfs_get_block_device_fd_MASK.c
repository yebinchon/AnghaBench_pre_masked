
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct stat {scalar_t__ st_rdev; int st_mode; } ;
struct btrfs_ioctl_fs_info_args {int num_devices; int max_id; int devid; scalar_t__ path; } ;
struct btrfs_ioctl_dev_info_args {int num_devices; int max_id; int devid; scalar_t__ path; } ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int,int ,struct btrfs_ioctl_fs_info_args*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;

int FUNC_6(int VAR_5, dev_t *VAR_6) {
        struct btrfs_ioctl_fs_info_args VAR_7 = {};
        uint64_t VAR_8;
        int VAR_9;

        FUNC_1(VAR_5 >= 0);
        FUNC_1(VAR_6);

        VAR_9 = FUNC_2(VAR_5);
        if (VAR_9 < 0)
                return VAR_9;
        if (!VAR_9)
                return -VAR_3;

        if (FUNC_3(VAR_5, VAR_1, &VAR_7) < 0)
                return -VAR_4;


        if (VAR_7.num_devices != 1) {
                *VAR_6 = 0;
                return 0;
        }

        for (VAR_8 = 1; VAR_8 <= VAR_7.max_id; VAR_8++) {
                struct btrfs_ioctl_dev_info_args VAR_10 = {
                        .devid = VAR_8,
                };
                struct stat VAR_11;

                if (FUNC_3(VAR_5, VAR_0, &VAR_10) < 0) {
                        if (VAR_4 == VAR_2)
                                continue;

                        return -VAR_4;
                }

                if (FUNC_5((char*) VAR_10.path, &VAR_11) < 0)
                        return -VAR_4;

                if (!FUNC_0(VAR_11.st_mode))
                        return -VAR_2;

                if (FUNC_4(VAR_11.st_rdev) == 0)
                        return -VAR_2;

                *VAR_6 = VAR_11.st_rdev;
                return 1;
        }

        return -VAR_2;
}
