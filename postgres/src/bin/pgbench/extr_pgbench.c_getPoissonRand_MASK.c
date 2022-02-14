
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_3__ {int xseed; } ;
typedef TYPE_1__ RandomState ;


 double FUNC_0 (double) ;
 double FUNC_1 (int ) ;

__attribute__((used)) static int64
FUNC_2(RandomState *VAR_0, double VAR_1)
{




 double VAR_2;


 VAR_2 = 1.0 - FUNC_1(VAR_0->xseed);

 return (int64) (-FUNC_0(VAR_2) * VAR_1 + 0.5);
}
