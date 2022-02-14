
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ min_offset; scalar_t__ min_type; scalar_t__ min_objectid; } ;
struct btrfs_ioctl_search_args {TYPE_1__ key; } ;


 int FUNC_0 (struct btrfs_ioctl_search_args*) ;

__attribute__((used)) static bool FUNC_1(struct btrfs_ioctl_search_args *VAR_0) {
        FUNC_0(VAR_0);






        if (VAR_0->key.min_offset < (uint64_t) -1) {
                VAR_0->key.min_offset++;
                return 1;
        }

        if (VAR_0->key.min_type < (uint8_t) -1) {
                VAR_0->key.min_type++;
                VAR_0->key.min_offset = 0;
                return 1;
        }

        if (VAR_0->key.min_objectid < (uint64_t) -1) {
                VAR_0->key.min_objectid++;
                VAR_0->key.min_offset = 0;
                VAR_0->key.min_type = 0;
                return 1;
        }

        return 0;
}
