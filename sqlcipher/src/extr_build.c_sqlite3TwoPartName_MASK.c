
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int iDb; scalar_t__ busy; } ;
struct TYPE_13__ {int mDbFlags; TYPE_1__ init; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_14__ {scalar_t__ n; } ;
typedef TYPE_3__ Token ;
struct TYPE_15__ {TYPE_2__* db; } ;
typedef TYPE_4__ Parse ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,char*,...) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;

int FUNC_3(
  Parse *VAR_2,
  Token *VAR_3,
  Token *VAR_4,
  Token **VAR_5
){
  int VAR_6;
  sqlite3 *VAR_7 = VAR_2->db;

  FUNC_0( VAR_4!=0 );
  if( VAR_4->n>0 ){
    if( VAR_7->init.busy ) {
      FUNC_1(VAR_2, "corrupt database");
      return -1;
    }
    *VAR_5 = VAR_4;
    VAR_6 = FUNC_2(VAR_7, VAR_3);
    if( VAR_6<0 ){
      FUNC_1(VAR_2, "unknown database %T", VAR_3);
      return -1;
    }
  }else{
    FUNC_0( VAR_7->init.iDb==0 || VAR_7->init.busy || VAR_1
             || (VAR_7->mDbFlags & VAR_0)!=0);
    VAR_6 = VAR_7->init.iDb;
    *VAR_5 = VAR_3;
  }
  return VAR_6;
}
