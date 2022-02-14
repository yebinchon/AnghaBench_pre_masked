
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
struct TYPE_5__ {TYPE_2__* pCsrList; scalar_t__ iNextCsrid; } ;
typedef TYPE_1__ ZipfileTab ;
struct TYPE_6__ {struct TYPE_6__* pCsrNext; scalar_t__ iId; } ;
typedef TYPE_2__ ZipfileCsr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 TYPE_2__* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab *VAR_2, sqlite3_vtab_cursor **VAR_3){
  ZipfileTab *VAR_4 = (ZipfileTab*)VAR_2;
  ZipfileCsr *VAR_5;
  VAR_5 = FUNC_1(sizeof(*VAR_5));
  *VAR_3 = (sqlite3_vtab_cursor*)VAR_5;
  if( VAR_5==0 ){
    return VAR_0;
  }
  FUNC_0(VAR_5, 0, sizeof(*VAR_5));
  VAR_5->iId = ++VAR_4->iNextCsrid;
  VAR_5->pCsrNext = VAR_4->pCsrList;
  VAR_4->pCsrList = VAR_5;
  return VAR_1;
}
