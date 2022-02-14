
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct db_export {int (* export_comm ) (struct db_export*,struct comm*,struct thread*) ;scalar_t__ comm_last_db_id; } ;
struct comm {scalar_t__ db_id; } ;


 int FUNC_0 (struct db_export*,struct comm*,struct thread*) ;

__attribute__((used)) static int FUNC_1(struct db_export *VAR_0, struct comm *VAR_1,
        struct thread *VAR_2)
{
 VAR_1->db_id = ++VAR_0->comm_last_db_id;

 if (VAR_0->export_comm)
  return VAR_0->export_comm(VAR_0, VAR_1, VAR_2);

 return 0;
}
