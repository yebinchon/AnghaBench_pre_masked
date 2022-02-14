
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h; scalar_t__ lastErrno; } ;
typedef TYPE_1__ unixFile ;
typedef int sqlite3_int64 ;
typedef int i64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,void*,int,int) ;
 int FUNC_5 (int ,void*,int,int) ;
 int FUNC_6 (int ,void*,int) ;

__attribute__((used)) static int FUNC_7(unixFile *VAR_6, sqlite3_int64 VAR_7, void *VAR_8, int VAR_9){
  int VAR_10;
  int VAR_11 = 0;

  i64 VAR_12;

  VAR_4;
  FUNC_2( VAR_9==(VAR_9&0x1ffff) );
  VAR_9 &= 0x1ffff;
  do{







    VAR_12 = FUNC_3(VAR_6->h, VAR_7, VAR_1);
    FUNC_1( VAR_12-- );
    if( VAR_12!=VAR_7 ){
      if( VAR_12 == -1 ){
        ((unixFile*)VAR_6)->lastErrno = VAR_5;
      }else{
        ((unixFile*)VAR_6)->lastErrno = 0;
      }
      return -1;
    }
    VAR_10 = FUNC_6(VAR_6->h, VAR_8, VAR_9);

    if( VAR_10==VAR_9 ) break;
    if( VAR_10<0 ){
      if( VAR_5==VAR_0 ){ VAR_10 = 1; continue; }
      VAR_11 = 0;
      ((unixFile*)VAR_6)->lastErrno = VAR_5;
      break;
    }else if( VAR_10>0 ){
      VAR_9 -= VAR_10;
      VAR_7 += VAR_10;
      VAR_11 += VAR_10;
      VAR_8 = (void*)(VAR_10 + (char*)VAR_8);
    }
  }while( VAR_10>0 );
  VAR_3;
  FUNC_0(("READ    %-3d %5d %7lld %llu\n",
            VAR_6->h, VAR_10+VAR_11, VAR_7-VAR_11, VAR_2));
  return VAR_10+VAR_11;
}
