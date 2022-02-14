
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grub_ntfs_data {int cmft; int mmft; } ;
typedef TYPE_1__* grub_file_t ;
typedef int grub_err_t ;
struct TYPE_3__ {struct grub_ntfs_data* data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct grub_ntfs_data*) ;
 int VAR_1 ;

__attribute__((used)) static grub_err_t
FUNC_3 (grub_file_t VAR_2)
{
  struct grub_ntfs_data *VAR_3;

  VAR_3 = VAR_2->data;

  if (VAR_3)
    {
      FUNC_0 (&VAR_3->mmft);
      FUNC_0 (&VAR_3->cmft);
      FUNC_2 (VAR_3);
    }

  FUNC_1 (VAR_1);

  return VAR_0;
}
