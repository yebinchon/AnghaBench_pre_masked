
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* pMethods; } ;
typedef TYPE_2__ sqlite3_file ;
struct TYPE_12__ {unsigned char bEnabled; unsigned int szChunk; int bTruncate; } ;
typedef TYPE_3__ multiplexGroup ;
struct TYPE_13__ {TYPE_3__* pGroup; } ;
typedef TYPE_4__ multiplexConn ;
struct TYPE_14__ {int isInitialized; } ;
struct TYPE_10__ {int (* xFileControl ) (TYPE_2__*,int,void*) ;} ;


 int VAR_0 ;



 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_9__ VAR_5 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int*,int *,int ) ;
 char* FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_2__*,int,void*) ;

__attribute__((used)) static int FUNC_4(sqlite3_file *VAR_6, int VAR_7, void *VAR_8){
  multiplexConn *VAR_9 = (multiplexConn*)VAR_6;
  multiplexGroup *VAR_10 = VAR_9->pGroup;
  int VAR_11 = VAR_1;
  sqlite3_file *VAR_12;

  if( !VAR_5.isInitialized ) return VAR_3;
  switch( VAR_7 ){
    case 133:
      if( VAR_8 ) {
        int VAR_13 = *(int *)VAR_8;
        VAR_10->bEnabled = (unsigned char)VAR_13;
        VAR_11 = VAR_4;
      }
      break;
    case 132:
      if( VAR_8 ) {
        unsigned int VAR_14 = *(unsigned*)VAR_8;
        if( VAR_14<1 ){
          VAR_11 = VAR_3;
        }else{

          VAR_14 = (VAR_14 + (VAR_0-1));
          VAR_14 &= ~(VAR_0-1);
          VAR_10->szChunk = VAR_14;
          VAR_11 = VAR_4;
        }
      }
      break;
    case 131:
      VAR_11 = VAR_4;
      break;
    case 128:
    case 130:

      VAR_11 = VAR_4;
      break;
    case 129: {
      char **VAR_15 = (char**)VAR_8;







      if( VAR_15[1] && FUNC_2(VAR_15[1],"multiplex_truncate")==0 ){
        if( VAR_15[2] && VAR_15[2][0] ){
          if( FUNC_2(VAR_15[2], "on")==0
           || FUNC_2(VAR_15[2], "1")==0 ){
            VAR_10->bTruncate = 1;
          }else
          if( FUNC_2(VAR_15[2], "off")==0
           || FUNC_2(VAR_15[2], "0")==0 ){
            VAR_10->bTruncate = 0;
          }
        }






        VAR_15[0] = FUNC_1(VAR_10->bTruncate ? "on" : "off");
        VAR_11 = VAR_4;
        break;
      }


    }
    default:
      VAR_12 = FUNC_0(VAR_10, 0, &VAR_11, ((void*)0), 0);
      if( VAR_12 ){
        VAR_11 = VAR_12->pMethods->xFileControl(VAR_12, VAR_7, VAR_8);
        if( VAR_7==VAR_2 && VAR_11==VAR_4 ){
         *(char**)VAR_8 = FUNC_1("multiplex/%z", *(char**)VAR_8);
        }
      }
      break;
  }
  return VAR_11;
}
