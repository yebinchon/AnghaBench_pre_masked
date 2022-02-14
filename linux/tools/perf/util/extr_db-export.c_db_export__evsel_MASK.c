
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {scalar_t__ db_id; } ;
struct db_export {int (* export_evsel ) (struct db_export*,struct evsel*) ;scalar_t__ evsel_last_db_id; } ;


 int FUNC_0 (struct db_export*,struct evsel*) ;

int FUNC_1(struct db_export *VAR_0, struct evsel *VAR_1)
{
 if (VAR_1->db_id)
  return 0;

 VAR_1->db_id = ++VAR_0->evsel_last_db_id;

 if (VAR_0->export_evsel)
  return VAR_0->export_evsel(VAR_0, VAR_1);

 return 0;
}
