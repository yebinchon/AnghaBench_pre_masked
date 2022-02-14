
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * names; } ;
typedef TYPE_1__ TypeName ;
struct TYPE_5__ {int defname; int * arg; } ;
typedef int List ;
typedef TYPE_2__ DefElem ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;



 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

List *
FUNC_5(DefElem *VAR_3)
{
 if (VAR_3->arg == ((void*)0))
  FUNC_0(VAR_1,
    (FUNC_1(VAR_0),
     FUNC_2("%s requires a parameter",
      VAR_3->defname)));
 switch (FUNC_4(VAR_3->arg))
 {
  case 128:
   return ((TypeName *) VAR_3->arg)->names;
  case 130:
   return (List *) VAR_3->arg;
  case 129:

   return FUNC_3(VAR_3->arg);
  default:
   FUNC_0(VAR_1,
     (FUNC_1(VAR_0),
      FUNC_2("argument of %s must be a name",
       VAR_3->defname)));
 }
 return VAR_2;
}
