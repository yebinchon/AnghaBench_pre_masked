
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3_context ;
struct TYPE_7__ {int validJD; scalar_t__ iJD; } ;
typedef TYPE_1__ DateTime ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int *,char*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,char*,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 double FUNC_4 (int *) ;
 unsigned char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4,
  DateTime *VAR_5
){
  int VAR_6;
  const unsigned char *VAR_7;
  int VAR_8;
  FUNC_0(VAR_5, 0, sizeof(*VAR_5));
  if( VAR_3==0 ){
    return FUNC_3(VAR_2, VAR_5);
  }
  if( (VAR_8 = FUNC_6(VAR_4[0]))==VAR_0
                   || VAR_8==VAR_1 ){
    VAR_5->iJD = (sqlite3_int64)(FUNC_4(VAR_4[0])*86400000.0 + 0.5);
    VAR_5->validJD = 1;
  }else{
    VAR_7 = FUNC_5(VAR_4[0]);
    if( !VAR_7 || FUNC_1(VAR_2, (char*)VAR_7, VAR_5) ){
      return 1;
    }
  }
  for(VAR_6=1; VAR_6<VAR_3; VAR_6++){
    VAR_7 = FUNC_5(VAR_4[VAR_6]);
    if( VAR_7==0 || FUNC_2(VAR_2, (char*)VAR_7, VAR_5) ) return 1;
  }
  return 0;
}
