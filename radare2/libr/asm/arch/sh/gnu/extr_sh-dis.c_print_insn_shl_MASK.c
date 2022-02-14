
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int flags; } ;
typedef int bfd_vma ;


 int VAR_0 ;
 int FUNC_0 (int ,struct disassemble_info*) ;

int
FUNC_1 (bfd_vma VAR_1, struct disassemble_info *VAR_2)
{
  int VAR_3;

  VAR_2->flags = VAR_0;
  VAR_3 = FUNC_0 (VAR_1, VAR_2);
  return VAR_3;
}
