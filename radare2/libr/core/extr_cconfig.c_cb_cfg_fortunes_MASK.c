
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* value; } ;
typedef int RCore ;
typedef TYPE_1__ RConfigNode ;


 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, void *VAR_1) {
 RCore *VAR_2 = (RCore *)VAR_0;
 RConfigNode *VAR_3 = (RConfigNode *)VAR_1;

 if (VAR_3->value[0] == '?') {
  FUNC_0 (VAR_2);
  return 0;
 }
 return 1;
}
