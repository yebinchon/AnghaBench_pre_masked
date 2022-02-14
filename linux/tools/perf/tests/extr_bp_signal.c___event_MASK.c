
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int size; unsigned long bp_addr; int bp_len; int sample_period; int wakeup_events; int disabled; int exclude_kernel; int exclude_hv; scalar_t__ config; int sample_type; int bp_type; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct perf_event_attr*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (struct perf_event_attr*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_7(bool VAR_12, void *VAR_13, int VAR_14)
{
 struct perf_event_attr VAR_15;
 int VAR_16;

 FUNC_3(&VAR_15, 0, sizeof(struct perf_event_attr));
 VAR_15.type = VAR_10;
 VAR_15.size = sizeof(struct perf_event_attr);

 VAR_15.config = 0;
 VAR_15.bp_type = VAR_12 ? VAR_4 : VAR_3;
 VAR_15.bp_addr = (unsigned long) VAR_13;
 VAR_15.bp_len = sizeof(long);

 VAR_15.sample_period = 1;
 VAR_15.sample_type = VAR_9;
 VAR_15.wakeup_events = 1;

 VAR_15.disabled = 1;
 VAR_15.exclude_kernel = 1;
 VAR_15.exclude_hv = 1;

 VAR_16 = FUNC_6(&VAR_15, 0, -1, -1,
     FUNC_4());
 if (VAR_16 < 0) {
  FUNC_5("failed opening event %llx\n", VAR_15.config);
  return VAR_11;
 }

 FUNC_0(VAR_16, VAR_0, VAR_7|VAR_6|VAR_5);
 FUNC_0(VAR_16, VAR_2, VAR_14);
 FUNC_0(VAR_16, VAR_1, FUNC_1());

 FUNC_2(VAR_16, VAR_8, 0);

 return VAR_16;
}
