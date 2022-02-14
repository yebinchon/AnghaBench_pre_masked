
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* cpu; } ;
struct stats_record {TYPE_1__ stats; TYPE_3__* rxq; } ;
struct TYPE_6__ {void* cpu; } ;
struct TYPE_5__ {unsigned int max_entries; } ;


 int VAR_0 ;
 void* FUNC_0 () ;
 TYPE_3__* FUNC_1 () ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 struct stats_record* FUNC_5 (int) ;
 int FUNC_6 (struct stats_record*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct stats_record *FUNC_7(void)
{
 unsigned int VAR_3 = FUNC_2(VAR_1)->max_entries;
 struct stats_record *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(sizeof(*VAR_4));
 FUNC_6(VAR_4, 0, sizeof(*VAR_4));
 if (!VAR_4) {
  FUNC_4(VAR_2, "Mem alloc error\n");
  FUNC_3(VAR_0);
 }
 VAR_4->rxq = FUNC_1();
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  VAR_4->rxq[VAR_5].cpu = FUNC_0();

 VAR_4->stats.cpu = FUNC_0();
 return VAR_4;
}
