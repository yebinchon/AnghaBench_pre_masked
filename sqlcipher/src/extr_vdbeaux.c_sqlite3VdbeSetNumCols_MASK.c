
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
typedef int sqlite3 ;
struct TYPE_3__ {int nResColumn; int * aColName; int * db; } ;
typedef TYPE_1__ Vdbe ;
typedef int Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int) ;

void FUNC_4(Vdbe *VAR_2, int VAR_3){
  int VAR_4;
  sqlite3 *VAR_5 = VAR_2->db;

  if( VAR_2->nResColumn ){
    FUNC_1(VAR_2->aColName, VAR_2->nResColumn*VAR_0);
    FUNC_2(VAR_5, VAR_2->aColName);
  }
  VAR_4 = VAR_3*VAR_0;
  VAR_2->nResColumn = (u16)VAR_3;
  VAR_2->aColName = (Mem*)FUNC_3(VAR_5, sizeof(Mem)*VAR_4 );
  if( VAR_2->aColName==0 ) return;
  FUNC_0(VAR_2->aColName, VAR_4, VAR_5, VAR_1);
}
