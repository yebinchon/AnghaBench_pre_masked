
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* context; } ;
struct TYPE_5__ {int i_value; } ;
struct TYPE_4__ {int lastEnabled; } ;
typedef TYPE_2__ RConfigNode ;


 TYPE_3__* FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(void *VAR_0, void *VAR_1) {
 RConfigNode *VAR_2 = (RConfigNode *) VAR_1;
 FUNC_0 ()->context->lastEnabled = VAR_2->i_value;
 return 1;
}
