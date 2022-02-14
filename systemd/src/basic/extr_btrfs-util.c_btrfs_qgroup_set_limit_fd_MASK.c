
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ max_rfer; int flags; } ;
struct btrfs_ioctl_qgroup_limit_args {scalar_t__ qgroupid; TYPE_1__ lim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int,int ,struct btrfs_ioctl_qgroup_limit_args*) ;

int FUNC_5(int VAR_5, uint64_t VAR_6, uint64_t VAR_7) {

        struct btrfs_ioctl_qgroup_limit_args VAR_8 = {
                .lim.max_rfer = VAR_7,
                .lim.flags = VAR_1,
        };
        unsigned VAR_9;
        int VAR_10;

        FUNC_0(VAR_5 >= 0);

        if (VAR_6 == 0) {
                VAR_10 = FUNC_3(VAR_5, &VAR_6);
                if (VAR_10 < 0)
                        return VAR_10;
        } else {
                VAR_10 = FUNC_1(VAR_5);
                if (VAR_10 < 0)
                        return VAR_10;
                if (!VAR_10)
                        return -VAR_3;
        }

        VAR_8.qgroupid = VAR_6;

        for (VAR_9 = 0;; VAR_9++) {
                if (FUNC_4(VAR_5, VAR_0, &VAR_8) < 0) {

                        if (VAR_4 == VAR_2 && VAR_9 < 10) {
                                (void) FUNC_2(VAR_5);
                                continue;
                        }

                        return -VAR_4;
                }

                break;
        }

        return 0;
}
