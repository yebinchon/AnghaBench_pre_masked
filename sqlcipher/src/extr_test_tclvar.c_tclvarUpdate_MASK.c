
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int interp; } ;
typedef TYPE_1__ tclvar_vtab ;
typedef int sqlite_int64 ;
struct TYPE_5__ {void* zErrMsg; } ;
typedef TYPE_2__ sqlite3_vtab ;
typedef int sqlite3_value ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char const*,char const*,int ) ;
 int FUNC_1 (int ,char const*,int ) ;
 void* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;

__attribute__((used)) static int FUNC_6(
  sqlite3_vtab *VAR_5,
  int VAR_6,
  sqlite3_value **VAR_7,
  sqlite_int64 *VAR_8
){
  tclvar_vtab *VAR_9 = (tclvar_vtab*)VAR_5;
  if( VAR_6==1 ){

    const char *VAR_10 = (const char*)FUNC_3(VAR_7[0]);
    FUNC_1(VAR_9->interp, VAR_10, VAR_4);
    return VAR_2;
  }
  if( FUNC_4(VAR_7[0])==VAR_1 ){

    const char *VAR_11 = (const char*)FUNC_3(VAR_7[4]);
    const char *VAR_12;
    if( FUNC_4(VAR_7[5])!=VAR_3 ){
      VAR_5->zErrMsg = FUNC_2("the 'fullname' column must be TEXT");
      return VAR_0;
    }
    VAR_12 = (const char*)FUNC_3(VAR_7[5]);
    if( VAR_11 ){
      FUNC_0(VAR_9->interp, VAR_12, VAR_11, VAR_4);
    }else{
      FUNC_1(VAR_9->interp, VAR_12, VAR_4);
    }
    return VAR_2;
  }
  if( FUNC_4(VAR_7[0])==VAR_3
   && FUNC_4(VAR_7[1])==VAR_3
  ){

    const char *VAR_13 = (const char*)FUNC_3(VAR_7[0]);
    const char *VAR_14 = (const char*)FUNC_3(VAR_7[1]);
    const char *VAR_15 = (const char*)FUNC_3(VAR_7[4]);

    if( FUNC_5(VAR_13, VAR_14)!=0 || VAR_15==0 ){
      FUNC_1(VAR_9->interp, VAR_13, VAR_4);
    }
    if( VAR_15!=0 ){
      FUNC_0(VAR_9->interp, VAR_14, VAR_15, VAR_4);
    }
    return VAR_2;
  }
  VAR_5->zErrMsg = FUNC_2("prohibited TCL variable change");
  return VAR_0;
}
