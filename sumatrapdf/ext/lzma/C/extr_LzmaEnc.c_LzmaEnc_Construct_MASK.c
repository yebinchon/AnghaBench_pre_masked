
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * MatchFinder; } ;
struct TYPE_6__ {scalar_t__ litProbs; } ;
struct TYPE_7__ {TYPE_1__ saveState; scalar_t__ litProbs; int ProbPrices; int g_FastPos; int matchFinderBase; TYPE_3__ matchFinderMt; int rc; } ;
typedef int CLzmaEncProps ;
typedef TYPE_2__ CLzmaEnc ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(CLzmaEnc *VAR_0)
{
  FUNC_6(&VAR_0->rc);
  FUNC_5(&VAR_0->matchFinderBase);

  FUNC_4(&VAR_0->matchFinderMt);
  VAR_0->matchFinderMt.MatchFinder = &VAR_0->matchFinderBase;


  {
    CLzmaEncProps VAR_1;
    FUNC_0(&VAR_1);
    FUNC_3(VAR_0, &VAR_1);
  }


  FUNC_1(VAR_0->g_FastPos);


  FUNC_2(VAR_0->ProbPrices);
  VAR_0->litProbs = 0;
  VAR_0->saveState.litProbs = 0;
}
