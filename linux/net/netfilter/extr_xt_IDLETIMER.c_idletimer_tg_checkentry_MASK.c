
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_tgchk_param {struct idletimer_tg_info* targinfo; } ;
struct idletimer_tg_info {char* label; int timeout; TYPE_1__* timer; } ;
struct TYPE_2__ {int refcnt; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (char*) ;
 int FUNC_1 (struct idletimer_tg_info*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(const struct xt_tgchk_param *VAR_5)
{
 struct idletimer_tg_info *VAR_6 = VAR_5->targinfo;
 int VAR_7;

 FUNC_6("checkentry targinfo%s\n", VAR_6->label);

 if (VAR_6->timeout == 0) {
  FUNC_6("timeout value is zero\n");
  return -VAR_0;
 }
 if (VAR_6->timeout >= VAR_1 / 1000) {
  FUNC_6("timeout value is too big\n");
  return -VAR_0;
 }
 if (VAR_6->label[0] == '\0' ||
     FUNC_7(VAR_6->label,
      VAR_2) == VAR_2) {
  FUNC_6("label is empty or not nul-terminated\n");
  return -VAR_0;
 }

 FUNC_4(&VAR_4);

 VAR_6->timer = FUNC_0(VAR_6->label);
 if (VAR_6->timer) {
  VAR_6->timer->refcnt++;
  FUNC_2(&VAR_6->timer->timer,
     FUNC_3(VAR_6->timeout * 1000) + VAR_3);

  FUNC_6("increased refcnt of timer %s to %u\n",
    VAR_6->label, VAR_6->timer->refcnt);
 } else {
  VAR_7 = FUNC_1(VAR_6);
  if (VAR_7 < 0) {
   FUNC_6("failed to create timer\n");
   FUNC_5(&VAR_4);
   return VAR_7;
  }
 }

 FUNC_5(&VAR_4);
 return 0;
}
