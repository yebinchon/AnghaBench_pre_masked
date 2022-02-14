
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_vtab ;
struct TYPE_6__ {int nVal; int pDb; } ;
typedef TYPE_1__ lsm1_vtab ;
struct TYPE_7__ {int pLsmCur; int base; int * aiLen; int * aeType; int * aiOfst; } ;
typedef TYPE_2__ lsm1_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(sqlite3_vtab *VAR_4, sqlite3_vtab_cursor **VAR_5){
  lsm1_vtab *VAR_6 = (lsm1_vtab*)VAR_4;
  lsm1_cursor *VAR_7;
  int VAR_8;
  VAR_7 = FUNC_3( sizeof(*VAR_7)
                 + VAR_6->nVal*(sizeof(VAR_7->aiOfst)+sizeof(VAR_7->aiLen)+1) );
  if( VAR_7==0 ) return VAR_2;
  FUNC_1(VAR_7, 0, sizeof(*VAR_7));
  VAR_7->aiOfst = (u32*)&VAR_7[1];
  VAR_7->aiLen = &VAR_7->aiOfst[VAR_6->nVal];
  VAR_7->aeType = (u8*)&VAR_7->aiLen[VAR_6->nVal];
  *VAR_5 = &VAR_7->base;
  VAR_8 = FUNC_0(VAR_6->pDb, &VAR_7->pLsmCur);
  if( VAR_8==VAR_0 ){
    VAR_8 = VAR_3;
  }else{
    FUNC_2(VAR_7);
    *VAR_5 = 0;
    VAR_8 = VAR_1;
  }
  return VAR_8;
}
