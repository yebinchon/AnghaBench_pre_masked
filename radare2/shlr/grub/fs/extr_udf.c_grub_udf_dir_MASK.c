
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grub_udf_dir_closure {int (* hook ) (char const*,struct grub_dirhook_info const*,void*) ;void* closure; } ;
struct grub_udf_data {int root_icb; } ;
struct grub_fshelp_node {int root_icb; } ;
typedef int grub_err_t ;
typedef TYPE_1__* grub_device_t ;
struct TYPE_3__ {int disk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct grub_udf_data*) ;
 scalar_t__ FUNC_3 (char const*,struct grub_udf_data*,struct grub_udf_data**,int (*) (struct grub_udf_data*,int ,struct grub_udf_dir_closure*),int ,int ,int ) ;
 int FUNC_4 (struct grub_udf_data*,int ,struct grub_udf_dir_closure*) ;
 struct grub_udf_data* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct grub_udf_data*,int *,struct grub_udf_data*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static grub_err_t
FUNC_7 (grub_device_t VAR_4, const char *VAR_5,
       int (*VAR_6) (const char *VAR_7,
      const struct grub_dirhook_info *VAR_8,
      void *VAR_9),
       void *VAR_10)
{
  struct grub_udf_data *VAR_11 = 0;
  struct grub_fshelp_node VAR_12;
  struct grub_fshelp_node *VAR_13;
  struct grub_udf_dir_closure VAR_14;

  FUNC_0 (VAR_3);

  VAR_11 = FUNC_5 (VAR_4->disk);
  if (!VAR_11)
    goto fail;

  if (FUNC_6 (VAR_11, &VAR_11->root_icb, &VAR_12))
    goto fail;

  if (FUNC_3 (VAR_5, &VAR_12,
        &VAR_13,
        FUNC_4, 0, 0, VAR_0))
    goto fail;

  if (VAR_6) {
    VAR_14.hook = VAR_6;
    VAR_14.closure = VAR_10;
    FUNC_4 (VAR_13, VAR_2, &VAR_14);
  }

  if (VAR_13 != &VAR_12)
    FUNC_2 (VAR_13);

fail:
  FUNC_2 (VAR_11);

  FUNC_1 (VAR_3);

  return VAR_1;
}
