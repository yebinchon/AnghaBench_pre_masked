
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct grub_ntfs_attr {char* attr_cur; char* attr_nxt; int flags; char* attr_end; TYPE_2__* mft; } ;
typedef int grub_size_t ;
typedef scalar_t__ grub_err_t ;
typedef scalar_t__ grub_disk_addr_t ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {int spc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (struct grub_ntfs_attr*,unsigned char) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct grub_ntfs_attr*,char*,char*,scalar_t__,int ,int,void (*) (scalar_t__,unsigned int,unsigned int,void*),void*,int) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (char*,int) ;

__attribute__((used)) static grub_err_t
FUNC_6 (struct grub_ntfs_attr *VAR_4, char *VAR_5, grub_disk_addr_t VAR_6,
    grub_size_t VAR_7, int VAR_8,
    void (*VAR_9) (grub_disk_addr_t VAR_10,
         unsigned VAR_11,
         unsigned VAR_12,
         void *VAR_13),
    void *VAR_14, int VAR_15)
{
  char *VAR_16;
  unsigned char VAR_17;
  char *VAR_18;
  grub_err_t VAR_19;

  VAR_16 = VAR_4->attr_cur;
  VAR_4->attr_nxt = VAR_4->attr_cur;
  VAR_17 = (unsigned char) *VAR_4->attr_nxt;
  if (VAR_4->flags & VAR_0)
    {
      char *VAR_20;
      grub_disk_addr_t VAR_21;

      VAR_21 = FUNC_1 (VAR_6, VAR_4->mft->data->spc << VAR_1, 0);
      VAR_20 = VAR_4->attr_nxt + FUNC_4 (VAR_4->attr_nxt, 4);
      while (VAR_20 < VAR_4->attr_end)
 {
   if ((unsigned char) *VAR_20 != VAR_17)
     break;
   if (FUNC_5 (VAR_20, 8) > VAR_21)
     break;
   VAR_4->attr_nxt = VAR_20;
   VAR_20 += FUNC_4 (VAR_20, 4);
 }
    }
  VAR_18 = FUNC_0 (VAR_4, VAR_17);
  if (VAR_18)
    VAR_19 = FUNC_3 (VAR_4, VAR_18, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_14, VAR_15);
  else
    VAR_19 =
      (VAR_3) ? VAR_3 : FUNC_2 (VAR_2,
           "attribute not found");
  VAR_4->attr_cur = VAR_16;
  return VAR_19;
}
