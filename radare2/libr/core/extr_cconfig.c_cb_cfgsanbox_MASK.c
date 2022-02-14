
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i_value; } ;
typedef TYPE_1__ RConfigNode ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0, void *VAR_1) {
 RConfigNode *VAR_2 = (RConfigNode*) VAR_1;
 int VAR_3 = FUNC_1 (VAR_2->i_value);
 if (VAR_2->i_value != VAR_3) {
  FUNC_0 ("Cannot disable sandbox\n");
 }
 return (!VAR_2->i_value && VAR_3)? 0: 1;
}
