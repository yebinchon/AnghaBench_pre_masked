
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int bits; int syscall; } ;
struct TYPE_8__ {char* value; } ;
struct TYPE_7__ {TYPE_5__* anal; int config; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RConfigNode ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_5__*,char*) ;
 char* FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 TYPE_2__* FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,char*,int ,char const*,char*) ;
 char* FUNC_9 (int ) ;

__attribute__((used)) static bool FUNC_10(void *VAR_1, void *VAR_2) {
 RCore *VAR_3 = (RCore*) VAR_1;
 int VAR_4 = FUNC_5 (VAR_3->config, "asm.bits");
 RConfigNode *VAR_5, *VAR_6 = (RConfigNode*) VAR_2;

 if (*VAR_6->value == '?') {
  FUNC_2 (VAR_6);
  return 0;
 }
 if (!VAR_6->value[0]) {
  FUNC_1 (VAR_6->value);
  VAR_6->value = FUNC_9 (VAR_0);
 }
 VAR_5 = FUNC_6 (VAR_3->config, "asm.arch");
 if (VAR_5) {
  const char *VAR_7 = FUNC_4 (VAR_3->config, "asm.cpu");
  FUNC_8 (VAR_3->anal->syscall, VAR_5->value, VAR_3->anal->bits, VAR_7, VAR_6->value);
  FUNC_0 (VAR_3->config, VAR_5->value, VAR_4);
 }
 FUNC_3 (VAR_3->anal, VAR_6->value);
 FUNC_7 (VAR_3);
 return 1;
}
