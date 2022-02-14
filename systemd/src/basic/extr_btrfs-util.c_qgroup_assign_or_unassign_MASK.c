
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct btrfs_ioctl_qgroup_assign_args {int assign; int dst; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int,int ,struct btrfs_ioctl_qgroup_assign_args*) ;

__attribute__((used)) static int FUNC_4(int VAR_4, bool VAR_5, uint64_t VAR_6, uint64_t VAR_7) {
        struct btrfs_ioctl_qgroup_assign_args VAR_8 = {
                .assign = VAR_5,
                .src = VAR_6,
                .dst = VAR_7,
        };
        unsigned VAR_9;
        int VAR_10;

        VAR_10 = FUNC_0(VAR_4);
        if (VAR_10 < 0)
                return VAR_10;
        if (VAR_10 == 0)
                return -VAR_2;

        for (VAR_9 = 0;; VAR_9++) {
                VAR_10 = FUNC_3(VAR_4, VAR_0, &VAR_8);
                if (VAR_10 < 0) {
                        if (VAR_3 == VAR_1 && VAR_9 < 10) {
                                (void) FUNC_2(VAR_4);
                                continue;
                        }

                        return -VAR_3;
                }

                if (VAR_10 == 0)
                        return 0;



                (void) FUNC_1(VAR_4);
                return 1;
        }
}
