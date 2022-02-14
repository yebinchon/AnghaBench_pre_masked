
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int token_type; } ;
struct TYPE_7__ {TYPE_1__ token; } ;
typedef TYPE_2__ parser_t ;




 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_2(parser_t *VAR_0) {
 if (FUNC_0(VAR_0)) {
  return 1;
 }

 while (1) {
  if (FUNC_1(VAR_0)) {
   return 1;
  }
  switch (VAR_0->token.token_type) {
  case 129:
   if (FUNC_1(VAR_0)) {
    return 1;
   }
   if (FUNC_0(VAR_0)) {
    return 1;
   }
   break;
  case 128:
   return 0;
  default:
   return 1;
  }
 }
}
