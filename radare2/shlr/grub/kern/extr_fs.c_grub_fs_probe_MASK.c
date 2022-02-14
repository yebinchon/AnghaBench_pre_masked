
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* grub_fs_t ;
typedef TYPE_3__* grub_device_t ;
struct TYPE_11__ {TYPE_1__* net; scalar_t__ disk; } ;
struct TYPE_10__ {int (* dir ) (TYPE_3__*,char*,int ,int ) ;int name; struct TYPE_10__* next; } ;
struct TYPE_9__ {TYPE_2__* fs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 TYPE_2__* VAR_5 ;
 int FUNC_5 (TYPE_3__*,char*,int ,int ) ;
 int FUNC_6 (TYPE_3__*,char*,int ,int ) ;

grub_fs_t
FUNC_7 (grub_device_t VAR_6)
{
  grub_fs_t VAR_7;

  if (VAR_6->disk)
    {

      static int VAR_8 = 0;

      for (VAR_7 = VAR_5; VAR_7; VAR_7 = VAR_7->next)
 {
   FUNC_0 ("fs", "Detecting %s...\n", VAR_7->name);
   (VAR_7->dir) (VAR_6, "/", VAR_3, 0);
   if (VAR_4 == VAR_1)
     return VAR_7;

   FUNC_3 ();
   FUNC_0 ("fs", "%s detection failed.\n", VAR_7->name);
   FUNC_2 ();

   if (VAR_4 != VAR_0)
     return 0;

   VAR_4 = VAR_1;
 }


      if (&FUNC_4 && VAR_8 == 0)
 {
   VAR_8++;

   while (FUNC_4 ())
     {
       VAR_7 = VAR_5;

       (VAR_7->dir) (VAR_6, "/", VAR_3, 0);
       if (VAR_4 == VAR_1)
  {
    VAR_8--;
    return VAR_7;
  }

       if (VAR_4 != VAR_0)
  {
    VAR_8--;
    return 0;
  }

       VAR_4 = VAR_1;
     }

   VAR_8--;
 }
    }
  else if (VAR_6->net->fs)
    return VAR_6->net->fs;

  FUNC_1 (VAR_2, "unknown filesystem");
  return 0;
}
