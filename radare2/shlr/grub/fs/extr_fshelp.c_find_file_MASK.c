
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_fshelp_find_file_closure {int (* iterate_dir ) (int ,int ,struct find_file_closure*) ;int symlinknest; char* (* read_symlink ) (int ) ;int foundtype; int rootnode; int currroot; } ;
struct find_file_closure {char* name; int* type; int * currnode; int * oldnode; } ;
typedef int grub_fshelp_node_t ;
typedef scalar_t__ grub_err_t ;
typedef enum grub_fshelp_filetype { ____Placeholder_grub_fshelp_filetype } grub_fshelp_filetype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct grub_fshelp_find_file_closure*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char*,char const*,scalar_t__) ;
 int VAR_6 ;
 int FUNC_7 (int ,int ,struct find_file_closure*) ;
 char* FUNC_8 (int ) ;

__attribute__((used)) static grub_err_t
FUNC_9 (const char *VAR_7, grub_fshelp_node_t VAR_8,
    grub_fshelp_node_t *VAR_9,
    struct grub_fshelp_find_file_closure *VAR_10)
{
 char *VAR_11 = FUNC_3 (FUNC_5 (VAR_7) + 1);
  char *VAR_12 = VAR_11;
  char *VAR_13;
  enum grub_fshelp_filetype VAR_14 = VAR_3;
  grub_fshelp_node_t VAR_15 = VAR_8;
  grub_fshelp_node_t VAR_16 = VAR_8;

  VAR_10->currroot = VAR_8;

  FUNC_6 (VAR_11, VAR_7, FUNC_5 (VAR_7) + 1);


  while (*VAR_12 == '/')
    VAR_12++;

  if (! *VAR_12)
    {
      *VAR_9 = VAR_15;
      FUNC_2 (VAR_11);
      return 0;
    }

  for (;;)
    {
      int VAR_17;
      struct find_file_closure VAR_18;


      VAR_13 = FUNC_4 (VAR_12, '/');
      if (VAR_13)
 {

   while (*VAR_13 == '/')
     *(VAR_13++) = '\0';
 }



      if (VAR_14 != VAR_3)
 {
   FUNC_0 (VAR_15, VAR_10);
   FUNC_2 (VAR_11);
   return FUNC_1 (VAR_0, "not a directory");
 }

      VAR_18.name = VAR_12;
      VAR_18.type = &VAR_14;
      VAR_18.oldnode = &VAR_16;
      VAR_18.currnode = &VAR_15;

      VAR_17 = VAR_10->iterate_dir (VAR_15, VAR_6, &VAR_18);
      if (! VAR_17)
 {
   if (VAR_5) {
     FUNC_2 (VAR_11);
     return VAR_5;
}

   break;
 }


      if (VAR_14 == VAR_4)
 {
   char *VAR_19;


   if (++(VAR_10->symlinknest) == 8)
     {
       FUNC_0 (VAR_15, VAR_10);
       FUNC_0 (VAR_16, VAR_10);
       FUNC_2 (VAR_11);
       return FUNC_1 (VAR_2,
     "too deep nesting of symlinks");
     }

   VAR_19 = VAR_10->read_symlink (VAR_15);
   FUNC_0 (VAR_15, VAR_10);

   if (!VAR_19)
     {
       FUNC_0 (VAR_16, VAR_10);
        FUNC_2 (VAR_11);
       return VAR_5;
     }


   if (VAR_19[0] == '/')
     {
       FUNC_0 (VAR_16, VAR_10);
       VAR_16 = VAR_10->rootnode;
     }


   FUNC_9 (VAR_19, VAR_16, &VAR_15, VAR_10);
   VAR_14 = VAR_10->foundtype;
   FUNC_2 (VAR_19);

   if (VAR_5)
     {
       FUNC_0 (VAR_16, VAR_10);
        FUNC_2 (VAR_11);
       return VAR_5;
     }
 }

      FUNC_0 (VAR_16, VAR_10);


      if (! VAR_13 || *VAR_13 == '\0')
 {
   *VAR_9 = VAR_15;
   VAR_10->foundtype = VAR_14;
          FUNC_2 (VAR_11);
   return 0;
 }

      VAR_12 = VAR_13;
    }

  FUNC_2 (VAR_11);
  return FUNC_1 (VAR_1, "file not found");
}
