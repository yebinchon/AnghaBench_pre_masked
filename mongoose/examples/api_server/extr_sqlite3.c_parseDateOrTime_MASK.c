
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3_context ;
struct TYPE_6__ {int validJD; scalar_t__ iJD; } ;
typedef TYPE_1__ DateTime ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (char const*,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (char const*,double*,int ,int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(
  sqlite3_context *VAR_1,
  const char *VAR_2,
  DateTime *VAR_3
){
  double VAR_4;
  if( FUNC_1(VAR_2,VAR_3)==0 ){
    return 0;
  }else if( FUNC_0(VAR_2, VAR_3)==0 ){
    return 0;
  }else if( FUNC_4(VAR_2,"now")==0){
    return FUNC_2(VAR_1, VAR_3);
  }else if( FUNC_3(VAR_2, &VAR_4, FUNC_5(VAR_2), VAR_0) ){
    VAR_3->iJD = (sqlite3_int64)(VAR_4*86400000.0 + 0.5);
    VAR_3->validJD = 1;
    return 0;
  }
  return 1;
}
