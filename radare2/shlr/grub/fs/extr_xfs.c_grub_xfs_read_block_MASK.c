
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct grub_xfs_btree_node {scalar_t__* keys; int numrecs; scalar_t__ magic; scalar_t__ level; } ;
typedef int grub_xfs_extent ;
typedef scalar_t__ grub_uint64_t ;
typedef TYPE_5__* grub_fshelp_node_t ;
typedef scalar_t__ grub_disk_addr_t ;
struct TYPE_9__ {scalar_t__ log2_bsize; int bsize; } ;
struct TYPE_13__ {TYPE_2__ sblock; int disk; } ;
struct TYPE_8__ {scalar_t__* keys; int numrecs; } ;
struct TYPE_10__ {int * extents; TYPE_1__ btree; } ;
struct TYPE_11__ {scalar_t__ format; TYPE_3__ data; int nextents; } ;
struct TYPE_12__ {TYPE_7__* data; TYPE_4__ inode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (TYPE_7__*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int ,int ,struct grub_xfs_btree_node*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct grub_xfs_btree_node*) ;
 struct grub_xfs_btree_node* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (char*,char*,int) ;

__attribute__((used)) static grub_disk_addr_t
FUNC_12 (grub_fshelp_node_t VAR_5, grub_disk_addr_t VAR_6)
{
  struct grub_xfs_btree_node *VAR_7 = 0;
  int VAR_8, VAR_9;
  grub_xfs_extent *VAR_10;
  grub_uint64_t VAR_11 = 0;

  if (VAR_5->inode.format == VAR_3)
    {
      grub_uint64_t *VAR_12;

      VAR_7 = FUNC_10 (VAR_5->data->sblock.bsize);
      if (VAR_7 == 0)
        return 0;

      VAR_9 = FUNC_4 (VAR_5->inode.data.btree.numrecs);
      VAR_12 = &VAR_5->inode.data.btree.keys[0];
      do
        {
          int VAR_13;

          for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++)
            {
              if (VAR_6 < FUNC_6 (VAR_12[VAR_13]))
                break;
            }


          if (VAR_13 == 0)
            {
              FUNC_9 (VAR_7);
              return 0;
            }

          if (FUNC_7 (VAR_5->data->disk,
                              FUNC_6 (VAR_12[VAR_13 - 1 + VAR_9])
                              << (VAR_5->data->sblock.log2_bsize
                                  - VAR_0),
                              0, VAR_5->data->sblock.bsize, VAR_7))
            return 0;

          if (FUNC_11 ((char *) VAR_7->magic, "BMAP", 4))
            {
              FUNC_9 (VAR_7);
              FUNC_8 (VAR_1, "not a correct XFS BMAP node");
              return 0;
            }

          VAR_9 = FUNC_4 (VAR_7->numrecs);
          VAR_12 = &VAR_7->keys[0];
        } while (VAR_7->level);
      VAR_10 = (grub_xfs_extent *) VAR_12;
    }
  else if (VAR_5->inode.format == VAR_4)
    {
      VAR_9 = FUNC_5 (VAR_5->inode.nextents);
      VAR_10 = &VAR_5->inode.data.extents[0];
    }
  else
    {
      FUNC_8 (VAR_2,
    "XFS does not support inode format %d yet",
    VAR_5->inode.format);
      return 0;
    }



  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
    {
      grub_uint64_t VAR_14 = FUNC_0 (VAR_10, VAR_8);
      grub_uint64_t VAR_15 = FUNC_1 (VAR_10, VAR_8);
      grub_uint64_t VAR_16 = FUNC_2 (VAR_10, VAR_8);


      if (VAR_6 < VAR_15)
        break;
      else if (VAR_6 < VAR_15 + VAR_16)
        {
          VAR_11 = (VAR_6 - VAR_15 + VAR_14);
          break;
        }
    }

  if (VAR_7)
    FUNC_9 (VAR_7);

  return FUNC_3(VAR_5->data, VAR_11);
}
