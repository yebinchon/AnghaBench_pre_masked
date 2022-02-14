
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_2__ {scalar_t__ nVar; int prepFlags; scalar_t__ expmask; int expired; } ;
typedef TYPE_1__ Vdbe ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(sqlite3_stmt *VAR_2, sqlite3_stmt *VAR_3){
  Vdbe *VAR_4 = (Vdbe*)VAR_2;
  Vdbe *VAR_5 = (Vdbe*)VAR_3;
  if( VAR_4->nVar!=VAR_5->nVar ){
    return VAR_0;
  }
  FUNC_0( (VAR_5->prepFlags & VAR_1)!=0 || VAR_5->expmask==0 );
  if( VAR_5->expmask ){
    VAR_5->expired = 1;
  }
  FUNC_0( (VAR_4->prepFlags & VAR_1)!=0 || VAR_4->expmask==0 );
  if( VAR_4->expmask ){
    VAR_4->expired = 1;
  }
  return FUNC_1(VAR_2, VAR_3);
}
