
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tristate ;
struct TYPE_6__ {scalar_t__ val; } ;
struct symbol {int type; TYPE_2__ curr; } ;
struct TYPE_5__ {int const tri; } ;
struct TYPE_7__ {TYPE_1__ curr; } ;





 TYPE_3__* VAR_0 ;

 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct symbol*) ;


const char *FUNC_2(struct symbol *VAR_1)
{
 tristate VAR_2;

 switch (VAR_1->type) {
 case 132:
 case 131:
  VAR_2 = FUNC_1(VAR_1);
  switch (VAR_2) {
  case 129:
   return "n";
  case 130:
   FUNC_0(VAR_0);
   return (VAR_0->curr.tri == 129) ? "n" : "m";
  case 128:
   return "y";
  }
  break;
 default:
  ;
 }
 return (const char *)VAR_1->curr.val;
}
