
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btrfs_path {int tree_buf; } ;
struct TYPE_3__ {int nodesize; } ;
struct TYPE_4__ {TYPE_1__ SuperBlock; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct btrfs_path*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct btrfs_path *VAR_2)
{
    FUNC_1(VAR_2, 0, sizeof(*VAR_2));
    VAR_2->tree_buf = FUNC_0(VAR_0->SuperBlock.nodesize, VAR_1);
}
