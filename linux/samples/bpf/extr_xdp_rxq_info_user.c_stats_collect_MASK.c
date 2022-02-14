
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stats_record {int * rxq; int stats; } ;
struct TYPE_2__ {int max_entries; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct stats_record *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_3 = FUNC_1(VAR_1);
 FUNC_2(VAR_3, 0, &VAR_2->stats);

 VAR_3 = FUNC_1(VAR_0);
 VAR_5 = FUNC_0(VAR_0)->max_entries;
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  FUNC_2(VAR_3, VAR_4, &VAR_2->rxq[VAR_4]);
}
