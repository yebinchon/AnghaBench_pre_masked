
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_uint64 ;
struct TYPE_5__ {int colUsed; } ;
typedef TYPE_1__ sqlite3_index_info ;
struct TYPE_6__ {int nCol; int * aCol; } ;
typedef TYPE_2__ echo_vtab ;


 int FUNC_0 () ;
 char* FUNC_1 (char*,...) ;

__attribute__((used)) static char *FUNC_2(echo_vtab *VAR_0, sqlite3_index_info *VAR_1){
  char *VAR_2 = 0;
  if( FUNC_0()<3010000 ){
    VAR_2 = FUNC_1(", *");
  }else{
    int VAR_3;
    for(VAR_3=0; VAR_3<VAR_0->nCol; VAR_3++){
      if( VAR_1->colUsed & ((sqlite3_uint64)1 << (VAR_3>=63 ? 63 : VAR_3)) ){
        VAR_2 = FUNC_1("%z, %s", VAR_2, VAR_0->aCol[VAR_3]);
      }else{
        VAR_2 = FUNC_1("%z, NULL", VAR_2);
      }
      if( !VAR_2 ) break;
    }
  }
  return VAR_2;
}
