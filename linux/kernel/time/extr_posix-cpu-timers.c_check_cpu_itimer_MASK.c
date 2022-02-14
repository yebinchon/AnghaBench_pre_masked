
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct task_struct {int dummy; } ;
struct cpu_itimer {scalar_t__ expires; scalar_t__ incr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct task_struct *VAR_4, struct cpu_itimer *VAR_5,
        u64 *VAR_6, u64 VAR_7, int VAR_8)
{
 if (!VAR_5->expires)
  return;

 if (VAR_7 >= VAR_5->expires) {
  if (VAR_5->incr)
   VAR_5->expires += VAR_5->incr;
  else
   VAR_5->expires = 0;

  FUNC_2(VAR_8 == VAR_3 ?
        VAR_0 : VAR_1,
        FUNC_1(VAR_4), VAR_7);
  FUNC_0(VAR_8, VAR_2, VAR_4);
 }

 if (VAR_5->expires && VAR_5->expires < *VAR_6)
  *VAR_6 = VAR_5->expires;
}
