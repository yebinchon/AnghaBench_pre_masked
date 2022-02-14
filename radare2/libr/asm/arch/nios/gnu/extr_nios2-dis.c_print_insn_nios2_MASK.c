
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef enum bfd_endian { ____Placeholder_bfd_endian } bfd_endian ;
struct TYPE_6__ {int (* read_memory_func ) (int ,int *,int,TYPE_1__*) ;int (* memory_error_func ) (int,int ,TYPE_1__*) ;} ;
typedef TYPE_1__ disassemble_info ;
typedef int bfd_vma ;
typedef int bfd_byte ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned long,TYPE_1__*) ;
 int FUNC_3 (int ,int *,int,TYPE_1__*) ;
 int FUNC_4 (int,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5 (bfd_vma VAR_2, disassemble_info *VAR_3,
    enum bfd_endian VAR_4)
{
  bfd_byte VAR_5[VAR_1];
  int VAR_6;

  VAR_6 = (*VAR_3->read_memory_func) (VAR_2, VAR_5, VAR_1, VAR_3);
  if (VAR_6 == 0)
    {
      unsigned long VAR_7;
      if (VAR_4 == VAR_0) {
       VAR_7 = (unsigned long)FUNC_0 (VAR_5);
      } else {
       VAR_7 = (unsigned long)FUNC_1 (VAR_5);
      }
      VAR_6 = FUNC_2 (VAR_2, VAR_7, VAR_3);
    }
  else
    {
      (*VAR_3->memory_error_func) (VAR_6, VAR_2, VAR_3);
      VAR_6 = -1;
    }
  return VAR_6;
}
