
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* grub_fshelp_node_t ;
typedef scalar_t__ grub_err_t ;
typedef int grub_disk_addr_t ;
struct TYPE_3__ {int block; int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int,int*,int*) ;

__attribute__((used)) static grub_disk_addr_t
FUNC_2 (grub_fshelp_node_t VAR_1, grub_disk_addr_t VAR_2)
{
  int VAR_3 = VAR_1->block;
  int VAR_4 = 0;
  int VAR_5 = 0;

  while (VAR_3)
    {
      grub_err_t VAR_6;



      if (VAR_2 == 0)
 return VAR_3;

      VAR_6 = FUNC_1 (VAR_1->data, VAR_3, &VAR_4, &VAR_5);
      if (VAR_6)
 return 0;

      if (VAR_2 < (unsigned int) VAR_4)
 return VAR_2 + VAR_3;

      VAR_2 -= VAR_4;

      VAR_3 = VAR_5;
    }

  FUNC_0 (VAR_0,
       "reading a SFS block outside the extent");

  return 0;
}
