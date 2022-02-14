
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ grub_size_t ;
typedef unsigned int grub_off_t ;
typedef scalar_t__ grub_err_t ;
typedef TYPE_2__* grub_disk_t ;
typedef int grub_disk_addr_t ;
struct TYPE_8__ {int total_sectors; int closure; int (* read_hook ) (int,unsigned int,scalar_t__,int ) ;int id; TYPE_1__* dev; int name; } ;
struct TYPE_7__ {scalar_t__ (* read ) (TYPE_2__*,int,int,char*) ;int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int*,unsigned int*,scalar_t__) ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,char*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char*,char*,unsigned long long,...) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (scalar_t__) ;
 int FUNC_9 (void*,char*,scalar_t__) ;
 char* FUNC_10 (char*,unsigned int) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int,int,char*) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int,unsigned int,char*) ;
 int FUNC_13 (int,unsigned int,scalar_t__,int ) ;
 int FUNC_14 (int,unsigned int,scalar_t__,int ) ;

grub_err_t
FUNC_15 (grub_disk_t VAR_8, grub_disk_addr_t VAR_9,
  grub_off_t VAR_10, grub_size_t VAR_11, void *VAR_12)
{
  char *VAR_13;
  unsigned VAR_14;
  if ((int)VAR_11 < 1) {
    return VAR_7;
  }


  if (FUNC_0 (VAR_8, &VAR_9, &VAR_10, VAR_11) != VAR_5)
    {
      FUNC_6 ();
      FUNC_4 ("disk", "Read out of range: sector 0x%llx (%s).\n",
      (unsigned long long) VAR_9, VAR_6);
      FUNC_5 ();
      return VAR_7;
    }

  VAR_14 = VAR_10;


  VAR_13 = FUNC_8 (VAR_3 << VAR_0);
  if (! VAR_13) {
    return VAR_7;
  }


  while (VAR_11)
    {
      char *VAR_15;
      grub_disk_addr_t VAR_16;
      grub_size_t VAR_17;
      grub_size_t VAR_18;


      VAR_16 = VAR_9 & ~(VAR_1 - 1);
      VAR_18 = (VAR_9 - VAR_16) << VAR_2;
      VAR_17 = ((VAR_3 << VAR_0)
      - VAR_18 - VAR_14);
      if (VAR_17 > VAR_11)
 VAR_17 = VAR_11;


      VAR_15 = FUNC_1 (VAR_8->dev->id, VAR_8->id, VAR_16);
      if (VAR_15)
 {

   if (VAR_12) {
     if (VAR_18 + VAR_14 + VAR_17 >= VAR_11) {

              VAR_7 = VAR_4;
              goto finish;
     }
     FUNC_9 (VAR_12, VAR_15 + VAR_18 + VAR_14, VAR_17);
          }
   FUNC_3 (VAR_8->dev->id, VAR_8->id, VAR_16);
 }
      else
 {

   if (VAR_16 + VAR_1 > VAR_8->total_sectors
       || (VAR_8->dev->read) (VAR_8, VAR_16,
        VAR_1, VAR_13)
       != VAR_5)
     {

       unsigned VAR_19;
       char *VAR_20;

       VAR_7 = VAR_5;

       VAR_19 = ((VAR_11 + VAR_14 + VAR_3 - 1)
       >> VAR_2);

       VAR_20 = FUNC_10 (VAR_13, VAR_19 << VAR_2);
       if (!VAR_20)
  goto finish;

       VAR_13 = VAR_20;

       if ((VAR_8->dev->read) (VAR_8, VAR_9, VAR_19, VAR_13))
  {
    FUNC_6 ();
    FUNC_4 ("disk", "%s read failed\n", VAR_8->name);
    FUNC_5 ();
    goto finish;
  }

       if (VAR_12)
  FUNC_9 (VAR_12, VAR_13 + VAR_14, VAR_11);


       if (VAR_8->read_hook)
  while (VAR_11)
    {
      grub_size_t VAR_21;

      VAR_21 = VAR_11;
      if (VAR_14 + VAR_21 > VAR_3)
        VAR_21 = VAR_3 - VAR_14;
      (VAR_8->read_hook) (VAR_9, VAR_14,
           VAR_21, VAR_8->closure);
      if (VAR_7 != VAR_5)
        goto finish;

      VAR_9++;
      VAR_11 -= VAR_21;
      VAR_14 = 0;
    }


       goto finish;
     }


   if (VAR_12)
     FUNC_9 (VAR_12, VAR_13 + VAR_18 + VAR_14, VAR_17);
   FUNC_2 (VAR_8->dev->id, VAR_8->id,
     VAR_16, VAR_13);
 }


      if (VAR_8->read_hook)
 {
   grub_disk_addr_t VAR_22 = VAR_9;
   grub_size_t VAR_23 = VAR_17;

   while (VAR_23)
     {
       (VAR_8->read_hook) (VAR_22, VAR_14,
     ((VAR_23 > VAR_3)
      ? VAR_3
      : VAR_23), VAR_8->closure);

       if (VAR_23 < VAR_3 - VAR_14)
  break;

       VAR_22++;
       VAR_23 -= VAR_3 - VAR_14;
       VAR_14 = 0;
     }
 }

      VAR_9 = VAR_16 + VAR_1;
      if (VAR_12)
 VAR_12 = (char *) VAR_12 + VAR_17;
      VAR_11 -= VAR_17;
      VAR_14 = 0;
    }

 finish:

  FUNC_7 (VAR_13);

  return VAR_7;
}
