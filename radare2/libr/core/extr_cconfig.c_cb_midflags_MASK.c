
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* value; } ;
typedef TYPE_1__ RConfigNode ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_1 (void *VAR_0, void *VAR_1) {
 RConfigNode *VAR_2 = (RConfigNode *)VAR_1;
 if (VAR_2->value[0] == '?') {
  FUNC_0 (VAR_2);
  return 0;
 }
 return 1;
}
