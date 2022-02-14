
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int token_type; } ;
struct TYPE_7__ {TYPE_1__ token; } ;
typedef TYPE_2__ parser_t ;





 int FUNC_0 (int,int,char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_3(parser_t *VAR_0) {
 FUNC_0(VAR_0->token.token_type, 128,
     "Object should start with string");
 if (FUNC_1(VAR_0)) {
  return 1;
 }

 while (1) {
  if (FUNC_2(VAR_0)) {
   return 1;
  }
  switch (VAR_0->token.token_type) {
  case 130:
   if (FUNC_2(VAR_0)) {
    return 1;
   }
   switch (VAR_0->token.token_type) {
   case 128:
    if (FUNC_1(VAR_0)) {
     return 1;
    }
    break;
   default:
    return 1;
   }
   break;
  case 129:
   return 0;
  default:
   return 1;
  }
 }
}
