
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {int dummy; } ;
struct dso {scalar_t__ db_id; } ;
struct db_export {int (* export_dso ) (struct db_export*,struct dso*,struct machine*) ;scalar_t__ dso_last_db_id; } ;


 int FUNC_0 (struct db_export*,struct dso*,struct machine*) ;

int FUNC_1(struct db_export *VAR_0, struct dso *VAR_1,
     struct machine *VAR_2)
{
 if (VAR_1->db_id)
  return 0;

 VAR_1->db_id = ++VAR_0->dso_last_db_id;

 if (VAR_0->export_dso)
  return VAR_0->export_dso(VAR_0, VAR_1, VAR_2);

 return 0;
}
