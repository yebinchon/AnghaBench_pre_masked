
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lag; int latency; int skipped; int cnt; } ;
typedef TYPE_1__ StatsData ;


 int FUNC_0 (int *,double) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(StatsData *VAR_1, bool VAR_2, double VAR_3, double VAR_4)
{
 VAR_1->cnt++;

 if (VAR_2)
 {

  VAR_1->skipped++;
 }
 else
 {
  FUNC_0(&VAR_1->latency, VAR_3);


  if (VAR_0)
   FUNC_0(&VAR_1->lag, VAR_4);
 }
}
