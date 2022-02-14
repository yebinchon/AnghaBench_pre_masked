
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct btrfs_path {TYPE_2__* tree_buf; } ;
typedef int UCHAR ;
struct TYPE_6__ {int offset; } ;
struct TYPE_4__ {scalar_t__ items; } ;
struct TYPE_5__ {TYPE_1__ leaf; } ;


 TYPE_3__* FUNC_0 (struct btrfs_path*) ;

__attribute__((used)) static inline UCHAR *FUNC_1(struct btrfs_path *VAR_0)
{
    return (UCHAR *) VAR_0->tree_buf->leaf.items + FUNC_0(VAR_0)->offset;
}
