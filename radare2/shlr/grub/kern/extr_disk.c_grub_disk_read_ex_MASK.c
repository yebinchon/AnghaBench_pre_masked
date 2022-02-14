
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int grub_size_t ;
typedef unsigned int grub_off_t ;
typedef int grub_err_t ;
typedef TYPE_2__* grub_disk_t ;
typedef scalar_t__ grub_disk_addr_t ;
struct TYPE_9__ {int closure; int (* read_hook ) (scalar_t__,unsigned int,int,int ) ;TYPE_1__* dev; } ;
struct TYPE_8__ {scalar_t__ (* read ) (TYPE_2__*,scalar_t__,int,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__*,unsigned int*,int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,unsigned int,int,void*) ;
 int VAR_3 ;
 int FUNC_2 (void*,char*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__,int,char*) ;
 int FUNC_4 (scalar_t__,unsigned int,int,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__,int,void*) ;
 int FUNC_6 (scalar_t__,unsigned int,int,int ) ;

grub_err_t
FUNC_7 (grub_disk_t VAR_4, grub_disk_addr_t VAR_5,
     grub_off_t VAR_6, grub_size_t VAR_7, void *VAR_8, int VAR_9)
{
  unsigned VAR_10;

  if (! VAR_9)
    return FUNC_1 (VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

  if (FUNC_0 (VAR_4, &VAR_5, &VAR_6, VAR_7) != VAR_2)
    return VAR_3;

  VAR_10 = VAR_6;
  while (VAR_7)
    {
      char VAR_11[VAR_1];
      grub_size_t VAR_12;

      if ((VAR_10 != 0) || (VAR_7 < VAR_1))
 {
   VAR_12 = VAR_1 - VAR_10;
   if (VAR_12 > VAR_7)
     VAR_12 = VAR_7;

   if (VAR_8)
     {
       if ((VAR_4->dev->read) (VAR_4, VAR_5, 1, VAR_11) != VAR_2)
  break;
       FUNC_2 (VAR_8, VAR_11 + VAR_10, VAR_12);
     }

   if (VAR_4->read_hook)
     (VAR_4->read_hook) (VAR_5, VAR_10, VAR_12, VAR_4->closure);

   VAR_5++;
   VAR_10 = 0;
 }
      else
 {
   grub_size_t VAR_13;

   VAR_12 = VAR_7 & ~(VAR_1 - 1);
   VAR_13 = VAR_7 >> VAR_0;

   if ((VAR_8) &&
       ((VAR_4->dev->read) (VAR_4, VAR_5, VAR_13, VAR_8) != VAR_2))
     break;

   if (VAR_4->read_hook)
     {
       while (VAR_13)
  {
    (VAR_4->read_hook) (VAR_5++, 0, VAR_1,
         VAR_4->closure);
    VAR_13--;
  }
     }
   else
     VAR_5 += VAR_13;
 }

      if (VAR_8)
 VAR_8 = (char *) VAR_8 + VAR_12;
      VAR_7 -= VAR_12;
    }

  return VAR_3;
}
