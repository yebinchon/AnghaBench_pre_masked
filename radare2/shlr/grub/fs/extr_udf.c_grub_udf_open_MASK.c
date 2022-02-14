
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct grub_udf_data {int root_icb; } ;
struct TYPE_3__ {int file_size; } ;
struct grub_fshelp_node {TYPE_1__ fe; } ;
struct grub_file {int size; scalar_t__ offset; struct grub_fshelp_node* data; TYPE_2__* device; } ;
typedef int grub_err_t ;
struct TYPE_4__ {int disk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct grub_udf_data*) ;
 scalar_t__ FUNC_4 (char const*,struct grub_fshelp_node*,struct grub_fshelp_node**,int ,int ,int ,int ) ;
 int VAR_2 ;
 struct grub_udf_data* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct grub_udf_data*,int *,struct grub_fshelp_node*) ;
 int VAR_3 ;

__attribute__((used)) static grub_err_t
FUNC_7 (struct grub_file *VAR_4, const char *VAR_5)
{
  struct grub_udf_data *VAR_6;
  struct grub_fshelp_node VAR_7;
  struct grub_fshelp_node *VAR_8;

  FUNC_1 (VAR_3);

  VAR_6 = FUNC_5 (VAR_4->device->disk);
  if (!VAR_6)
    goto fail;

  if (FUNC_6 (VAR_6, &VAR_6->root_icb, &VAR_7))
    goto fail;

  if (FUNC_4 (VAR_5, &VAR_7,
        &VAR_8,
        VAR_2, 0, 0, VAR_0))
    goto fail;

  VAR_4->data = VAR_8;
  VAR_4->offset = 0;
  VAR_4->size = FUNC_0 (VAR_8->fe.file_size);

  return 0;

fail:
  FUNC_2 (VAR_3);

  FUNC_3 (VAR_6);

  return VAR_1;
}
