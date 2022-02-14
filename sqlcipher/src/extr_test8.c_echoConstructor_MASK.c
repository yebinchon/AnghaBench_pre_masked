
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vtab ;
typedef int sqlite3 ;
struct TYPE_5__ {char* zTableName; int isPattern; int base; int interp; void* zThis; int * db; } ;
typedef TYPE_1__ echo_vtab ;
struct TYPE_6__ {int interp; } ;
typedef TYPE_2__ EchoModule ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const* const) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 void* FUNC_6 (char*,char const* const,...) ;

__attribute__((used)) static int FUNC_7(
  sqlite3 *VAR_2,
  void *VAR_3,
  int VAR_4, const char *const*VAR_5,
  sqlite3_vtab **VAR_6,
  char **VAR_7
){
  int VAR_8;
  int VAR_9;
  echo_vtab *VAR_10;


  VAR_10 = FUNC_4( sizeof(*VAR_10) );
  if( !VAR_10 ){
    return VAR_0;
  }
  VAR_10->interp = ((EchoModule *)VAR_3)->interp;
  VAR_10->db = VAR_2;


  VAR_10->zThis = FUNC_6("%s", VAR_5[2]);
  if( !VAR_10->zThis ){
    FUNC_3((sqlite3_vtab *)VAR_10);
    return VAR_0;
  }


  if( VAR_4>3 ){
    VAR_10->zTableName = FUNC_6("%s", VAR_5[3]);
    FUNC_1(VAR_10->zTableName);
    if( VAR_10->zTableName && VAR_10->zTableName[0]=='*' ){
      char *VAR_11 = FUNC_6("%s%s", VAR_5[2], &(VAR_10->zTableName[1]));
      FUNC_5(VAR_10->zTableName);
      VAR_10->zTableName = VAR_11;
      VAR_10->isPattern = 1;
    }
    if( !VAR_10->zTableName ){
      FUNC_3((sqlite3_vtab *)VAR_10);
      return VAR_0;
    }
  }


  for(VAR_9=0; VAR_9<VAR_4; VAR_9++){
    FUNC_0(VAR_10->interp, VAR_5[VAR_9]);
  }





  VAR_8 = FUNC_2(VAR_10, VAR_2);
  if( VAR_8!=VAR_1 ){
    FUNC_3((sqlite3_vtab *)VAR_10);
    return VAR_8;
  }


  *VAR_6 = &VAR_10->base;
  return VAR_1;
}
