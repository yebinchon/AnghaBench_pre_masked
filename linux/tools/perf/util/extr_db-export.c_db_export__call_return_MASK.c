
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct db_export {int (* export_call_return ) (struct db_export*,struct call_return*) ;scalar_t__ call_return_last_db_id; } ;
struct call_return {scalar_t__ parent_db_id; scalar_t__ db_id; int cp; } ;


 int FUNC_0 (struct db_export*,int ) ;
 int FUNC_1 (struct db_export*,struct call_return*) ;

int FUNC_2(struct db_export *VAR_0, struct call_return *VAR_1,
      u64 *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1->cp);
 if (VAR_3)
  return VAR_3;

 if (!VAR_1->db_id)
  VAR_1->db_id = ++VAR_0->call_return_last_db_id;

 if (VAR_2) {
  if (!*VAR_2)
   *VAR_2 = ++VAR_0->call_return_last_db_id;
  VAR_1->parent_db_id = *VAR_2;
 }

 if (VAR_0->export_call_return)
  return VAR_0->export_call_return(VAR_0, VAR_1);

 return 0;
}
