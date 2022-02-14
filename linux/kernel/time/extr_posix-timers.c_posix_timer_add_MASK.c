
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct signal_struct {int posix_timer_id; } ;
struct k_itimer {int t_hash; } ;
struct hlist_head {int dummy; } ;
struct TYPE_2__ {struct signal_struct* signal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hlist_head*,struct signal_struct*,int) ;
 TYPE_1__* VAR_2 ;
 size_t FUNC_1 (struct signal_struct*,int) ;
 int VAR_3 ;
 int FUNC_2 (int *,struct hlist_head*) ;
 struct hlist_head* VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct k_itimer *VAR_5)
{
 struct signal_struct *VAR_6 = VAR_2->signal;
 int VAR_7 = VAR_6->posix_timer_id;
 struct hlist_head *VAR_8;
 int VAR_9 = -VAR_1;

 do {
  FUNC_3(&VAR_3);
  VAR_8 = &VAR_4[FUNC_1(VAR_6, VAR_6->posix_timer_id)];
  if (!FUNC_0(VAR_8, VAR_6, VAR_6->posix_timer_id)) {
   FUNC_2(&VAR_5->t_hash, VAR_8);
   VAR_9 = VAR_6->posix_timer_id;
  }
  if (++VAR_6->posix_timer_id < 0)
   VAR_6->posix_timer_id = 0;
  if ((VAR_6->posix_timer_id == VAR_7) && (VAR_9 == -VAR_1))

   VAR_9 = -VAR_0;
  FUNC_4(&VAR_3);
 } while (VAR_9 == -VAR_1);
 return VAR_9;
}
