
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef double float8 ;
struct TYPE_3__ {int key; } ;
typedef int StrategyNumber ;
typedef TYPE_1__ GISTENTRY ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

 double FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static float8
FUNC_4(GISTENTRY *VAR_2, Datum VAR_3, StrategyNumber VAR_4)
{
 float8 VAR_5;
 StrategyNumber VAR_6 = VAR_4 / VAR_1;

 switch (VAR_6)
 {
  case 128:
   VAR_5 = FUNC_2(0,
            FUNC_0(VAR_2->key),
            FUNC_1(VAR_3));
   break;
  default:
   FUNC_3(VAR_0, "unrecognized strategy number: %d", VAR_4);
   VAR_5 = 0.0;
 }

 return VAR_5;
}
