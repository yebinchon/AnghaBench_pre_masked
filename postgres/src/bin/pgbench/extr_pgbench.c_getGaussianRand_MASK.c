
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_3__ {int xseed; } ;
typedef TYPE_1__ RandomState ;


 int FUNC_0 (int) ;
 double VAR_0 ;
 double VAR_1 ;
 double FUNC_1 (double) ;
 double FUNC_2 (int ) ;
 double FUNC_3 (double) ;
 double FUNC_4 (double) ;

__attribute__((used)) static int64
FUNC_5(RandomState *VAR_2, int64 VAR_3, int64 VAR_4,
    double VAR_5)
{
 double VAR_6;
 double VAR_7;


 FUNC_0(VAR_5 >= VAR_0);
 do
 {






  double VAR_8 = 1.0 - FUNC_2(VAR_2->xseed);
  double VAR_9 = 1.0 - FUNC_2(VAR_2->xseed);


  double VAR_10 = FUNC_4(-2.0 * FUNC_1(VAR_8));

  VAR_6 = VAR_10 * FUNC_3(2.0 * VAR_1 * VAR_9);






 }
 while (VAR_6 < -VAR_5 || VAR_6 >= VAR_5);


 VAR_7 = (VAR_6 + VAR_5) / (VAR_5 * 2.0);


 return VAR_3 + (int64) ((VAR_4 - VAR_3 + 1) * VAR_7);
}
