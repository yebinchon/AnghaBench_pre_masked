
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root_item {int level; int bytenr; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_disk_key {int dummy; } ;
typedef int BOOLEAN ;


 int FUNC_0 (int ,int ,struct btrfs_disk_key*,struct btrfs_path*) ;

__attribute__((used)) static inline BOOLEAN
FUNC_1(const struct btrfs_root_item *VAR_0, struct btrfs_disk_key *VAR_1, struct btrfs_path *VAR_2)
{
    return FUNC_0(VAR_0->bytenr, VAR_0->level, VAR_1, VAR_2);
}
