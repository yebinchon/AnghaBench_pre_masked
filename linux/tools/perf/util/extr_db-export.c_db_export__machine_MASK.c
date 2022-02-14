
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {scalar_t__ db_id; } ;
struct db_export {int (* export_machine ) (struct db_export*,struct machine*) ;scalar_t__ machine_last_db_id; } ;


 int FUNC_0 (struct db_export*,struct machine*) ;

int FUNC_1(struct db_export *VAR_0, struct machine *VAR_1)
{
 if (VAR_1->db_id)
  return 0;

 VAR_1->db_id = ++VAR_0->machine_last_db_id;

 if (VAR_0->export_machine)
  return VAR_0->export_machine(VAR_0, VAR_1);

 return 0;
}
