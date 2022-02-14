
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct task_struct {TYPE_2__* sighand; TYPE_1__* signal; } ;
struct itimerval {void* it_interval; void* it_value; } ;
struct cpu_itimer {scalar_t__ expires; scalar_t__ incr; } ;
struct TYPE_4__ {int siglock; } ;
struct TYPE_3__ {struct cpu_itimer* it; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct task_struct*,unsigned int,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,struct itimerval const* const,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct task_struct *VAR_4, unsigned int VAR_5,
      const struct itimerval *const VAR_6,
      struct itimerval *const VAR_7)
{
 u64 VAR_8, VAR_9, VAR_10, VAR_11;
 struct cpu_itimer *VAR_12 = &VAR_4->signal->it[VAR_5];





 VAR_9 = FUNC_0(FUNC_5(VAR_6->it_value));
 VAR_11 = FUNC_0(FUNC_5(VAR_6->it_interval));

 FUNC_3(&VAR_4->sighand->siglock);

 VAR_8 = VAR_12->expires;
 VAR_10 = VAR_12->incr;
 if (VAR_8 || VAR_9) {
  if (VAR_9 > 0)
   VAR_9 += VAR_3;
  FUNC_2(VAR_4, VAR_5, &VAR_9, &VAR_8);
 }
 VAR_12->expires = VAR_9;
 VAR_12->incr = VAR_11;
 FUNC_6(VAR_5 == VAR_0 ?
      VAR_2 : VAR_1, VAR_6, VAR_9);

 FUNC_4(&VAR_4->sighand->siglock);

 if (VAR_7) {
  VAR_7->it_value = FUNC_1(VAR_8);
  VAR_7->it_interval = FUNC_1(VAR_10);
 }
}
