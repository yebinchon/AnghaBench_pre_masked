
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int numAggs; scalar_t__ transitionSpace; } ;
struct TYPE_7__ {TYPE_1__* pathtarget; } ;
struct TYPE_6__ {int width; } ;
typedef double Size ;
typedef TYPE_2__ Path ;
typedef TYPE_3__ AggClauseCosts ;


 double FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

double
FUNC_2(Path *VAR_1, const AggClauseCosts *VAR_2,
         double VAR_3)
{
 Size VAR_4;


 VAR_4 = FUNC_0(VAR_1->pathtarget->width) +
  FUNC_0(VAR_0);


 VAR_4 += VAR_2->transitionSpace;

 VAR_4 += FUNC_1(VAR_2->numAggs);







 return VAR_4 * VAR_3;
}
