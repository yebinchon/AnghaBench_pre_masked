
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_ioctl_quota_rescan_args {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int ,struct btrfs_ioctl_quota_rescan_args*) ;

int FUNC_2(int VAR_2) {
        struct btrfs_ioctl_quota_rescan_args VAR_3 = {};

        FUNC_0(VAR_2 >= 0);

        if (FUNC_1(VAR_2, VAR_0, &VAR_3) < 0)
                return -VAR_1;

        return !!VAR_3.flags;
}
