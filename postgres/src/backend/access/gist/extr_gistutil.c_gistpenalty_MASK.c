
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int fn_strict; } ;
struct TYPE_4__ {int * supportCollation; TYPE_3__* penaltyFn; } ;
typedef TYPE_1__ GISTSTATE ;
typedef float GISTENTRY ;


 int FUNC_0 (TYPE_3__*,int ,int ,int ,int ) ;
 int FUNC_1 (float*) ;
 float FUNC_2 () ;
 scalar_t__ FUNC_3 (float) ;

float
FUNC_4(GISTSTATE *VAR_0, int VAR_1,
   GISTENTRY *VAR_2, bool VAR_3,
   GISTENTRY *VAR_4, bool VAR_5)
{
 float VAR_6 = 0.0;

 if (VAR_0->penaltyFn[VAR_1].fn_strict == 0 ||
  (VAR_3 == 0 && VAR_5 == 0))
 {
  FUNC_0(&VAR_0->penaltyFn[VAR_1],
        VAR_0->supportCollation[VAR_1],
        FUNC_1(VAR_2),
        FUNC_1(VAR_4),
        FUNC_1(&VAR_6));

  if (FUNC_3(VAR_6) || VAR_6 < 0.0)
   VAR_6 = 0.0;
 }
 else if (VAR_3 && VAR_5)
  VAR_6 = 0.0;
 else
 {

  VAR_6 = FUNC_2();
 }

 return VAR_6;
}
