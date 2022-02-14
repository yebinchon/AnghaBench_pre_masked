
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p; } ;
typedef int Point ;
typedef TYPE_1__ LSEG ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static bool
FUNC_2(LSEG *VAR_0, Point *VAR_1)
{
 return FUNC_0(FUNC_1(VAR_1, &VAR_0->p[0]) +
    FUNC_1(VAR_1, &VAR_0->p[1]),
    FUNC_1(&VAR_0->p[0], &VAR_0->p[1]));
}
