
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zName; int zDb; int db; } ;
typedef TYPE_1__ Fts5Config ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int ,int ,char const*,char const*,char const*) ;

__attribute__((used)) static void FUNC_1(
  Fts5Config *VAR_1,
  int *VAR_2,
  const char *VAR_3,
  const char *VAR_4
){
  if( *VAR_2==VAR_0 ){
    *VAR_2 = FUNC_0(VAR_1->db, 0,
        "ALTER TABLE %Q.'%q_%s' RENAME TO '%q_%s';",
        VAR_1->zDb, VAR_1->zName, VAR_3, VAR_4, VAR_3
    );
  }
}
