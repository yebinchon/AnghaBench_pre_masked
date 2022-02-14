
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int (* read_memory_func ) (int ,int ,int,struct disassemble_info*) ;int (* memory_error_func ) (int,int ,struct disassemble_info*) ;scalar_t__ private_data; } ;
struct dis_private {int bailout; int byte_buf; } ;
typedef int bfd_vma ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int,struct disassemble_info*) ;
 int FUNC_3 (int,int ,struct disassemble_info*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5 (struct disassemble_info *VAR_1, bfd_vma VAR_2)
{
  int VAR_3, VAR_4 = 0;
  struct dis_private *VAR_5 = (struct dis_private *) VAR_1->private_data;
  int VAR_6 = FUNC_4 (VAR_0);





  FUNC_1 (VAR_5->byte_buf, 0, VAR_6);
  for (VAR_3 = VAR_6; VAR_3 > 0; VAR_3--)
    {
      VAR_4 = (*VAR_1->read_memory_func) (VAR_2, VAR_5->byte_buf, VAR_3,
       VAR_1);
      if (VAR_4 == 0) {
       return VAR_3;
      }
    }
  (*VAR_1->memory_error_func) (VAR_4, VAR_2, VAR_1);
  FUNC_0 (VAR_5->bailout, 1);
return -1;

}
