
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; struct TYPE_3__* x; int m; struct TYPE_3__* y; } ;
typedef TYPE_1__ Renode ;
__attribute__((used)) static int FUNC_0(Renode *VAR_0)
{
 if (!VAR_0) return 1;
 switch (VAR_0->type) {
 default: return 1;
 case 134: return FUNC_0(VAR_0->x) && FUNC_0(VAR_0->y);
 case 136: return FUNC_0(VAR_0->x) || FUNC_0(VAR_0->y);
 case 128: return FUNC_0(VAR_0->x) || VAR_0->m == 0;
 case 130: return FUNC_0(VAR_0->x);
 case 129: return FUNC_0(VAR_0->x);
 case 135: case 132: case 133: case 131: return 0;
 }
}
