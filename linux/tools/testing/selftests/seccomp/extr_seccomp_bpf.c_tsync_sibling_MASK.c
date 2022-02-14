
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsync_sibling {int mutex; scalar_t__ num_waits; int cond; int started; int prog; scalar_t__ diverge; int system_tid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 long FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void *FUNC_7(void *VAR_7)
{
 long VAR_8 = 0;
 struct tsync_sibling *VAR_9 = VAR_7;

 VAR_9->system_tid = FUNC_6(VAR_6);

 FUNC_2(VAR_9->mutex);
 if (VAR_9->diverge) {

  VAR_8 = FUNC_0(VAR_1, VAR_2,
    VAR_9->prog, 0, 0);
 }
 FUNC_5(VAR_9->started);

 if (VAR_8) {
  FUNC_3(VAR_9->mutex);
  return (void *)VAR_3;
 }
 do {
  FUNC_1(VAR_9->cond, VAR_9->mutex);
  VAR_9->num_waits = VAR_9->num_waits - 1;
 } while (VAR_9->num_waits);
 FUNC_3(VAR_9->mutex);

 VAR_8 = FUNC_0(VAR_0, 0, 0, 0, 0);
 if (!VAR_8)
  return (void *)VAR_4;
 FUNC_4(0, ((void*)0), 0);
 return (void *)VAR_5;
}
