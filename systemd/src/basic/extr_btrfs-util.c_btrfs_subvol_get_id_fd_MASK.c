
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct btrfs_ioctl_ino_lookup_args {int treeid; int objectid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,int ,struct btrfs_ioctl_ino_lookup_args*) ;

int FUNC_3(int VAR_4, uint64_t *VAR_5) {
        struct btrfs_ioctl_ino_lookup_args VAR_6 = {
                .objectid = VAR_0
        };
        int VAR_7;

        FUNC_0(VAR_4 >= 0);
        FUNC_0(*VAR_5);

        VAR_7 = FUNC_1(VAR_4);
        if (VAR_7 < 0)
                return VAR_7;
        if (!VAR_7)
                return -VAR_2;

        if (FUNC_2(VAR_4, VAR_1, &VAR_6) < 0)
                return -VAR_3;

        *VAR_5 = VAR_6.treeid;
        return 0;
}
