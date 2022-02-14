
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_iso9660_susp_entry {int len; scalar_t__ sig; } ;
struct grub_iso9660_read_symlink_closure {int addslash; } ;
typedef scalar_t__ grub_err_t ;


 unsigned char* FUNC_0 (struct grub_iso9660_susp_entry*) ;
 int FUNC_1 (char*,int,struct grub_iso9660_read_symlink_closure*) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static grub_err_t
FUNC_4 (struct grub_iso9660_susp_entry *VAR_1, void *VAR_2)
{
  struct grub_iso9660_read_symlink_closure *VAR_3 = VAR_2;

  if (FUNC_3 ("SL", (char *) VAR_1->sig, 2) == 0)
    {
      unsigned int VAR_4 = 1;


      while (VAR_4 < FUNC_2 (VAR_1->len))
 {
   if (VAR_3->addslash)
     {
       FUNC_1 ("/", 1, VAR_3);
       VAR_3->addslash = 0;
     }

          unsigned char *VAR_5 = FUNC_0(VAR_1);

   switch (VAR_5[VAR_4] & 30)
     {
     case 0:
       {



  FUNC_1 ((char *) &VAR_5[VAR_4 + 2],
     VAR_5[VAR_4 + 1], VAR_3);
  if ((VAR_5[VAR_4] & 1))
    VAR_3->addslash = 1;

  break;
       }

     case 2:
       FUNC_1 ("./", 2, VAR_3);
       break;

     case 4:
       FUNC_1 ("../", 3, VAR_3);
       break;

     case 8:
       FUNC_1 ("/", 1, VAR_3);
       break;
     }


   VAR_4 += VAR_5[VAR_4 + 1] + 2;
 }


      if (VAR_0)
 return VAR_0;
    }

  return 0;
}
