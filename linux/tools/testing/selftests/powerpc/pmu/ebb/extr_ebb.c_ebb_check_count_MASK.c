
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int* pmc_count; int ebb_count; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 size_t FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (char*,int,int,int,int,...) ;

bool FUNC_2(int VAR_1, u64 VAR_2, int VAR_3)
{
 u64 VAR_4, VAR_5, VAR_6;

 VAR_4 = VAR_0.stats.pmc_count[FUNC_0(VAR_1)];

 VAR_6 = VAR_0.stats.ebb_count * (VAR_2 - VAR_3);

 if (VAR_4 < VAR_6) {
  FUNC_1("PMC%d count (0x%llx) below lower limit 0x%llx (-0x%llx)\n",
   VAR_1, VAR_4, VAR_6, VAR_6 - VAR_4);
  return 0;
 }

 VAR_5 = VAR_0.stats.ebb_count * (VAR_2 + VAR_3);

 if (VAR_4 > VAR_5) {
  FUNC_1("PMC%d count (0x%llx) above upper limit 0x%llx (+0x%llx)\n",
   VAR_1, VAR_4, VAR_5, VAR_4 - VAR_5);
  return 0;
 }

 FUNC_1("PMC%d count (0x%llx) is between 0x%llx and 0x%llx delta +0x%llx/-0x%llx\n",
  VAR_1, VAR_4, VAR_6, VAR_5, VAR_4 - VAR_6, VAR_5 - VAR_4);

 return 1;
}
