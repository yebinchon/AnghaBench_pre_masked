
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct btrfs_ioctl_clone_range_args {int src_fd; scalar_t__ src_offset; scalar_t__ src_length; scalar_t__ dest_offset; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int ,struct btrfs_ioctl_clone_range_args*) ;

int FUNC_3(int VAR_2, uint64_t VAR_3, int VAR_4, uint64_t VAR_5, uint64_t VAR_6) {
        struct btrfs_ioctl_clone_range_args VAR_7 = {
                .src_fd = VAR_2,
                .src_offset = VAR_3,
                .src_length = VAR_6,
                .dest_offset = VAR_5,
        };
        int VAR_8;

        FUNC_0(VAR_2 >= 0);
        FUNC_0(VAR_4 >= 0);
        FUNC_0(VAR_6 > 0);

        VAR_8 = FUNC_1(VAR_4);
        if (VAR_8 < 0)
                return VAR_8;

        if (FUNC_2(VAR_4, VAR_0, &VAR_7) < 0)
                return -VAR_1;

        return 0;
}
