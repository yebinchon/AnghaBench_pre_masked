
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfkill {int state; int uevent_work; int registered; int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rfkill*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct rfkill*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

bool FUNC_7(struct rfkill *VAR_2, bool VAR_3)
{
 unsigned long VAR_4;
 bool VAR_5, VAR_6;

 FUNC_0(!VAR_2);

 FUNC_5(&VAR_2->lock, VAR_4);
 VAR_5 = !!(VAR_2->state & VAR_1);
 FUNC_1(VAR_2, VAR_3);
 VAR_6 = !!(VAR_2->state & VAR_0);
 VAR_3 = VAR_3 || VAR_6;
 FUNC_6(&VAR_2->lock, VAR_4);

 if (!VAR_2->registered)
  return VAR_3;

 if (VAR_5 != VAR_3 && !VAR_6)
  FUNC_4(&VAR_2->uevent_work);

 FUNC_3(VAR_2);
 FUNC_2();

 return VAR_3;
}
