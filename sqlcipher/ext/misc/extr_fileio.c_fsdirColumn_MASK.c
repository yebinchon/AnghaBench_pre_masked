
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;
typedef int mode_t ;
struct TYPE_3__ {int st_mode; int st_mtime; } ;
struct TYPE_4__ {char* zPath; size_t nBase; TYPE_1__ sStat; } ;
typedef TYPE_2__ fsdir_cursor ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,int,int ) ;

__attribute__((used)) static int FUNC_10(
  sqlite3_vtab_cursor *VAR_3,
  sqlite3_context *VAR_4,
  int VAR_5
){
  fsdir_cursor *VAR_6 = (fsdir_cursor*)VAR_3;
  switch( VAR_5 ){
    case 129: {
      FUNC_9(VAR_4, &VAR_6->zPath[VAR_6->nBase], -1, VAR_2);
      break;
    }

    case 131:
      FUNC_7(VAR_4, VAR_6->sStat.st_mode);
      break;

    case 130:
      FUNC_7(VAR_4, VAR_6->sStat.st_mtime);
      break;

    case 132: {
      mode_t VAR_7 = VAR_6->sStat.st_mode;
      if( FUNC_0(VAR_7) ){
        FUNC_8(VAR_4);

      }else if( FUNC_1(VAR_7) ){
        char VAR_8[64];
        char *VAR_9 = VAR_8;
        sqlite3_int64 VAR_10 = 64;
        int VAR_11;

        while( 1 ){
          VAR_11 = FUNC_3(VAR_6->zPath, VAR_9, VAR_10);
          if( VAR_11<VAR_10 ) break;
          if( VAR_9!=VAR_8 ) FUNC_4(VAR_9);
          VAR_10 = VAR_10*2;
          VAR_9 = FUNC_5(VAR_10);
          if( VAR_9==0 ){
            FUNC_6(VAR_4);
            return VAR_0;
          }
        }

        FUNC_9(VAR_4, VAR_9, VAR_11, VAR_2);
        if( VAR_9!=VAR_8 ) FUNC_4(VAR_9);

      }else{
        FUNC_2(VAR_4, VAR_6->zPath);
      }
    }
    case 128:
    default: {


      break;
    }
  }
  return VAR_1;
}
