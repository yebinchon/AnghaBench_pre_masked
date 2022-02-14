
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i_value; int * cb_ptr_q; } ;
typedef TYPE_1__ RConfigNode ;



__attribute__((used)) static bool FUNC_0(void *VAR_0) {
 RConfigNode *VAR_1 = VAR_0;
 *(VAR_1->cb_ptr_q) = VAR_1->i_value;
 return 1;
}
