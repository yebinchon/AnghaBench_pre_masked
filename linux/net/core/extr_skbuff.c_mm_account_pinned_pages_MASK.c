
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_struct {int locked_vm; } ;
struct mmpin {unsigned long num_pg; int user; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int *,unsigned long,unsigned long) ;
 unsigned long FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 struct user_struct* FUNC_3 () ;
 int FUNC_4 (struct user_struct*) ;
 size_t FUNC_5 (int ) ;

int FUNC_6(struct mmpin *VAR_4, size_t VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8, VAR_9;
 struct user_struct *VAR_10;

 if (FUNC_2(VAR_0) || !VAR_5)
  return 0;

 VAR_7 = (VAR_5 >> VAR_2) + 2;
 VAR_6 = FUNC_5(VAR_3) >> VAR_2;
 VAR_10 = VAR_4->user ? : FUNC_3();

 do {
  VAR_9 = FUNC_1(&VAR_10->locked_vm);
  VAR_8 = VAR_9 + VAR_7;
  if (VAR_8 > VAR_6)
   return -VAR_1;
 } while (FUNC_0(&VAR_10->locked_vm, VAR_9, VAR_8) !=
   VAR_9);

 if (!VAR_4->user) {
  VAR_4->user = FUNC_4(VAR_10);
  VAR_4->num_pg = VAR_7;
 } else {
  VAR_4->num_pg += VAR_7;
 }

 return 0;
}
