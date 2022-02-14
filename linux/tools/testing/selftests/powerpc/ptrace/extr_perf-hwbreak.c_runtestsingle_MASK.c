
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int disabled; int bp_type; int bp_len; int exclude_user; scalar_t__ bp_addr; int type; } ;
typedef int attr ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct perf_event_attr*,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,unsigned long,unsigned long long,unsigned long long,int,int,int) ;
 int FUNC_7 () ;
 size_t FUNC_8 (int,unsigned long long*,int) ;
 int FUNC_9 (struct perf_event_attr*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_10(int VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10,VAR_11;
 struct perf_event_attr VAR_12;
 size_t VAR_13;
 unsigned long long VAR_14, VAR_15;
 int VAR_16;
 int VAR_17[2*VAR_0/sizeof(int)];
 int *VAR_18;
 volatile int *VAR_19;
 int VAR_20;
 int VAR_21 = VAR_3 - (FUNC_7() % 100);
 volatile int *VAR_22;


 VAR_18 = (int *)(((unsigned long)VAR_17 + 0x7ff) &
          0xfffffffffffff800);

 VAR_19 = &VAR_16;
 if (VAR_9)
  VAR_19 = &VAR_18[0];


 FUNC_4(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.disabled = 1;
 VAR_12.type = VAR_6;
 VAR_12.bp_type = VAR_7;
 VAR_12.bp_addr = (__u64)VAR_19;
 VAR_12.bp_len = sizeof(int);
 if (VAR_9)
  VAR_12.bp_len = VAR_0;
 VAR_12.exclude_user = VAR_8;
 VAR_20 = FUNC_9(&VAR_12, 0, -1, -1, 0);
 if (VAR_20 < 0) {
  FUNC_5("sys_perf_event_open");
  FUNC_2(1);
 }


 FUNC_3(VAR_20, VAR_5);


 VAR_22 = &VAR_16;
 for (VAR_10 = 0; VAR_10 < VAR_21; VAR_10++) {
  if (VAR_9)
   VAR_22 = &(VAR_18[VAR_10 % (VAR_0/sizeof(int))]);

  VAR_11 = *VAR_22;
  *VAR_22 = VAR_11;
 }


 FUNC_3(VAR_20, VAR_4);


 VAR_13 = FUNC_8(VAR_20, &VAR_14, sizeof(unsigned long long));
 FUNC_0(VAR_13 == sizeof(unsigned long long));

 VAR_15 = 0;
 if (VAR_7 & VAR_1)
  VAR_15 += VAR_21;
 if (VAR_7 & VAR_2)
  VAR_15 += VAR_21;
 VAR_15 = VAR_15 * (1 - VAR_8);
 FUNC_6("TESTED: addr:0x%lx brks:% 8lld loops:% 8i rw:%i !user:%i array:%i\n",
        (unsigned long int)VAR_19, VAR_14, VAR_21, VAR_7, VAR_8, VAR_9);
 if (VAR_14 != VAR_15) {
  FUNC_6("FAILED: 0x%lx brks:%lld needed:%lli %i %i %i\n\n",
         (unsigned long int)VAR_19, VAR_14, VAR_15, VAR_21, VAR_7, VAR_8);
  return 1;
 }
 FUNC_1(VAR_20);

 return 0;
}
