
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct dso {scalar_t__ db_id; } ;
struct db_export {int dummy; } ;
struct addr_location {TYPE_2__* sym; scalar_t__ addr; int machine; TYPE_1__* map; } ;
struct TYPE_7__ {scalar_t__ start; } ;
struct TYPE_6__ {struct dso* dso; } ;


 int FUNC_0 (struct db_export*,struct dso*,int ) ;
 int FUNC_1 (struct db_export*,TYPE_2__*,struct dso*) ;
 int FUNC_2 (struct dso*,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (scalar_t__,int ,int ,int ,char*) ;
 scalar_t__* FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct db_export *VAR_0, struct addr_location *VAR_1,
     u64 *VAR_2, u64 *VAR_3, u64 *VAR_4)
{
 int VAR_5;

 if (VAR_1->map) {
  struct dso *VAR_6 = VAR_1->map->dso;

  VAR_5 = FUNC_0(VAR_0, VAR_6, VAR_1->machine);
  if (VAR_5)
   return VAR_5;
  *VAR_2 = VAR_6->db_id;

  if (!VAR_1->sym) {
   VAR_1->sym = FUNC_3(VAR_1->addr, 0, 0, 0, "unknown");
   if (VAR_1->sym)
    FUNC_2(VAR_6, VAR_1->sym);
  }

  if (VAR_1->sym) {
   u64 *VAR_7 = FUNC_4(VAR_1->sym);

   VAR_5 = FUNC_1(VAR_0, VAR_1->sym, VAR_6);
   if (VAR_5)
    return VAR_5;
   *VAR_3 = *VAR_7;
   *VAR_4 = VAR_1->addr - VAR_1->sym->start;
  }
 }

 return 0;
}
