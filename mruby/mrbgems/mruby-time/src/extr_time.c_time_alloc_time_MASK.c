
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* time_t ;
struct mrb_time {long sec; long usec; int timezone; } ;
typedef int mrb_state ;
typedef enum mrb_timezone { ____Placeholder_mrb_timezone } mrb_timezone ;


 scalar_t__ FUNC_0 (long,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct mrb_time*,int ) ;

__attribute__((used)) static struct mrb_time*
FUNC_3(mrb_state *VAR_1, time_t VAR_2, time_t VAR_3, enum mrb_timezone VAR_4)
{
  struct mrb_time *VAR_5;

  VAR_5 = (struct mrb_time *)FUNC_1(VAR_1, sizeof(struct mrb_time));
  VAR_5->sec = VAR_2;
  VAR_5->usec = VAR_3;
  if (VAR_5->usec < 0) {
    long VAR_6 = (long)FUNC_0(VAR_5->usec,1000000);
    VAR_5->usec -= VAR_6 * 1000000;
    VAR_5->sec += VAR_6;
  }
  else if (VAR_5->usec >= 1000000) {
    long VAR_7 = (long)(VAR_5->usec / 1000000);
    VAR_5->usec -= VAR_7 * 1000000;
    VAR_5->sec += VAR_7;
  }
  VAR_5->timezone = VAR_4;
  FUNC_2(VAR_1, VAR_5, VAR_0);

  return VAR_5;
}
