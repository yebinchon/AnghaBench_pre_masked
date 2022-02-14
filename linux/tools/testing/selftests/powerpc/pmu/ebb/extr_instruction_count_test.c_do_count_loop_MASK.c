
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int value; } ;
struct event {TYPE_2__ result; } ;
typedef int int64_t ;
struct TYPE_4__ {int* pmc_count; int ebb_count; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char*,int,...) ;
 int VAR_4 ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct event *VAR_5, uint64_t VAR_6,
    uint64_t VAR_7, bool VAR_8)
{
 int64_t VAR_9, VAR_10;
 double VAR_11;

 FUNC_0();

 VAR_2 = 0;
 FUNC_2();
 FUNC_4(VAR_1, FUNC_3(VAR_1) & ~VAR_0);

 FUNC_6(VAR_6 >> 5);

 VAR_2 = 1;
 FUNC_2();
 FUNC_4(VAR_1, FUNC_3(VAR_1) | VAR_0);

 FUNC_1(4, VAR_4);

 VAR_5->result.value = VAR_3.stats.pmc_count[4-1];
 VAR_10 = VAR_6 + VAR_7;
 VAR_9 = VAR_5->result.value - VAR_10;
 VAR_11 = (double)VAR_9 / VAR_5->result.value * 100;

 if (VAR_8) {
  FUNC_5("Looped for %lu instructions, overhead %lu\n", VAR_6, VAR_7);
  FUNC_5("Expected %lu\n", VAR_10);
  FUNC_5("Actual   %llu\n", VAR_5->result.value);
  FUNC_5("Delta    %ld, %f%%\n", VAR_9, VAR_11);
  FUNC_5("Took %d EBBs\n", VAR_3.stats.ebb_count);
 }

 if (VAR_9 < 0)
  VAR_9 = -VAR_9;


 VAR_9 *= 10000 * 100;
 if (VAR_9 / VAR_5->result.value)
  return -1;

 return 0;
}
