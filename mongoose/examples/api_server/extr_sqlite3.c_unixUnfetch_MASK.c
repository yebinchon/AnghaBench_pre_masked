
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nFetchOut; scalar_t__ pMapRegion; } ;
typedef TYPE_1__ unixFile ;
typedef void u8 ;
typedef int sqlite3_file ;
typedef size_t i64 ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(sqlite3_file *VAR_1, i64 VAR_2, void *VAR_3){
  unixFile *VAR_4 = (unixFile *)VAR_1;
  FUNC_0(VAR_2);




  FUNC_1( (VAR_3==0)==(VAR_4->nFetchOut==0) );


  FUNC_1( VAR_3==0 || VAR_3==&((u8 *)VAR_4->pMapRegion)[VAR_2] );

  if( VAR_3 ){
    VAR_4->nFetchOut--;
  }else{
    FUNC_2(VAR_4);
  }

  FUNC_1( VAR_4->nFetchOut>=0 );
  return VAR_0;
}
