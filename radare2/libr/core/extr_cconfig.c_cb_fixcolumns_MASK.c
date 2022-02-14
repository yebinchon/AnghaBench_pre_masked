
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int fix_columns; } ;
struct TYPE_3__ {int value; } ;
typedef TYPE_1__ RConfigNode ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(void *VAR_0, void *VAR_1) {
 RConfigNode *VAR_2 = (RConfigNode *) VAR_1;
 FUNC_1 ()->fix_columns = FUNC_0 (VAR_2->value);
 return 1;
}
