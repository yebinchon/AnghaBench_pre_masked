
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int zErr; int rc; } ;
struct TYPE_5__ {int db; } ;
typedef TYPE_1__ Sqlite ;
typedef TYPE_2__ Error ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,int ,int ) ;

__attribute__((used)) static void FUNC_4(
  Error *VAR_0,
  Sqlite *VAR_1,
  const char *VAR_2
){
  VAR_0->rc = FUNC_0(VAR_1->db);
  VAR_0->zErr = FUNC_3(
      "sqlite3_%s() - %s (%d)", VAR_2, FUNC_1(VAR_1->db),
      FUNC_2(VAR_1->db)
  );
}
