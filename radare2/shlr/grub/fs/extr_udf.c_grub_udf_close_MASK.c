
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grub_fshelp_node {struct grub_fshelp_node* data; } ;
typedef TYPE_1__* grub_file_t ;
typedef int grub_err_t ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct grub_fshelp_node*) ;
 int VAR_1 ;

__attribute__((used)) static grub_err_t
FUNC_2 (grub_file_t VAR_2)
{
  if (VAR_2->data)
    {
      struct grub_fshelp_node *VAR_3 = (struct grub_fshelp_node *) VAR_2->data;

      FUNC_1 (VAR_3->data);
      FUNC_1 (VAR_3);
    }

  FUNC_0 (VAR_1);

  return VAR_0;
}
