
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p; } ;
typedef TYPE_1__ LSEG ;
typedef int BOX ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static bool
FUNC_1(BOX *VAR_0, LSEG *VAR_1)
{
 return FUNC_0(VAR_0, &VAR_1->p[0]) &&
  FUNC_0(VAR_0, &VAR_1->p[1]);
}
