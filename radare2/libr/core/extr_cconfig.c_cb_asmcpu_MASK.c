
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* value; } ;
struct TYPE_6__ {int config; int assembler; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RConfigNode ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (TYPE_1__*,int ,char) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static bool FUNC_5(void *VAR_0, void *VAR_1) {
 RCore *VAR_2 = (RCore *) VAR_0;
 RConfigNode *VAR_3 = (RConfigNode *) VAR_1;
 if (*VAR_3->value == '?') {
  FUNC_4 (VAR_2, VAR_3);

  FUNC_3 (VAR_2, FUNC_1 (VAR_2->config, "asm.arch"), VAR_3->value[1]);
  return 0;
 }
 FUNC_0 (VAR_2->assembler, VAR_3->value);
 FUNC_2 (VAR_2->config, "anal.cpu", VAR_3->value);
 return 1;
}
