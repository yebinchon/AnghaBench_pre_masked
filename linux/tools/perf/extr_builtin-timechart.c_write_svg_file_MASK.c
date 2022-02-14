
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct timechart {int proc_num; scalar_t__ numcpus; int tasks_only; int turbo_frequency; int max_freq; int last_time; int first_time; scalar_t__ io_events; scalar_t__ power_only; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timechart*,int) ;
 int FUNC_1 (struct timechart*,int) ;
 int FUNC_2 (struct timechart*) ;
 int FUNC_3 (struct timechart*) ;
 int FUNC_4 (struct timechart*) ;
 int FUNC_5 (struct timechart*) ;
 int FUNC_6 (struct timechart*) ;
 int FUNC_7 (struct timechart*) ;
 int FUNC_8 (char const*,scalar_t__,int,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (double) ;

__attribute__((used)) static void FUNC_14(struct timechart *VAR_3, const char *VAR_4)
{
 u64 VAR_5;
 int VAR_6;
 int VAR_7 = VAR_3->io_events ? VAR_0 : VAR_1;

 if (VAR_3->power_only)
  VAR_3->proc_num = 0;



 do {
  if (VAR_2)
   VAR_6 = FUNC_2(VAR_3);
  else if (VAR_3->io_events)
   VAR_6 = FUNC_0(VAR_3, VAR_7);
  else
   VAR_6 = FUNC_1(VAR_3, VAR_7);
  VAR_7 /= 10;
 } while (!VAR_2 && VAR_7 && VAR_6 < VAR_3->proc_num);

 if (!VAR_3->proc_num)
  VAR_6 = 0;

 if (VAR_3->io_events) {
  FUNC_8(VAR_4, 0, VAR_6, VAR_3->first_time, VAR_3->last_time);

  FUNC_13(0.5);
  FUNC_11();

  FUNC_5(VAR_3);
 } else {
  FUNC_8(VAR_4, VAR_3->numcpus, VAR_6, VAR_3->first_time, VAR_3->last_time);

  FUNC_13(0);

  FUNC_12();

  for (VAR_5 = 0; VAR_5 < VAR_3->numcpus; VAR_5++)
   FUNC_10(VAR_5, VAR_3->max_freq, VAR_3->turbo_frequency);

  FUNC_4(VAR_3);
  if (VAR_3->proc_num)
   FUNC_6(VAR_3);
  if (!VAR_3->tasks_only)
   FUNC_3(VAR_3);
  if (VAR_3->proc_num)
   FUNC_7(VAR_3);
 }

 FUNC_9();
}
