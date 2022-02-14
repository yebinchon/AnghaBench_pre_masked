
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
struct mrb_time {scalar_t__ timezone; struct tm datetime; int sec; } ;
typedef int mrb_state ;
typedef int mrb_sec ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tm* FUNC_0 (int *,struct tm*) ;
 struct tm* FUNC_1 (int *,struct tm*) ;
 int FUNC_2 (int *,struct mrb_time*) ;
 int FUNC_3 (int *,int ,char*,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static struct mrb_time*
FUNC_5(mrb_state *VAR_2, struct mrb_time *VAR_3, int VAR_4)
{
  struct tm *VAR_5;
  time_t VAR_6 = VAR_3->sec;

  if (VAR_3->timezone == VAR_1) {
    VAR_5 = FUNC_0(&VAR_6, &VAR_3->datetime);
  }
  else {
    VAR_5 = FUNC_1(&VAR_6, &VAR_3->datetime);
  }
  if (!VAR_5) {
    mrb_sec VAR_7 = (mrb_sec)VAR_6;

    if (VAR_4) FUNC_2(VAR_2, VAR_3);
    FUNC_3(VAR_2, VAR_0, "%v out of Time range", FUNC_4(VAR_2, VAR_7));

    return ((void*)0);
  }




  return VAR_3;
}
