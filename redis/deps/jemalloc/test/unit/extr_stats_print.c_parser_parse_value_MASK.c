
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int token_type; } ;
struct TYPE_7__ {TYPE_1__ token; } ;
typedef TYPE_2__ parser_t ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_3(parser_t *VAR_0) {
 switch (VAR_0->token.token_type) {
 case 131:
 case 134:
 case 128:
 case 129:
 case 130:
  return 0;
 case 133:
  return FUNC_2(VAR_0);
 case 132:
  return FUNC_1(VAR_0);
 default:
  return 1;
 }
 FUNC_0();
}
