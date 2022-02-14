
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int heads; int lowsector; unsigned int secspertrack; } ;
struct linux_part {int flags; unsigned int* misc; scalar_t__ checksum; int start_cylinder; TYPE_1__ disc_record; } ;
struct grub_acorn_boot_block {int flags; unsigned int* misc; scalar_t__ checksum; int start_cylinder; TYPE_1__ disc_record; } ;
typedef scalar_t__ grub_uint8_t ;
typedef scalar_t__ grub_err_t ;
typedef int grub_disk_t ;
typedef int grub_disk_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,int ,int,struct linux_part*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static grub_err_t
FUNC_3 (grub_disk_t VAR_5, struct linux_part *VAR_6,
     grub_disk_addr_t *VAR_7)
{
  struct grub_acorn_boot_block VAR_8;
  grub_err_t VAR_9;
  unsigned int VAR_10 = 0;
  unsigned int VAR_11;
  unsigned int VAR_12;
  int VAR_13;

  VAR_9 = FUNC_0 (VAR_5, 0xC00 / VAR_0, 0,
   sizeof (struct grub_acorn_boot_block),
   &VAR_8);
  if (VAR_9)
    return VAR_9;

  if ((VAR_8.flags & VAR_4) != VAR_3)
    goto fail;

  for (VAR_13 = 0; VAR_13 != 0x1ff; ++VAR_13)
    VAR_10 = (VAR_10 & 0xff) + (VAR_10 >> 8) + VAR_8.misc[VAR_13];

  if ((grub_uint8_t) VAR_10 != VAR_8.checksum)
    goto fail;

  VAR_11 = (VAR_8.disc_record.heads
      + ((VAR_8.disc_record.lowsector >> 6) & 1));
  VAR_12 = VAR_8.disc_record.secspertrack * VAR_11;
  *VAR_7 = FUNC_2 (VAR_8.start_cylinder) * VAR_12;

  return FUNC_0 (VAR_5, *VAR_7, 0,
    sizeof (struct linux_part) * VAR_2,
    VAR_6);

fail:
  return FUNC_1 (VAR_1,
       "Linux/ADFS partition map not found");

}
