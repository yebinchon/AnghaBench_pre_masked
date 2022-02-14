
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pktgen_dev {int curfl; int flags; scalar_t__ lflow; int cflows; TYPE_1__* flows; } ;
struct TYPE_2__ {scalar_t__ count; scalar_t__ flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static inline int FUNC_1(struct pktgen_dev *VAR_1)
{
 int VAR_2 = VAR_1->curfl;

 if (VAR_1->flags & VAR_0) {
  if (VAR_1->flows[VAR_2].count >= VAR_1->lflow) {

   VAR_1->flows[VAR_2].count = 0;
   VAR_1->flows[VAR_2].flags = 0;
   VAR_1->curfl += 1;
   if (VAR_1->curfl >= VAR_1->cflows)
    VAR_1->curfl = 0;
  }
 } else {
  VAR_2 = FUNC_0() % VAR_1->cflows;
  VAR_1->curfl = VAR_2;

  if (VAR_1->flows[VAR_2].count > VAR_1->lflow) {
   VAR_1->flows[VAR_2].count = 0;
   VAR_1->flows[VAR_2].flags = 0;
  }
 }

 return VAR_1->curfl;
}
