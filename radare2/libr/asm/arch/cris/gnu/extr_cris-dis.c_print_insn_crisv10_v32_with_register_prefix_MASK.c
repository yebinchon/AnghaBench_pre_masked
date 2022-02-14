
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int private_data; } ;
typedef TYPE_1__ disassemble_info ;
typedef int bfd_vma ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;

int
FUNC_2 (bfd_vma VAR_2,
          disassemble_info *VAR_3)
{
 if (!VAR_3->private_data && !FUNC_0 (VAR_3, VAR_1)) {
  return -1;
 }
 return FUNC_1 (VAR_2, VAR_3, VAR_0);
}
