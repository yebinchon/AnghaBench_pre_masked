
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct find_file_closure {int* type; int * currnode; int * oldnode; int name; } ;
typedef int grub_fshelp_node_t ;
typedef enum grub_fshelp_filetype { ____Placeholder_grub_fshelp_filetype } grub_fshelp_filetype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static int
FUNC_3 (const char *VAR_3,
  enum grub_fshelp_filetype VAR_4,
  grub_fshelp_node_t VAR_5,
  void *VAR_6)
{
  struct find_file_closure *VAR_7 = VAR_6;

  if (VAR_4 == VAR_1 ||
      (FUNC_1 (VAR_7->name, VAR_3) &&
       (! (VAR_4 & VAR_0) ||
 FUNC_2 (VAR_7->name, VAR_3, VAR_2))))
    {
      FUNC_0 (VAR_5);
      return 0;
    }


  *(VAR_7->type) = VAR_4 & ~VAR_0;
  *(VAR_7->oldnode) = *(VAR_7->currnode);
  *(VAR_7->currnode) = VAR_5;

  return 1;
}
