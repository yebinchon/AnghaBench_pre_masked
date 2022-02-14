
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ N; scalar_t__ t; int n; int m; int randstate; } ;
typedef TYPE_1__* BlockSampler ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 double FUNC_2 (int ) ;

BlockNumber
FUNC_3(BlockSampler VAR_0)
{
 BlockNumber VAR_1 = VAR_0->N - VAR_0->t;
 int VAR_2 = VAR_0->n - VAR_0->m;
 double VAR_3;
 double VAR_4;

 FUNC_0(FUNC_1(VAR_0));

 if ((BlockNumber) VAR_2 >= VAR_1)
 {

  VAR_0->m++;
  return VAR_0->t++;
 }
 VAR_4 = FUNC_2(VAR_0->randstate);
 VAR_3 = 1.0 - (double) VAR_2 / (double) VAR_1;
 while (VAR_4 < VAR_3)
 {

  VAR_0->t++;
  VAR_1--;


  VAR_3 *= 1.0 - (double) VAR_2 / (double) VAR_1;
 }


 VAR_0->m++;
 return VAR_0->t++;
}
