
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct db_export {int dummy; } ;
struct comm {scalar_t__ db_id; } ;


 int FUNC_0 (struct db_export*,struct comm*,struct thread*) ;
 int FUNC_1 (struct db_export*,struct comm*,struct thread*) ;

int FUNC_2(struct db_export *VAR_0, struct comm *VAR_1,
    struct thread *VAR_2)
{
 int VAR_3;

 if (VAR_1->db_id)
  return 0;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;
 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
