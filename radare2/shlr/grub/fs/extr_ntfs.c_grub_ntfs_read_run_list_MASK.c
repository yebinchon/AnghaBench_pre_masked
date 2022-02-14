
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* disk; } ;
struct grub_ntfs_rlst {char* cur_run; scalar_t__ curr_lcn; int flags; int next_vcn; int curr_vcn; TYPE_2__ comp; TYPE_3__* attr; } ;
typedef int grub_err_t ;
typedef scalar_t__ grub_disk_addr_t ;
struct TYPE_6__ {int flags; scalar_t__* attr_cur; } ;
struct TYPE_4__ {void (* read_hook ) (scalar_t__,unsigned int,unsigned int,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (TYPE_3__*,unsigned char) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (char*,int,scalar_t__*,int) ;
 int FUNC_3 (char*,int) ;

grub_err_t
FUNC_4 (struct grub_ntfs_rlst * VAR_3)
{
  int VAR_4, VAR_5;
  grub_disk_addr_t VAR_6;
  char *VAR_7;

  VAR_7 = VAR_3->cur_run;
retry:
  VAR_4 = ((unsigned char) (*VAR_7) & 0xF);
  VAR_5 = ((unsigned char) (*VAR_7) >> 4);
  if (!VAR_4)
    {
      if ((VAR_3->attr) && (VAR_3->attr->flags & VAR_0))
 {
   void (*VAR_8) (grub_disk_addr_t VAR_9,
        unsigned VAR_10,
        unsigned VAR_11,
        void *VAR_12);

   VAR_8 = VAR_3->comp.disk->read_hook;
   VAR_3->comp.disk->read_hook = 0;
   VAR_7 = FUNC_0 (VAR_3->attr, (unsigned char) *VAR_3->attr->attr_cur);
   VAR_3->comp.disk->read_hook = VAR_8;
   if (VAR_7)
     {
       if (VAR_7[8] == 0)
  return FUNC_1 (VAR_1,
       "$DATA should be non-resident");

       VAR_7 += FUNC_3 (VAR_7, 0x20);
       VAR_3->curr_lcn = 0;
       goto retry;
     }
 }
      return FUNC_1 (VAR_1, "run list overflown");
    }
  VAR_7 = FUNC_2 (VAR_7 + 1, VAR_4, &VAR_6, 0);
  VAR_3->curr_vcn = VAR_3->next_vcn;
  VAR_3->next_vcn += VAR_6;
  VAR_7 = FUNC_2 (VAR_7, VAR_5, &VAR_6, 1);
  VAR_3->curr_lcn += VAR_6;
  if (VAR_6 == 0)
    VAR_3->flags |= VAR_2;
  else
    VAR_3->flags &= ~VAR_2;
  VAR_3->cur_run = VAR_7;
  return 0;
}
