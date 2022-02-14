
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct grub_affs_file {int namelen; scalar_t__ name; } ;
struct grub_affs_data {int blocksize; int disk; } ;
typedef scalar_t__ grub_err_t ;
typedef TYPE_1__* grub_disk_t ;
typedef TYPE_2__* grub_device_t ;
typedef int file ;
struct TYPE_6__ {TYPE_1__* disk; } ;
struct TYPE_5__ {int total_sectors; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct grub_affs_data* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int,int,int,struct grub_affs_file*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct grub_affs_data*) ;
 char* FUNC_5 (char*,int ) ;
 int VAR_3 ;

__attribute__((used)) static grub_err_t
FUNC_6 (grub_device_t VAR_4, char **VAR_5)
{
  struct grub_affs_data *VAR_6;
  struct grub_affs_file VAR_7;
  grub_disk_t VAR_8 = VAR_4->disk;

  FUNC_2 (VAR_3);

  VAR_6 = FUNC_0 (VAR_8);
  if (VAR_6)
    {


      FUNC_1 (VAR_6->disk, VAR_8->total_sectors >> 1,
        VAR_6->blocksize * (VAR_1
      - VAR_0),
        sizeof (VAR_7), &VAR_7);
      if (VAR_2)
 return 0;

      *VAR_5 = FUNC_5 ((char *) (VAR_7.name), VAR_7.namelen);
    }
  else
    *VAR_5 = 0;

  FUNC_3 (VAR_3);

  FUNC_4 (VAR_6);

  return VAR_2;
}
