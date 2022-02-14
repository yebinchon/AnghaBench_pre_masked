
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i_value; } ;
typedef TYPE_1__ RConfigNode ;


 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1 (void *VAR_0, void *VAR_1) {
 RConfigNode *VAR_2 = (RConfigNode*) VAR_1;
 if (VAR_2->i_value < 3) {
  FUNC_0 ("esil.stack.depth must be greater than 2\n");
  VAR_2->i_value = 32;
 }
 return 1;
}
