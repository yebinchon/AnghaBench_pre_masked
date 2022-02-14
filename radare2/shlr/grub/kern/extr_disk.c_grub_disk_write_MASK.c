
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int grub_size_t ;
typedef void* grub_partition_t ;
typedef unsigned int grub_off_t ;
typedef int grub_err_t ;
typedef TYPE_2__* grub_disk_t ;
typedef int grub_disk_addr_t ;
struct TYPE_9__ {int id; TYPE_1__* dev; void* partition; int name; } ;
struct TYPE_8__ {scalar_t__ (* write ) (TYPE_2__*,int ,int,char*) ;int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *,unsigned int*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ,int,char*) ;
 int FUNC_3 (char*,char*,int ) ;
 int VAR_3 ;
 int FUNC_4 (char*,void const*,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,int,char*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ,int,void const*) ;

grub_err_t
FUNC_7 (grub_disk_t VAR_4, grub_disk_addr_t VAR_5,
   grub_off_t VAR_6, grub_size_t VAR_7, const void *VAR_8)
{
  unsigned VAR_9;

  FUNC_3 ("disk", "Writing `%s'...\n", VAR_4->name);

  if (FUNC_0 (VAR_4, &VAR_5, &VAR_6, VAR_7) != VAR_2)
    return VAR_3;

  VAR_9 = VAR_6;

  while (VAR_7)
    {
      if (VAR_9 != 0 || (VAR_7 < VAR_1 && VAR_7 != 0))
 {
   char VAR_10[VAR_1];
   grub_size_t VAR_11;
   grub_partition_t VAR_12;

   VAR_12 = VAR_4->partition;
   VAR_4->partition = 0;
   if (FUNC_2 (VAR_4, VAR_5, 0, VAR_1, VAR_10)
       != VAR_2)
     {
       VAR_4->partition = VAR_12;
       goto finish;
     }
   VAR_4->partition = VAR_12;

   VAR_11 = VAR_1 - VAR_9;
   if (VAR_11 > VAR_7)
     VAR_11 = VAR_7;

   FUNC_4 (VAR_10 + VAR_9, VAR_8, VAR_11);

   FUNC_1 (VAR_4->dev->id, VAR_4->id, VAR_5);

   if ((VAR_4->dev->write) (VAR_4, VAR_5, 1, VAR_10) != VAR_2)
     goto finish;

   VAR_5++;
   VAR_8 = (char *) VAR_8 + VAR_11;
   VAR_7 -= VAR_11;
   VAR_9 = 0;
 }
      else
 {
   grub_size_t VAR_13;
   grub_size_t VAR_14;

   VAR_13 = VAR_7 & ~(VAR_1 - 1);
   VAR_14 = VAR_7 >> VAR_0;

   if ((VAR_4->dev->write) (VAR_4, VAR_5, VAR_14, VAR_8) != VAR_2)
     goto finish;

   while (VAR_14--)
     FUNC_1 (VAR_4->dev->id, VAR_4->id, VAR_5++);

   VAR_8 = (char *) VAR_8 + VAR_13;
   VAR_7 -= VAR_13;
 }
    }

 finish:

  return VAR_3;
}
