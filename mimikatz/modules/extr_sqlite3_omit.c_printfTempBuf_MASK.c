
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nAlloc; scalar_t__ mxAlloc; int db; } ;
typedef TYPE_1__ sqlite3_str ;
typedef scalar_t__ sqlite3_int64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 char* FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static char *FUNC_2(sqlite3_str *VAR_2, sqlite3_int64 VAR_3){
  char *VAR_4;
  if( VAR_3>VAR_2->nAlloc && VAR_3>VAR_2->mxAlloc ){
    FUNC_0(VAR_2, VAR_1);
    return 0;
  }
  VAR_4 = FUNC_1(VAR_2->db, VAR_3);
  if( VAR_4==0 ){
    FUNC_0(VAR_2, VAR_0);
  }
  return VAR_4;
}
