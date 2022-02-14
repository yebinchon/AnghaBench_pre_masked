
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db_export {int (* export_call_path ) (struct db_export*,struct call_path*) ;scalar_t__ call_path_last_db_id; } ;
struct call_path {scalar_t__ db_id; struct call_path* parent; } ;


 int FUNC_0 (struct db_export*,struct call_path*) ;

int FUNC_1(struct db_export *VAR_0, struct call_path *VAR_1)
{
 int VAR_2;

 if (VAR_1->db_id)
  return 0;

 if (VAR_1->parent) {
  VAR_2 = FUNC_1(VAR_0, VAR_1->parent);
  if (VAR_2)
   return VAR_2;
 }

 VAR_1->db_id = ++VAR_0->call_path_last_db_id;

 if (VAR_0->export_call_path)
  return VAR_0->export_call_path(VAR_0, VAR_1);

 return 0;
}
