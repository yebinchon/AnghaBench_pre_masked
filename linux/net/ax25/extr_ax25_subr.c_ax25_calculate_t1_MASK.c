
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int backoff; int n2count; int t1; int rtt; } ;
typedef TYPE_1__ ax25_cb ;



void FUNC_0(ax25_cb *VAR_0)
{
 int VAR_1, VAR_2 = 2;

 switch (VAR_0->backoff) {
 case 0:
  break;

 case 1:
  VAR_2 += 2 * VAR_0->n2count;
  break;

 case 2:
  for (VAR_1 = 0; VAR_1 < VAR_0->n2count; VAR_1++)
   VAR_2 *= 2;
  if (VAR_2 > 8) VAR_2 = 8;
  break;
 }

 VAR_0->t1 = VAR_2 * VAR_0->rtt;
}
