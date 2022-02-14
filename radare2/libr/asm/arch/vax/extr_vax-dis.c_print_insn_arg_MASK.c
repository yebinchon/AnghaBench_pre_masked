
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* print_address_func ) (scalar_t__,TYPE_1__*) ;} ;
typedef TYPE_1__ disassemble_info ;
typedef int bfd_vma ;


 scalar_t__ FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (unsigned char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char const*,int,unsigned char*,int ,TYPE_1__*) ;
 int FUNC_4 (scalar_t__,TYPE_1__*) ;
 int FUNC_5 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6 (const char *VAR_0,
  unsigned char *VAR_1,
  bfd_vma VAR_2,
  disassemble_info *VAR_3)
{
  int VAR_4;


  switch (VAR_0[1])
    {
    case 'b' : VAR_4 = 1; break;
    case 'd' : VAR_4 = 8; break;
    case 'f' : VAR_4 = 4; break;
    case 'g' : VAR_4 = 8; break;
    case 'h' : VAR_4 = 16; break;
    case 'l' : VAR_4 = 4; break;
    case 'o' : VAR_4 = 16; break;
    case 'w' : VAR_4 = 2; break;
    case 'q' : VAR_4 = 8; break;
    default : FUNC_2 ();
    }


  if (VAR_0[0] == 'b')
    {
      unsigned char *VAR_5 = VAR_1;

      if (VAR_4 == 1) {
       (*VAR_3->print_address_func) (VAR_2 + 1 + FUNC_0 (VAR_5), VAR_3);
      } else {
       (*VAR_3->print_address_func) (VAR_2 + 2 + FUNC_1 (VAR_5), VAR_3);
      }

      return VAR_5 - VAR_1;
    }

  return FUNC_3 (VAR_0, VAR_4, VAR_1, VAR_2, VAR_3);
}
