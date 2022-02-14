
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nDb; TYPE_1__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
typedef int Token ;
struct TYPE_10__ {char const* zType; int bVarOnly; int const* pName; int pSchema; int zDb; TYPE_3__* pParse; } ;
struct TYPE_9__ {TYPE_2__* db; } ;
struct TYPE_7__ {int pSchema; int zDbSName; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ DbFixer ;


 int FUNC_0 (int) ;

void FUNC_1(
  DbFixer *VAR_0,
  Parse *VAR_1,
  int VAR_2,
  const char *VAR_3,
  const Token *VAR_4
){
  sqlite3 *VAR_5;

  VAR_5 = VAR_1->db;
  FUNC_0( VAR_5->nDb>VAR_2 );
  VAR_0->pParse = VAR_1;
  VAR_0->zDb = VAR_5->aDb[VAR_2].zDbSName;
  VAR_0->pSchema = VAR_5->aDb[VAR_2].pSchema;
  VAR_0->zType = VAR_3;
  VAR_0->pName = VAR_4;
  VAR_0->bVarOnly = (VAR_2==1);
}
