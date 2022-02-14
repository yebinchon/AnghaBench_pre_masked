
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int * private_data; } ;
typedef int bfd_vma ;


 int FUNC_0 (struct disassemble_info*) ;
 int FUNC_1 (struct disassemble_info*) ;
 int FUNC_2 (int ,struct disassemble_info*,int ,int ) ;

int
FUNC_3 (bfd_vma VAR_0, struct disassemble_info *VAR_1)
{
 if (VAR_1->private_data == ((void*)0) && !FUNC_1 (VAR_1)) {
  return -1;
 }
 return FUNC_2 (VAR_0, VAR_1, 0, FUNC_0 (VAR_1));
}
