
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct stats_record* cpu; } ;
struct stats_record {TYPE_1__ stats; struct stats_record* rxq; struct stats_record* cpu; } ;
struct TYPE_4__ {unsigned int max_entries; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (struct stats_record*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct stats_record *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_0)->max_entries;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_1(VAR_1->rxq[VAR_3].cpu);

 FUNC_1(VAR_1->rxq);
 FUNC_1(VAR_1->stats.cpu);
 FUNC_1(VAR_1);
}
