
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int part_ref; int block_num; } ;
struct grub_udf_long_ad {TYPE_2__ block; } ;
struct grub_udf_file_entry {int dummy; } ;
struct grub_udf_data {int disk; } ;
struct TYPE_4__ {int tag_ident; } ;
struct TYPE_6__ {TYPE_1__ tag; } ;
struct grub_fshelp_node {struct grub_udf_data* data; int part_ref; TYPE_3__ fe; } ;
typedef int grub_uint32_t ;
typedef scalar_t__ grub_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,int ,int,TYPE_3__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (struct grub_udf_data*,int ,int ) ;

__attribute__((used)) static grub_err_t
FUNC_4 (struct grub_udf_data *VAR_5,
     struct grub_udf_long_ad *VAR_6,
     struct grub_fshelp_node *VAR_7)
{
  grub_uint32_t VAR_8;

  VAR_8 = FUNC_3 (VAR_5,
         VAR_6->block.part_ref,
                              VAR_6->block.block_num);

  if (VAR_4)
    return VAR_4;

  if (FUNC_1 (VAR_5->disk, VAR_8 << VAR_1, 0,
        sizeof (struct grub_udf_file_entry),
        &VAR_7->fe))
    return VAR_4;

  if ((FUNC_0 (VAR_7->fe.tag.tag_ident) != VAR_3) &&
      (FUNC_0 (VAR_7->fe.tag.tag_ident) != VAR_2))
    return FUNC_2 (VAR_0, "invalid fe/efe descriptor");

  VAR_7->part_ref = VAR_6->block.part_ref;
  VAR_7->data = VAR_5;
  return 0;
}
