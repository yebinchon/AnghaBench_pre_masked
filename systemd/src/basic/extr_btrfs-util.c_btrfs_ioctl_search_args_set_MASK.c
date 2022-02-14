
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min_offset; int min_type; int min_objectid; } ;
struct btrfs_ioctl_search_header {int offset; TYPE_1__ key; int type; int objectid; } ;
typedef struct btrfs_ioctl_search_args {int offset; TYPE_1__ key; int type; int objectid; } const btrfs_ioctl_search_args ;


 int FUNC_0 (struct btrfs_ioctl_search_header const*) ;

__attribute__((used)) static void FUNC_1(struct btrfs_ioctl_search_args *VAR_0, const struct btrfs_ioctl_search_header *VAR_1) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_0->key.min_objectid = VAR_1->objectid;
        VAR_0->key.min_type = VAR_1->type;
        VAR_0->key.min_offset = VAR_1->offset;
}
