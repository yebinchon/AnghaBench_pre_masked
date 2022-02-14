
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {scalar_t__ flags; } ;
typedef int bfd_vma ;


 int FUNC_0 (int ,struct disassemble_info*) ;

int
FUNC_1 (bfd_vma VAR_0, struct disassemble_info *VAR_1)
{
  int VAR_2;

  VAR_1->flags = 0;
  VAR_2 = FUNC_0 (VAR_0, VAR_1);
  return VAR_2;
}
