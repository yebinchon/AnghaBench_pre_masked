
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int vi_mode; int prompt; scalar_t__ prompt_mode; } ;
struct TYPE_8__ {TYPE_2__* context; } ;
struct TYPE_6__ {char* invalid; char* prompt; char* reset; } ;
struct TYPE_7__ {TYPE_1__ pal; scalar_t__ color_mode; } ;
typedef TYPE_3__ RCons ;



 TYPE_5__ VAR_0 ;

 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 () ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,char*,char const*) ;

__attribute__((used)) static void FUNC_4 () {
 RCons *VAR_1 = FUNC_1 ();
 const char *VAR_2 = "", *VAR_3 = "";
 if (VAR_1->context->color_mode) {
  if (VAR_0.prompt_mode) {
   switch (VAR_0.vi_mode) {
   case 129:
    VAR_2 = VAR_1->context->pal.invalid;
    break;
   case 128:
   default:
    VAR_2 = VAR_1->context->pal.prompt;
    break;
   }
  } else {
   VAR_2 = VAR_1->context->pal.prompt;
  }
  VAR_3 = VAR_1->context->pal.reset;
 }
 char *VAR_4 = FUNC_2 (VAR_0.prompt);
 FUNC_0 (VAR_0.prompt);
 VAR_0.prompt = FUNC_3 ("%s%s%s", VAR_2, VAR_4, VAR_3);
}
