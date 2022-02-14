
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_3__ {int xseed; } ;
typedef TYPE_1__ RandomState ;


 int FUNC_0 (int) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (int ) ;

__attribute__((used)) static int64
FUNC_4(RandomState *VAR_0, int64 VAR_1, int64 VAR_2,
       double VAR_3)
{
 double VAR_4,
    VAR_5,
    VAR_6;


 FUNC_0(VAR_3 > 0.0);
 VAR_4 = FUNC_1(-VAR_3);

 VAR_5 = 1.0 - FUNC_3(VAR_0->xseed);




 FUNC_0((1.0 - VAR_4) != 0.0);
 VAR_6 = -FUNC_2(VAR_4 + (1.0 - VAR_4) * VAR_5) / VAR_3;

 return VAR_1 + (int64) ((VAR_2 - VAR_1 + 1) * VAR_6);
}
