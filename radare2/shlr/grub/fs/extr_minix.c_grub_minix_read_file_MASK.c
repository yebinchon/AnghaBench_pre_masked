
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct grub_minix_sblock {int dummy; } ;
struct grub_minix_data {TYPE_1__* disk; struct grub_minix_sblock sblock; } ;
typedef int grub_ssize_t ;
typedef scalar_t__ grub_disk_addr_t ;
struct TYPE_2__ {void (* read_hook ) (scalar_t__,unsigned int,unsigned int,void*) ;void* closure; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct grub_minix_data*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int,int,int,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct grub_minix_data*,int) ;

__attribute__((used)) static grub_ssize_t
FUNC_3 (struct grub_minix_data *VAR_3,
        void (*VAR_4) (grub_disk_addr_t VAR_5,
      unsigned VAR_6, unsigned VAR_7,
      void *VAR_8),
        void *VAR_9,
        int VAR_10, grub_disk_addr_t VAR_11, char *VAR_12)
{
  struct grub_minix_sblock *VAR_13 = &VAR_3->sblock;
  int VAR_14;
  int VAR_15;


  if (VAR_11 + VAR_10 > FUNC_0 (VAR_3))
    VAR_11 = FUNC_0 (VAR_3) - VAR_10;

  VAR_15 = (VAR_11 + VAR_10 + VAR_0 - 1) / VAR_0;

  for (VAR_14 = VAR_10 / VAR_0; VAR_14 < VAR_15; VAR_14++)
    {
      int VAR_16;
      int VAR_17 = VAR_10 % VAR_0;
      int VAR_18 = VAR_0;

      int VAR_19 = 0;

      VAR_16 = FUNC_2 (VAR_3, VAR_14);
      if (VAR_2)
 return -1;


      if (VAR_14 == VAR_15 - 1)
 {
   VAR_18 = (VAR_11 + VAR_10) % VAR_0;

   if (!VAR_18)
     VAR_18 = VAR_0;
 }


      if (VAR_14 == (VAR_10 / (int) VAR_0))
 {
   VAR_19 = VAR_17;
   VAR_18 -= VAR_19;
 }

      VAR_3->disk->read_hook = VAR_4;
      VAR_3->disk->closure = VAR_9;
      FUNC_1 (VAR_3->disk, VAR_16 << VAR_1,
        VAR_19, VAR_18, VAR_12);

      VAR_3->disk->read_hook = 0;
      if (VAR_2)
 return -1;

      VAR_12 += VAR_0 - VAR_19;
    }

  return VAR_11;
}
