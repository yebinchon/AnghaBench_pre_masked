
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nCol; int pSelect; } ;
struct TYPE_6__ {int rc; TYPE_1__ objiter; } ;
typedef TYPE_2__ sqlite3rbu ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;

 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int) ;
 unsigned char* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(sqlite3rbu *VAR_7, const char **VAR_8){
  int VAR_9 = VAR_7->objiter.nCol;
  int VAR_10 = 0;

  switch( FUNC_3(VAR_7->objiter.pSelect, VAR_9) ){
    case 129: {
      int VAR_11 = FUNC_1(VAR_7->objiter.pSelect, VAR_9);
      switch( VAR_11 ){
        case 0: VAR_10 = VAR_3; break;
        case 1: VAR_10 = VAR_0; break;
        case 2: VAR_10 = VAR_4; break;
        case 3: VAR_10 = VAR_1; break;
        case 4: VAR_10 = VAR_2; break;
      }
      break;
    }

    case 128: {
      const unsigned char *VAR_12 = FUNC_2(VAR_7->objiter.pSelect, VAR_9);
      if( VAR_12==0 ){
        VAR_7->rc = VAR_6;
      }else{
        *VAR_8 = (const char*)VAR_12;
      }
      VAR_10 = VAR_5;

      break;
    }

    default:
      break;
  }

  if( VAR_10==0 ){
    FUNC_0(VAR_7);
  }
  return VAR_10;
}
