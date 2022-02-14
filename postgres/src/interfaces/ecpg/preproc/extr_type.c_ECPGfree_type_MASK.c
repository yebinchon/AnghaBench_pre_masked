
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int members; struct ECPGtype* element; } ;
struct ECPGtype {int type; TYPE_1__ u; } ;


 int FUNC_0 (int ) ;



 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ECPGtype*) ;
 int FUNC_4 (int ,int ,char*,int) ;

void
FUNC_5(struct ECPGtype *VAR_2)
{
 if (!FUNC_1(VAR_2->type))
 {
  switch (VAR_2->type)
  {
   case 130:
    switch (VAR_2->u.element->type)
    {
     case 130:
      FUNC_2("internal error: found multidimensional array\n");
      break;
     case 129:
     case 128:

      FUNC_0(VAR_2->u.element->u.members);
      FUNC_3(VAR_2->u.element);
      break;
     default:
      if (!FUNC_1(VAR_2->u.element->type))
       FUNC_2("internal error: unknown datatype, please report this to <pgsql-bugs@lists.postgresql.org>");

      FUNC_3(VAR_2->u.element);
    }
    break;
   case 129:
   case 128:
    FUNC_0(VAR_2->u.members);
    break;
   default:
    FUNC_4(VAR_1, VAR_0, "unrecognized variable type code %d", VAR_2->type);
    break;
  }
 }
 FUNC_3(VAR_2);
}
