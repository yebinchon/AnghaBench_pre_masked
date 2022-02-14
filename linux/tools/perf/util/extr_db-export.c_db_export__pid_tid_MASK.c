
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct thread {int db_id; int tid; int pid_; int comm_set; } ;
struct machine {int dummy; } ;
struct db_export {int dummy; } ;
struct comm {int dummy; } ;
typedef int pid_t ;


 int FUNC_0 (struct db_export*,struct thread*,struct thread*,struct machine*,struct comm**) ;
 struct thread* FUNC_1 (struct machine*,int ,int ) ;
 struct thread* FUNC_2 (struct machine*,struct thread*) ;
 int FUNC_3 (struct thread*) ;

__attribute__((used)) static int FUNC_4(struct db_export *VAR_0, struct machine *VAR_1,
         pid_t VAR_2, pid_t VAR_3, u64 *VAR_4,
         struct comm **VAR_5, bool *VAR_6)
{
 struct thread *VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3);
 struct thread *VAR_8;
 int VAR_9 = 0;

 if (!VAR_7 || !VAR_7->comm_set)
  goto out_put;

 *VAR_6 = !VAR_7->pid_ && !VAR_7->tid;

 VAR_8 = FUNC_2(VAR_1, VAR_7);

 VAR_9 = FUNC_0(VAR_0, VAR_7, VAR_8, VAR_1, VAR_5);

 *VAR_4 = VAR_7->db_id;

 FUNC_3(VAR_8);
out_put:
 FUNC_3(VAR_7);

 return VAR_9;
}
