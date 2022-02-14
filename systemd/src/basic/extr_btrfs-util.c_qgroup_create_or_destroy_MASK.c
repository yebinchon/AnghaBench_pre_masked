
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct btrfs_ioctl_qgroup_create_args {int create; int qgroupid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int,int ,struct btrfs_ioctl_qgroup_create_args*) ;

__attribute__((used)) static int FUNC_3(int VAR_6, bool VAR_7, uint64_t VAR_8) {

        struct btrfs_ioctl_qgroup_create_args VAR_9 = {
                .create = VAR_7,
                .qgroupid = VAR_8,
        };
        unsigned VAR_10;
        int VAR_11;

        VAR_11 = FUNC_0(VAR_6);
        if (VAR_11 < 0)
                return VAR_11;
        if (VAR_11 == 0)
                return -VAR_4;

        for (VAR_10 = 0;; VAR_10++) {
                if (FUNC_2(VAR_6, VAR_0, &VAR_9) < 0) {


                        if (VAR_5 == VAR_2)
                                return -VAR_3;

                        if (VAR_5 == VAR_1 && VAR_10 < 10) {
                                (void) FUNC_1(VAR_6);
                                continue;
                        }

                        return -VAR_5;
                }

                break;
        }

        return 0;
}
