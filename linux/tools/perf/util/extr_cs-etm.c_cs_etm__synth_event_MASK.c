
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_session {int dummy; } ;
struct perf_event_attr {int dummy; } ;
struct cs_etm_synth {int dummy_tool; struct perf_session* session; } ;


 int VAR_0 ;
 int FUNC_0 (struct cs_etm_synth*,int ,int) ;
 int FUNC_1 (int *,struct perf_event_attr*,int,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct perf_session *VAR_1,
          struct perf_event_attr *VAR_2, u64 VAR_3)
{
 struct cs_etm_synth VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(struct cs_etm_synth));
 VAR_4.session = VAR_1;

 return FUNC_1(&VAR_4.dummy_tool, VAR_2, 1,
        &VAR_3, VAR_0);
}
