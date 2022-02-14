
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_fb_data {char* fb_list; int ofs; int pri_size; } ;
struct fb_mbr {scalar_t__ fb_magic; int end_magic; int lba; int boot_base; } ;
struct fb_data {int boot_size; int pri_size; scalar_t__ ver_major; scalar_t__ ver_minor; int list_used; } ;
typedef scalar_t__ grub_uint32_t ;
typedef int grub_disk_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,int ,int,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct grub_fb_data*) ;
 struct grub_fb_data* FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static struct grub_fb_data *
FUNC_5 (grub_disk_t VAR_5)
{
  struct fb_mbr *VAR_6;
  struct fb_data *VAR_7;
  char VAR_8[512];
  struct grub_fb_data *VAR_9;
  int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
  char *VAR_16, *VAR_17, *VAR_18;
  grub_uint32_t *VAR_19;

  if (FUNC_0 (VAR_5, 0, 0, sizeof (VAR_8), VAR_8))
    goto fail;

  VAR_6 = (struct fb_mbr *) VAR_8;
  VAR_7 = (struct fb_data *) VAR_8;
  VAR_19 = (grub_uint32_t *)&VAR_8;
  if (*VAR_19 == VAR_0)
    {
      VAR_14 = 0;
      VAR_10 = 0;
      VAR_11 = 0;
      VAR_13 = 0;
    }
  else
    {
      if ((VAR_6->fb_magic != VAR_1) || (VAR_6->end_magic != 0xaa55))
 goto fail;

      VAR_14 = VAR_6->lba;
      VAR_10 = VAR_6->boot_base;

      if (FUNC_0 (VAR_5, VAR_10 + 1 - VAR_14, 0, sizeof (VAR_8), VAR_8))
 goto fail;

      VAR_11 = VAR_7->boot_size;
      VAR_13 = VAR_7->pri_size;
    }

  if ((VAR_7->ver_major != VAR_2) || (VAR_7->ver_minor != VAR_3))
    goto fail;

  VAR_12 = VAR_7->list_used;
  VAR_9 = FUNC_3 (sizeof (*VAR_9) + (VAR_12 << 9));
  if (! VAR_9)
    goto fail;

  VAR_16 = VAR_9->fb_list;
  if (FUNC_0 (VAR_5, VAR_10 + 1 + VAR_11 - VAR_14, 0,
        (VAR_12 << 9), VAR_16))
    {
      FUNC_2 (VAR_9);
      goto fail;
    }

  VAR_17 = VAR_18 = VAR_16;
  for (VAR_15 = 0; VAR_15 < VAR_12 - 1; VAR_15++)
    {
      VAR_17 += 510;
      VAR_18 += 512;
      FUNC_4 (VAR_17, VAR_18, 510);
    }

  VAR_9->ofs = VAR_14;
  VAR_9->pri_size = VAR_13;
  return VAR_9;

 fail:
  FUNC_1 (VAR_4, "not a fb filesystem");
  return 0;
}
