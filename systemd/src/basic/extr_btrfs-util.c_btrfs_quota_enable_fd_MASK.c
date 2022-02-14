
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_ioctl_quota_ctl_args {int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,int ,struct btrfs_ioctl_quota_ctl_args*) ;

int FUNC_3(int VAR_5, bool VAR_6) {
        struct btrfs_ioctl_quota_ctl_args VAR_7 = {
                .cmd = VAR_6 ? VAR_2 : VAR_1,
        };
        int VAR_8;

        FUNC_0(VAR_5 >= 0);

        VAR_8 = FUNC_1(VAR_5);
        if (VAR_8 < 0)
                return VAR_8;
        if (!VAR_8)
                return -VAR_3;

        if (FUNC_2(VAR_5, VAR_0, &VAR_7) < 0)
                return -VAR_4;

        return 0;
}
