
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sched {int nr_unordered_timestamps; int nr_context_switch_bugs; scalar_t__ nr_lost_events; scalar_t__ nr_timestamps; scalar_t__ nr_events; int nr_lost_chunks; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct perf_sched *VAR_0)
{
 if (VAR_0->nr_unordered_timestamps && VAR_0->nr_timestamps) {
  FUNC_0("  INFO: %.3f%% unordered timestamps (%ld out of %ld)\n",
   (double)VAR_0->nr_unordered_timestamps/(double)VAR_0->nr_timestamps*100.0,
   VAR_0->nr_unordered_timestamps, VAR_0->nr_timestamps);
 }
 if (VAR_0->nr_lost_events && VAR_0->nr_events) {
  FUNC_0("  INFO: %.3f%% lost events (%ld out of %ld, in %ld chunks)\n",
   (double)VAR_0->nr_lost_events/(double)VAR_0->nr_events * 100.0,
   VAR_0->nr_lost_events, VAR_0->nr_events, VAR_0->nr_lost_chunks);
 }
 if (VAR_0->nr_context_switch_bugs && VAR_0->nr_timestamps) {
  FUNC_0("  INFO: %.3f%% context switch bugs (%ld out of %ld)",
   (double)VAR_0->nr_context_switch_bugs/(double)VAR_0->nr_timestamps*100.0,
   VAR_0->nr_context_switch_bugs, VAR_0->nr_timestamps);
  if (VAR_0->nr_lost_events)
   FUNC_0(" (due to lost events?)");
  FUNC_0("\n");
 }
}
