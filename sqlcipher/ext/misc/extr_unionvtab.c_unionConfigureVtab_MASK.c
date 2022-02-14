
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_3__ {int bHasContext; int db; void* pNotFound; void* pOpenClose; int nMaxOpen; } ;
typedef TYPE_1__ UnionTab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,char*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*) ;
 void* FUNC_8 (int*,char**,int ,char*,char*,...) ;
 char* FUNC_9 (int*,char const* const) ;
 scalar_t__ FUNC_10 (char) ;
 scalar_t__ FUNC_11 (char) ;

__attribute__((used)) static void FUNC_12(
  int *VAR_3,
  UnionTab *VAR_4,
  sqlite3_stmt *VAR_5,
  int VAR_6,
  const char * const *VAR_7,
  char **VAR_8
){
  int VAR_9 = *VAR_3;
  int VAR_10;
  if( VAR_9==VAR_1 ){
    VAR_4->bHasContext = (FUNC_3(VAR_5)>4);
  }
  for(VAR_10=0; VAR_9==VAR_1 && VAR_10<VAR_6; VAR_10++){
    char *VAR_11 = FUNC_9(&VAR_9, VAR_7[VAR_10]);
    if( VAR_11 ){
      int VAR_12 = 0;
      char *VAR_13;
      char *VAR_14;

      FUNC_7(VAR_11);
      VAR_13 = VAR_11;
      while( FUNC_11(*VAR_13) ) VAR_13++;
      VAR_14 = VAR_13;
      if( *VAR_14==':' ) VAR_14++;
      while( FUNC_10(*VAR_14) ) VAR_14++;
      VAR_12 = (int)(VAR_14-VAR_13);

      while( FUNC_11(*VAR_14) ) VAR_14++;
      if( *VAR_14=='=' ){
        VAR_13[VAR_12] = '\0';
        VAR_14++;
        while( FUNC_11(*VAR_14) ) VAR_14++;
        VAR_14 = FUNC_9(&VAR_9, VAR_14);
        if( VAR_14 ){
          FUNC_7(VAR_14);
          if( VAR_13[0]==':' ){

            int VAR_15 = FUNC_1(VAR_5, VAR_13);
            if( VAR_15==0 ){
              *VAR_8 = FUNC_5(
                  "swarmvtab: no such SQL parameter: %s", VAR_13
              );
              VAR_9 = VAR_0;
            }else{
              VAR_9 = FUNC_2(VAR_5, VAR_15, VAR_14, -1, VAR_2);
            }
          }else if( VAR_12==7 && 0==FUNC_6(VAR_13, "maxopen", 7) ){
            VAR_4->nMaxOpen = FUNC_0(VAR_14);
            if( VAR_4->nMaxOpen<=0 ){
              *VAR_8 = FUNC_5("swarmvtab: illegal maxopen value");
              VAR_9 = VAR_0;
            }
          }else if( VAR_12==7 && 0==FUNC_6(VAR_13, "missing", 7) ){
            if( VAR_4->pNotFound ){
              *VAR_8 = FUNC_5(
                  "swarmvtab: duplicate \"missing\" option");
              VAR_9 = VAR_0;
            }else{
              VAR_4->pNotFound = FUNC_8(&VAR_9, VAR_8, VAR_4->db,
                  "SELECT \"%w\"(?%s)", VAR_14, VAR_4->bHasContext ? ",?" : ""
              );
            }
          }else if( VAR_12==9 && 0==FUNC_6(VAR_13, "openclose", 9) ){
            if( VAR_4->pOpenClose ){
              *VAR_8 = FUNC_5(
                  "swarmvtab: duplicate \"openclose\" option");
              VAR_9 = VAR_0;
            }else{
              VAR_4->pOpenClose = FUNC_8(&VAR_9, VAR_8, VAR_4->db,
                  "SELECT \"%w\"(?,?%s)", VAR_14, VAR_4->bHasContext ? ",?" : ""
              );
            }
          }else{
            *VAR_8 = FUNC_5("swarmvtab: unrecognized option: %s",VAR_13);
            VAR_9 = VAR_0;
          }
          FUNC_4(VAR_14);
        }
      }else{
        if( VAR_10==0 && VAR_6==1 ){
          VAR_4->pNotFound = FUNC_8(&VAR_9, VAR_8, VAR_4->db,
              "SELECT \"%w\"(?)", VAR_11
          );
        }else{
          *VAR_8 = FUNC_5( "swarmvtab: parse error: %s", VAR_7[VAR_10]);
          VAR_9 = VAR_0;
        }
      }
      FUNC_4(VAR_11);
    }
  }
  *VAR_3 = VAR_9;
}
