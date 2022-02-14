
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int no_overflow; int ebb_count; int spurious; } ;
struct TYPE_4__ {TYPE_1__ stats; scalar_t__* pmc_enable; int trace; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;

void FUNC_6(void)
{
 int VAR_5, VAR_6;
 u64 VAR_7;

 VAR_7 = FUNC_2(VAR_1);
 if (!(VAR_7 & VAR_0)) {
  VAR_3.stats.spurious++;
  goto out;
 }

 VAR_3.stats.ebb_count++;
 FUNC_4(VAR_3.trace, VAR_3.stats.ebb_count);

 VAR_7 = FUNC_2(VAR_2);
 FUNC_5(VAR_3.trace, VAR_2, VAR_7);

 VAR_5 = 0;
 for (VAR_6 = 1; VAR_6 <= 6; VAR_6++) {
  if (VAR_3.pmc_enable[FUNC_0(VAR_6)])
   VAR_5 += FUNC_1(VAR_6, VAR_4);
 }

 if (!VAR_5)
  VAR_3.stats.no_overflow++;

out:
 FUNC_3();
}
