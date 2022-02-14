
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grub_minix_sblock {int dummy; } ;
struct TYPE_2__ {int magic; } ;
struct grub_minix_data {int version; int filename_size; scalar_t__ linknest; int disk; TYPE_1__ sblock; } ;
typedef int grub_disk_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int,TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct grub_minix_data*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct grub_minix_data* FUNC_4 (int) ;

__attribute__((used)) static struct grub_minix_data *
FUNC_5 (grub_disk_t VAR_7)
{
  struct grub_minix_data *VAR_8;

  VAR_8 = FUNC_4 (sizeof (struct grub_minix_data));
  if (!VAR_8)
    return 0;


  FUNC_0 (VAR_7, VAR_5, 0,
    sizeof (struct grub_minix_sblock),&VAR_8->sblock);
  if (VAR_6)
    goto fail;

  if (FUNC_3 (VAR_8->sblock.magic) == VAR_3)
    {
      VAR_8->version = 1;
      VAR_8->filename_size = 14;
    }
  else if (FUNC_3 (VAR_8->sblock.magic) == VAR_1)
    {
      VAR_8->version = 2;
      VAR_8->filename_size = 14;
    }
  else if (FUNC_3 (VAR_8->sblock.magic) == VAR_4)
    {
      VAR_8->version = 1;
      VAR_8->filename_size = 30;
    }
  else if (FUNC_3 (VAR_8->sblock.magic) == VAR_2)
    {
      VAR_8->version = 2;
      VAR_8->filename_size = 30;
    }
  else
    goto fail;

  VAR_8->disk = VAR_7;
  VAR_8->linknest = 0;

  return VAR_8;

 fail:
  FUNC_2 (VAR_8);
  FUNC_1 (VAR_0, "not a minix filesystem");
  return 0;
}
