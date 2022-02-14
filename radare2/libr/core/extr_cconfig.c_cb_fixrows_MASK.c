
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fix_rows; } ;
struct TYPE_3__ {scalar_t__ i_value; } ;
typedef TYPE_1__ RConfigNode ;


 TYPE_2__* FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, void *VAR_1) {
 RConfigNode *VAR_2 = (RConfigNode *) VAR_1;
 FUNC_0 ()->fix_rows = (int)VAR_2->i_value;
 return 1;
}
