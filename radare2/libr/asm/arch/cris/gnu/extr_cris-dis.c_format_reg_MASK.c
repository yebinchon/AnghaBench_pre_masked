
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cris_disasm_data {int distype; } ;
typedef scalar_t__ bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3 (struct cris_disasm_data *VAR_2,
     int VAR_3,
     char *VAR_4,
     bfd_boolean VAR_5)
{
  char *VAR_6 = VAR_4;

  if (VAR_5) {
   *VAR_6++ = VAR_0;
  }

  switch (VAR_3)
    {
    case 15:

      if (VAR_2->distype == VAR_1) {
       FUNC_1 (VAR_6, "acr");
      } else {
       FUNC_1 (VAR_6, "pc");
      }
      break;

    case 14:
      FUNC_1 (VAR_6, "sp");
      break;

    default:
      FUNC_0 (VAR_6, "r%d", VAR_3);
      break;
    }

  return VAR_4 + FUNC_2 (VAR_4);
}
