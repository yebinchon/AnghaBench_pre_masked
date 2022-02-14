
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_offset; int min_offset; int max_type; int min_type; int max_objectid; int min_objectid; } ;
struct btrfs_ioctl_search_args {TYPE_1__ key; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct btrfs_ioctl_search_args const*) ;

__attribute__((used)) static int FUNC_2(const struct btrfs_ioctl_search_args *VAR_0) {
        int VAR_1;

        FUNC_1(VAR_0);



        VAR_1 = FUNC_0(VAR_0->key.min_objectid, VAR_0->key.max_objectid);
        if (VAR_1 != 0)
                return VAR_1;

        VAR_1 = FUNC_0(VAR_0->key.min_type, VAR_0->key.max_type);
        if (VAR_1 != 0)
                return VAR_1;

        return FUNC_0(VAR_0->key.min_offset, VAR_0->key.max_offset);
}
