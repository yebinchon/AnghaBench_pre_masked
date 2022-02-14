
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ u64 ;
struct TYPE_3__ {int * pmc_count; int negative; } ;
struct TYPE_4__ {int trace; TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

int FUNC_5(int VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5;
 u64 VAR_6;


 VAR_5 = FUNC_1(VAR_4);

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 < VAR_5)
  VAR_2.stats.negative++;
 else
  VAR_2.stats.pmc_count[FUNC_0(VAR_3)] += VAR_6 - VAR_5;

 FUNC_3(VAR_2.trace, VAR_1 + VAR_3 - 1, VAR_6);


 FUNC_4(VAR_3, VAR_5);


 return VAR_6 >= VAR_0;
}
