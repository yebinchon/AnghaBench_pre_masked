
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct thread {scalar_t__ db_id; } ;
struct machine {int dummy; } ;
struct db_export {int (* export_thread ) (struct db_export*,struct thread*,scalar_t__,struct machine*) ;scalar_t__ thread_last_db_id; } ;


 int FUNC_0 (struct db_export*,struct thread*,scalar_t__,struct machine*) ;

int FUNC_1(struct db_export *VAR_0, struct thread *VAR_1,
        struct machine *VAR_2, struct thread *VAR_3)
{
 u64 VAR_4 = 0;

 if (VAR_1->db_id)
  return 0;

 VAR_1->db_id = ++VAR_0->thread_last_db_id;

 if (VAR_3)
  VAR_4 = VAR_3->db_id;

 if (VAR_0->export_thread)
  return VAR_0->export_thread(VAR_0, VAR_1, VAR_4,
       VAR_2);

 return 0;
}
