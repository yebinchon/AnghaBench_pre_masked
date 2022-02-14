
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct loopinfo {int type; int acc; int ensure_level; struct loopinfo* prev; scalar_t__ pc3; scalar_t__ pc2; scalar_t__ pc1; scalar_t__ pc0; } ;
typedef enum looptype { ____Placeholder_looptype } looptype ;
struct TYPE_4__ {struct loopinfo* loop; int ensure_level; } ;
typedef TYPE_1__ codegen_scope ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 () ;

__attribute__((used)) static struct loopinfo*
FUNC_2(codegen_scope *VAR_0, enum looptype VAR_1)
{
  struct loopinfo *VAR_2 = (struct loopinfo *)FUNC_0(VAR_0, sizeof(struct loopinfo));

  VAR_2->type = VAR_1;
  VAR_2->pc0 = VAR_2->pc1 = VAR_2->pc2 = VAR_2->pc3 = 0;
  VAR_2->prev = VAR_0->loop;
  VAR_2->ensure_level = VAR_0->ensure_level;
  VAR_2->acc = FUNC_1();
  VAR_0->loop = VAR_2;

  return VAR_2;
}
