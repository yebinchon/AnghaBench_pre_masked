
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grub_fshelp_find_file_closure {scalar_t__ rootnode; scalar_t__ currroot; } ;
typedef scalar_t__ grub_fshelp_node_t ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1 (grub_fshelp_node_t VAR_0, struct grub_fshelp_find_file_closure *VAR_1)
{
  if (VAR_0 != VAR_1->rootnode && VAR_0 != VAR_1->currroot)
    FUNC_0 (VAR_0);
}
