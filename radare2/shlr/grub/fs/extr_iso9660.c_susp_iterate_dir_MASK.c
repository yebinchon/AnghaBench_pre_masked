
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_iso9660_susp_entry {int len; scalar_t__ sig; } ;
struct grub_iso9660_iterate_dir_closure {char** filename; int filename_alloc; int type; } ;
typedef int grub_uint8_t ;
typedef int grub_uint32_t ;
typedef int grub_err_t ;


 int* FUNC_0 (struct grub_iso9660_susp_entry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (int) ;

__attribute__((used)) static grub_err_t
FUNC_6 (struct grub_iso9660_susp_entry *VAR_7, void *VAR_8)
{
  struct grub_iso9660_iterate_dir_closure *VAR_9 = VAR_8;
  char *VAR_10 = *(VAR_9->filename);


  if (FUNC_3 ("NM", (char *) VAR_7->sig, 2) == 0)
    {


      grub_uint8_t *VAR_11 = FUNC_0(VAR_7);
      if (VAR_11[0] & VAR_5)
 VAR_10 = ".";
      else if (VAR_11[0] & VAR_6)
 VAR_10 = "..";
      else
 {
   int VAR_12 = 1;
   if (VAR_10)
     {
       VAR_12 += FUNC_2 (VAR_10);
       FUNC_1 (VAR_10,
       FUNC_2 (VAR_10)
       + VAR_7->len);
     }
   else
     {
       VAR_12 = VAR_7->len - 5;
       VAR_10 = FUNC_5 (VAR_12 + 1);
     }
   VAR_9->filename_alloc = 1;
   FUNC_4 (VAR_10, (char *) VAR_11 + 1, VAR_12);
   VAR_10[VAR_12] = '\0';
 }
    }

  else if (FUNC_3 ((char *) VAR_7->sig, "PX", 2) == 0)
    {


      grub_uint8_t *VAR_13 = FUNC_0(VAR_7);
      grub_uint32_t VAR_14 = ((VAR_13[0] + (VAR_13[1] << 8))
       & VAR_4);

      switch (VAR_14)
 {
 case 130:
   VAR_9->type = VAR_0;
   break;
 case 129:
   VAR_9->type = VAR_1;
   break;
 case 128:
   VAR_9->type = VAR_2;
   break;
 default:
   VAR_9->type = VAR_3;
 }
    }

  *(VAR_9->filename) = VAR_10;
  return 0;
}
