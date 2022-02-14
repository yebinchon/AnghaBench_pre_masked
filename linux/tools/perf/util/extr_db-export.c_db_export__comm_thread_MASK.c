
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct thread {int dummy; } ;
struct db_export {int (* export_comm_thread ) (struct db_export*,scalar_t__,struct comm*,struct thread*) ;scalar_t__ comm_thread_last_db_id; } ;
struct comm {int dummy; } ;


 int FUNC_0 (struct db_export*,scalar_t__,struct comm*,struct thread*) ;

int FUNC_1(struct db_export *VAR_0, struct comm *VAR_1,
      struct thread *VAR_2)
{
 u64 VAR_3;

 VAR_3 = ++VAR_0->comm_thread_last_db_id;

 if (VAR_0->export_comm_thread)
  return VAR_0->export_comm_thread(VAR_0, VAR_3, VAR_1, VAR_2);

 return 0;
}
