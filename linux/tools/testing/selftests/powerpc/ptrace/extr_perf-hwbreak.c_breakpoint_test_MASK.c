
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int disabled; int bp_addr; int bp_len; int bp_type; int type; } ;
typedef int attr ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct perf_event_attr*,int ,int) ;
 int FUNC_2 (struct perf_event_attr*,int ,int,int,int ) ;

__attribute__((used)) static inline bool FUNC_3(int VAR_2)
{
 struct perf_event_attr VAR_3;
 int VAR_4;


 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.disabled = 1;
 VAR_3.type = VAR_1;
 VAR_3.bp_type = VAR_0;

 VAR_3.bp_addr = (__u64)(&VAR_3) & 0xfffffffffffff800;
 VAR_3.bp_len = VAR_2;
 VAR_4 = FUNC_2(&VAR_3, 0, -1, -1, 0);
 if (VAR_4 < 0)
  return 0;
 FUNC_0(VAR_4);
 return 1;
}
