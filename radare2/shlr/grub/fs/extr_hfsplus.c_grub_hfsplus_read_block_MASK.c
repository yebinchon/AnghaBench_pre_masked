
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct grub_hfsplus_key_internal {int dummy; } ;
struct grub_hfsplus_extkey_internal {scalar_t__ fileid; int start; } ;
struct grub_hfsplus_extkey {int dummy; } ;
struct grub_hfsplus_extent {int dummy; } ;
struct grub_hfsplus_btnode {int dummy; } ;
typedef TYPE_2__* grub_fshelp_node_t ;
typedef int grub_disk_addr_t ;
struct TYPE_5__ {scalar_t__ fileid; TYPE_1__* data; struct grub_hfsplus_extent* extents; } ;
struct TYPE_4__ {int embedded_offset; int log2blksize; int extoverflow_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct grub_hfsplus_btnode*) ;
 scalar_t__ FUNC_2 (int *,struct grub_hfsplus_btnode*,int) ;
 scalar_t__ FUNC_3 (int *,struct grub_hfsplus_key_internal*,int ,struct grub_hfsplus_btnode**,int*) ;
 int VAR_3 ;
 int FUNC_4 (struct grub_hfsplus_extent*,int*) ;

__attribute__((used)) static grub_disk_addr_t
FUNC_5 (grub_fshelp_node_t VAR_4, grub_disk_addr_t VAR_5)
{
  struct grub_hfsplus_btnode *VAR_6 = 0;
  int VAR_7 = VAR_5;
  struct grub_hfsplus_extent *VAR_8 = &VAR_4->extents[0];

  while (1)
    {
      struct grub_hfsplus_extkey *VAR_9;
      struct grub_hfsplus_extkey_internal VAR_10;
      int VAR_11, VAR_12 = 0;


      VAR_11 = FUNC_4 (VAR_8, &VAR_7);



      FUNC_1 (VAR_6);
      VAR_6 = 0;

      if (VAR_11 != -1)
 return (VAR_11
  + (VAR_4->data->embedded_offset >> (VAR_4->data->log2blksize
         - VAR_0)));




      if (VAR_4->fileid == VAR_2)
 {
   FUNC_0 (VAR_1,
        "extra extents found in an extend overflow file");
   break;
 }


      VAR_10.fileid = VAR_4->fileid;
      VAR_10.start = VAR_5 - VAR_7;

      if (FUNC_3 (&VAR_4->data->extoverflow_tree,
         (struct grub_hfsplus_key_internal *) &VAR_10,
         VAR_3, &VAR_6, &VAR_12))
 {
   FUNC_0 (VAR_1,
        "no block found for the file id 0x%x and the block offset 0x%x",
        VAR_4->fileid, VAR_5);
   break;
 }


      VAR_9 = (struct grub_hfsplus_extkey *)
 FUNC_2 (&VAR_4->data->extoverflow_tree, VAR_6, VAR_12);
      VAR_8 = (struct grub_hfsplus_extent *) (VAR_9 + 1);



    }

  FUNC_1 (VAR_6);


  return -1;
}
