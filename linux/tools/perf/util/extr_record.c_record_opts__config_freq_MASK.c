
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct record_opts {int user_freq; scalar_t__ user_interval; int default_interval; int freq; scalar_t__ strict_freq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,unsigned int,...) ;

__attribute__((used)) static int FUNC_3(struct record_opts *VAR_2)
{
 bool VAR_3 = VAR_2->user_freq != VAR_0;
 unsigned int VAR_4;

 if (VAR_2->user_interval != VAR_1)
  VAR_2->default_interval = VAR_2->user_interval;
 if (VAR_3)
  VAR_2->freq = VAR_2->user_freq;




 if (VAR_2->default_interval)
  VAR_2->freq = 0;
 else if (VAR_2->freq) {
  VAR_2->default_interval = VAR_2->freq;
 } else {
  FUNC_1("frequency and count are zero, aborting\n");
  return -1;
 }

 if (FUNC_0(&VAR_4))
  return 0;




 if (VAR_3 && (VAR_4 < VAR_2->freq)) {
  if (VAR_2->strict_freq) {
   FUNC_1("error: Maximum frequency rate (%'u Hz) exceeded.\n"
          "       Please use -F freq option with a lower value or consider\n"
          "       tweaking /proc/sys/kernel/perf_event_max_sample_rate.\n",
          VAR_4);
   return -1;
  } else {
   FUNC_2("warning: Maximum frequency rate (%'u Hz) exceeded, throttling from %'u Hz to %'u Hz.\n"
       "         The limit can be raised via /proc/sys/kernel/perf_event_max_sample_rate.\n"
       "         The kernel will lower it when perf's interrupts take too long.\n"
       "         Use --strict-freq to disable this throttling, refusing to record.\n",
       VAR_4, VAR_2->freq, VAR_4);

   VAR_2->freq = VAR_4;
  }
 }




 if (VAR_4 < VAR_2->freq) {
  FUNC_2("Lowering default frequency rate to %u.\n"
      "Please consider tweaking "
      "/proc/sys/kernel/perf_event_max_sample_rate.\n",
      VAR_4);
  VAR_2->freq = VAR_4;
 }

 return 0;
}
