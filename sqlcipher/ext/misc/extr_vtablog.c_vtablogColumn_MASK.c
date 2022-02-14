
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zVal ;
struct TYPE_5__ {int iInst; } ;
typedef TYPE_1__ vtablog_vtab ;
struct TYPE_6__ {int iCursor; int iRowid; } ;
typedef TYPE_2__ vtablog_cursor ;
struct TYPE_7__ {scalar_t__ pVtab; } ;
typedef TYPE_3__ sqlite3_vtab_cursor ;
typedef int sqlite3_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int,char*) ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (int,char*,char*,int,int ) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_vtab_cursor *VAR_2,
  sqlite3_context *VAR_3,
  int VAR_4
){
  vtablog_cursor *VAR_5 = (vtablog_cursor*)VAR_2;
  vtablog_vtab *VAR_6 = (vtablog_vtab*)VAR_2->pVtab;
  char VAR_7[50];

  if( VAR_4<26 ){
    FUNC_2(sizeof(VAR_7),VAR_7,"%c%d",
                     "abcdefghijklmnopqrstuvwyz"[VAR_4], VAR_5->iRowid);
  }else{
    FUNC_2(sizeof(VAR_7),VAR_7,"{%d}%d", VAR_4, VAR_5->iRowid);
  }
  FUNC_0("vtablogColumn(tab=%d, cursor=%d, i=%d): [%s]\n",
         VAR_6->iInst, VAR_5->iCursor, VAR_4, VAR_7);
  FUNC_1(VAR_3, VAR_7, -1, VAR_1);
  return VAR_0;
}
