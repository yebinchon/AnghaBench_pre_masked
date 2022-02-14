
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cstate {int dummy; } ;
struct TYPE_3__ {int type; int m; int n; struct TYPE_3__* x; struct TYPE_3__* y; } ;
typedef TYPE_1__ Renode ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (struct cstate*,char*) ;

__attribute__((used)) static int FUNC_1(struct cstate *VAR_2, Renode *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 if (!VAR_3) return 0;
 switch (VAR_3->type) {
 default: return 1;
 case 132: return FUNC_1(VAR_2, VAR_3->x) + FUNC_1(VAR_2, VAR_3->y);
 case 133: return FUNC_1(VAR_2, VAR_3->x) + FUNC_1(VAR_2, VAR_3->y) + 2;
 case 128:
  VAR_4 = VAR_3->m;
  VAR_5 = VAR_3->n;
  if (VAR_4 == VAR_5) VAR_6 = FUNC_1(VAR_2, VAR_3->x) * VAR_4;
  else if (VAR_5 < VAR_1) VAR_6 = FUNC_1(VAR_2, VAR_3->x) * VAR_5 + (VAR_5 - VAR_4);
  else VAR_6 = FUNC_1(VAR_2, VAR_3->x) * (VAR_4 + 1) + 2;
  if (VAR_6 < 0 || VAR_6 > VAR_0) FUNC_0(VAR_2, "program too large");
  return VAR_6;
 case 130: return FUNC_1(VAR_2, VAR_3->x) + 2;
 case 129: return FUNC_1(VAR_2, VAR_3->x) + 2;
 case 131: return FUNC_1(VAR_2, VAR_3->x) + 2;
 }
}
