
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct symbol {int type; int name; struct property* prop; } ;
struct property {int type; TYPE_3__* expr; struct property* next; } ;
struct TYPE_5__ {struct symbol* sym; } ;
struct TYPE_4__ {struct symbol* sym; } ;
struct TYPE_6__ {TYPE_2__ right; TYPE_1__ left; int type; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct symbol*,struct symbol*) ;
 struct symbol* FUNC_1 (struct property*) ;
 int FUNC_2 (struct property*,char*,...) ;
 struct property* FUNC_3 (struct symbol*) ;
 int FUNC_4 (struct symbol*) ;

__attribute__((used)) static void FUNC_5(struct symbol *VAR_7)
{
 struct property *VAR_8;
 struct symbol *VAR_9;
 char *VAR_10;

 for (VAR_8 = VAR_7->prop; VAR_8; VAR_8 = VAR_8->next) {
  switch (VAR_8->type) {
  case 131:
   if ((VAR_7->type == VAR_4 || VAR_7->type == VAR_3 || VAR_7->type == VAR_2) &&
       VAR_8->expr->type != VAR_0)
    FUNC_2(VAR_8,
        "default for config symbol '%s'"
        " must be a single symbol", VAR_7->name);
   if (VAR_8->expr->type != VAR_0)
    break;
   VAR_9 = FUNC_1(VAR_8);
   if (VAR_7->type == VAR_2 || VAR_7->type == VAR_3) {
    if (!FUNC_0(VAR_7, VAR_9))
     FUNC_2(VAR_8,
         "'%s': number is invalid",
         VAR_7->name);
   }
   if (FUNC_4(VAR_7)) {
    struct property *VAR_11 =
     FUNC_3(VAR_9);

    if (!VAR_11 ||
        FUNC_1(VAR_11) != VAR_7)
     FUNC_2(VAR_8,
        "choice default symbol '%s' is not contained in the choice",
        VAR_9->name);
   }
   break;
  case 128:
  case 130:
   VAR_10 = VAR_8->type == 128 ? "select" : "imply";
   VAR_9 = FUNC_1(VAR_8);
   if (VAR_7->type != VAR_1 && VAR_7->type != VAR_5)
    FUNC_2(VAR_8,
        "config symbol '%s' uses %s, but is "
        "not bool or tristate", VAR_7->name, VAR_10);
   else if (VAR_9->type != VAR_6 &&
     VAR_9->type != VAR_1 &&
     VAR_9->type != VAR_5)
    FUNC_2(VAR_8,
        "'%s' has wrong type. '%s' only "
        "accept arguments of bool and "
        "tristate type", VAR_9->name, VAR_10);
   break;
  case 129:
   if (VAR_7->type != VAR_3 && VAR_7->type != VAR_2)
    FUNC_2(VAR_8, "range is only allowed "
      "for int or hex symbols");
   if (!FUNC_0(VAR_7, VAR_8->expr->left.sym) ||
       !FUNC_0(VAR_7, VAR_8->expr->right.sym))
    FUNC_2(VAR_8, "range is invalid");
   break;
  default:
   ;
  }
 }
}
