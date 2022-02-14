
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ grub_uint64_t ;
typedef int grub_size_t ;
typedef TYPE_1__* grub_disk_t ;
typedef TYPE_2__* grub_disk_dev_t ;
struct TYPE_9__ {scalar_t__ (* open ) (char*,TYPE_1__*) ;struct TYPE_9__* next; } ;
struct TYPE_8__ {int partition; TYPE_2__* dev; int has_partitions; int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_3 (char*,char*,char const*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ VAR_6 ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char*,char const*,int) ;
 int FUNC_11 (TYPE_1__*,char const*) ;
 int FUNC_12 (char const*) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (char*,TYPE_1__*) ;

grub_disk_t
FUNC_15 (const char *VAR_7)
{
  const char *VAR_8;
  grub_disk_t VAR_9;
  grub_disk_dev_t VAR_10;
  char *VAR_11 = (char *) VAR_7;
  grub_uint64_t VAR_12;

  FUNC_3 ("disk", "Opening `%s'...\n", VAR_7);

  VAR_9 = (grub_disk_t) FUNC_13 (sizeof (*VAR_9));
  if (! VAR_9)
    return 0;

  VAR_9->name = FUNC_12 (VAR_7);
  if (! VAR_9->name)
    goto fail;

  VAR_8 = FUNC_0 (VAR_7);
  if (VAR_8)
    {
      grub_size_t VAR_13 = VAR_8 - VAR_7;

      VAR_11 = FUNC_9 (VAR_13 + 1);
      if (! VAR_11)
 goto fail;

      FUNC_10 (VAR_11, VAR_7, VAR_13);
      VAR_11[VAR_13] = '\0';
    }

  for (VAR_10 = VAR_4; VAR_10; VAR_10 = VAR_10->next)
    {
      if ((VAR_10->open) (VAR_11, VAR_9) == VAR_2)
 break;
      else if (VAR_5 == VAR_3)
 VAR_5 = VAR_2;
      else
 goto fail;
    }

  if (! VAR_10)
    {
      FUNC_4 (VAR_3, "no such disk");
      goto fail;
    }

  if (VAR_8 && ! VAR_9->has_partitions)
    {
      FUNC_4 (VAR_1, "no partition on this disk");
      goto fail;
    }

  VAR_9->dev = VAR_10;

  if (VAR_8)
    {
      VAR_9->partition = FUNC_11 (VAR_9, VAR_8 + 1);
      if (! VAR_9->partition)
 {
   FUNC_4 (VAR_3, "no such partition");
   goto fail;
 }
    }



  VAR_12 = FUNC_8 ();

  if (VAR_12 > (VAR_6
        + VAR_0 * 1000))
    FUNC_1 ();

  VAR_6 = VAR_12;

 fail:

  if (VAR_11 && VAR_11 != VAR_7)
    FUNC_7 (VAR_11);

  if (VAR_5 != VAR_2)
    {
      FUNC_6 ();
      FUNC_3 ("disk", "Opening `%s' failed.\n", VAR_7);
      FUNC_5 ();

      FUNC_2 (VAR_9);
      return 0;
    }

  return VAR_9;
}
