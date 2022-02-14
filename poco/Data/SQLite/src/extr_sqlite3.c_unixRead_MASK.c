
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pPreallocatedUnused; int mmapSize; scalar_t__ pMapRegion; } ;
typedef TYPE_1__ unixFile ;
typedef int u8 ;
typedef int sqlite3_int64 ;
typedef int sqlite3_file ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int *,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int,void*,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(
  sqlite3_file *VAR_4,
  void *VAR_5,
  int VAR_6,
  sqlite3_int64 VAR_7
){
  unixFile *VAR_8 = (unixFile *)VAR_4;
  int VAR_9;
  FUNC_0( *VAR_4 );
  FUNC_0( VAR_7>=0 );
  FUNC_0( VAR_6>0 );
  VAR_9 = FUNC_3(VAR_8, VAR_7, VAR_5, VAR_6);
  if( VAR_9==VAR_6 ){
    return VAR_3;
  }else if( VAR_9<0 ){

    return VAR_1;
  }else{
    FUNC_4(VAR_8, 0);

    FUNC_2(&((char*)VAR_5)[VAR_9], 0, VAR_6-VAR_9);
    return VAR_2;
  }
}
