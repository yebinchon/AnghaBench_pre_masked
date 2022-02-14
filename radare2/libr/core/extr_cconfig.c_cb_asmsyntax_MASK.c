
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* value; } ;
struct TYPE_4__ {int assembler; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RConfigNode ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bool FUNC_3(void *VAR_0, void *VAR_1) {
 RCore *VAR_2 = (RCore*) VAR_0;
 RConfigNode *VAR_3 = (RConfigNode*) VAR_1;
 if (*VAR_3->value == '?') {
  FUNC_0 (VAR_3);
  return 0;
 } else {
  int VAR_4 = FUNC_2 (VAR_3->value);
  if (VAR_4 == -1) {
   return 0;
  }
  FUNC_1 (VAR_2->assembler, VAR_4);
 }
 return 1;
}
