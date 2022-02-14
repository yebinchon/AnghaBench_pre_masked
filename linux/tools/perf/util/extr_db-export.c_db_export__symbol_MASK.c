
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct symbol {int dummy; } ;
struct dso {int dummy; } ;
struct db_export {int (* export_symbol ) (struct db_export*,struct symbol*,struct dso*) ;scalar_t__ symbol_last_db_id; } ;


 int FUNC_0 (struct db_export*,struct symbol*,struct dso*) ;
 scalar_t__* FUNC_1 (struct symbol*) ;

int FUNC_2(struct db_export *VAR_0, struct symbol *VAR_1,
        struct dso *VAR_2)
{
 u64 *VAR_3 = FUNC_1(VAR_1);

 if (*VAR_3)
  return 0;

 *VAR_3 = ++VAR_0->symbol_last_db_id;

 if (VAR_0->export_symbol)
  return VAR_0->export_symbol(VAR_0, VAR_1, VAR_2);

 return 0;
}
