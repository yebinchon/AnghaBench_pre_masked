
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int cmdrepeat; TYPE_2__* cons; } ;
struct TYPE_6__ {TYPE_1__* context; } ;
struct TYPE_5__ {int breaked; } ;
typedef TYPE_3__ RCore ;


 int FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0) {
 RCore *VAR_1 = (RCore*) VAR_0;
 if (VAR_1->cons->context->breaked) {
  VAR_1->cons->context->breaked = 0;
  return 0;
 }
 if (!VAR_1->cmdrepeat) {
  return 0;
 }
 FUNC_0 (VAR_1, 1);
 return 1;
}
