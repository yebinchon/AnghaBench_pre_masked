
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; } ;
struct pglist_data {int dummy; } ;


 unsigned long FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* VAR_2 ;
 unsigned long FUNC_1 () ;
 unsigned long FUNC_2 (struct pglist_data*) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;

__attribute__((used)) static unsigned long FUNC_4(struct pglist_data *VAR_5)
{
 unsigned long VAR_6 = FUNC_2(VAR_5);
 struct task_struct *VAR_7 = VAR_2;
 unsigned long VAR_8;

 if (VAR_3)
  VAR_8 = FUNC_0(VAR_3, VAR_0) *
   VAR_6 / FUNC_1();
 else
  VAR_8 = VAR_4 * VAR_6 / 100;

 if (VAR_7->flags & VAR_1 || FUNC_3(VAR_7))
  VAR_8 += VAR_8 / 4;

 return VAR_8;
}
