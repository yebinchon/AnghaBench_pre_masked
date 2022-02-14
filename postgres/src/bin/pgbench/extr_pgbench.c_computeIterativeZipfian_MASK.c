
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
 double FUNC_2 (double,double) ;

__attribute__((used)) static int64
FUNC_3(RandomState *VAR_0, int64 VAR_1, double VAR_2)
{
 double VAR_3 = FUNC_2(2.0, VAR_2 - 1.0);
 double VAR_4,
    VAR_5,
    VAR_6,
    VAR_7;


 if (VAR_1 <= 1)
  return 1;

 while (1)
 {

  VAR_6 = FUNC_1(VAR_0->xseed);
  VAR_7 = FUNC_1(VAR_0->xseed);

  VAR_4 = FUNC_0(FUNC_2(VAR_6, -1.0 / (VAR_2 - 1.0)));

  VAR_5 = FUNC_2(1.0 + 1.0 / VAR_4, VAR_2 - 1.0);

  if (VAR_7 * VAR_4 * (VAR_5 - 1.0) / (VAR_3 - 1.0) <= VAR_5 / VAR_3 && VAR_4 <= VAR_1)
   break;
 }
 return (int64) VAR_4;
}
