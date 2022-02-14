
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct grub_udf_short_ad {int length; int position; } ;
struct TYPE_12__ {int block_num; int part_ref; } ;
struct grub_udf_long_ad {int length; TYPE_5__ block; } ;
typedef TYPE_6__* grub_fshelp_node_t ;
typedef int grub_disk_addr_t ;
struct TYPE_10__ {int flags; } ;
struct TYPE_8__ {int tag_ident; } ;
struct TYPE_11__ {TYPE_3__ icbtag; int alloc_descs_length; int ext_attr_length; int * ext_attr; TYPE_1__ tag; } ;
struct TYPE_9__ {int alloc_descs_length; int ext_attr_length; int * ext_attr; } ;
struct TYPE_13__ {int data; int part_ref; TYPE_4__ fe; TYPE_2__ efe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static grub_disk_addr_t
FUNC_3 (grub_fshelp_node_t VAR_5, grub_disk_addr_t VAR_6)
{
  char *VAR_7;
  int VAR_8;
  grub_disk_addr_t VAR_9;

  if (FUNC_0 (VAR_5->fe.tag.tag_ident) == VAR_4)
    {
      VAR_7 = (char *) &VAR_5->fe.ext_attr[0] + FUNC_1 (VAR_5->fe.ext_attr_length);
      VAR_8 = FUNC_1 (VAR_5->fe.alloc_descs_length);
    }
  else
    {
      VAR_7 = (char *) &VAR_5->efe.ext_attr[0] + FUNC_1 (VAR_5->efe.ext_attr_length);
      VAR_8 = FUNC_1 (VAR_5->efe.alloc_descs_length);
    }

  if ((FUNC_0 (VAR_5->fe.icbtag.flags) & VAR_2)
      == VAR_3)
    {
      struct grub_udf_short_ad *VAR_10 = (struct grub_udf_short_ad *) VAR_7;

      VAR_8 /= sizeof (struct grub_udf_short_ad);
      VAR_9 = VAR_6 * VAR_0;
      while (VAR_8 > 0)
 {
   if (VAR_9 < FUNC_1 (VAR_10->length))
     return ((FUNC_1 (VAR_10->position) & VAR_1) ? 0 :
                    (FUNC_2 (VAR_5->data,
                                         VAR_5->part_ref,
                                         VAR_10->position)
                     + (VAR_9 / VAR_0)));

   VAR_9 -= FUNC_1 (VAR_10->length);
   VAR_10++;
   VAR_8--;
 }
    }
  else
    {
      struct grub_udf_long_ad *VAR_11 = (struct grub_udf_long_ad *) VAR_7;

      VAR_8 /= sizeof (struct grub_udf_long_ad);
      VAR_9 = VAR_6 * VAR_0;
      while (VAR_8 > 0)
 {
   if (VAR_9 < FUNC_1 (VAR_11->length))
     return ((FUNC_1 (VAR_11->block.block_num) & VAR_1) ? 0 :
                    (FUNC_2 (VAR_5->data,
                                         VAR_11->block.part_ref,
                                         VAR_11->block.block_num)
       + (VAR_9 / VAR_0)));

   VAR_9 -= FUNC_1 (VAR_11->length);
   VAR_11++;
   VAR_8--;
 }
    }

  return 0;
}
