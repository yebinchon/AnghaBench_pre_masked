
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite_int64 ;
struct TYPE_4__ {void* zErrMsg; } ;
typedef TYPE_1__ sqlite3_vtab ;
typedef int sqlite3_value ;
struct TYPE_5__ {int zSelf; } ;
typedef TYPE_2__ amatch_vtab ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (char*,int ) ;
 unsigned char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_vtab *VAR_7,
  int VAR_8,
  sqlite3_value **VAR_9,
  sqlite_int64 *VAR_10
){
  amatch_vtab *VAR_11 = (amatch_vtab*)VAR_7;
  const unsigned char *VAR_12;
  (void)VAR_10;
  if( VAR_8==1 ){
    VAR_7->zErrMsg = FUNC_0("DELETE from %s is not allowed",
                                      VAR_11->zSelf);
    return VAR_4;
  }
  if( FUNC_2(VAR_9[0])!=VAR_5 ){
    VAR_7->zErrMsg = FUNC_0("UPDATE of %s is not allowed",
                                      VAR_11->zSelf);
    return VAR_4;
  }
  if( FUNC_2(VAR_9[2+VAR_3])!=VAR_5
   || FUNC_2(VAR_9[2+VAR_1])!=VAR_5
   || FUNC_2(VAR_9[2+VAR_2])!=VAR_5
  ){
    VAR_7->zErrMsg = FUNC_0(
            "INSERT INTO %s allowed for column [command] only", VAR_11->zSelf);
    return VAR_4;
  }
  VAR_12 = FUNC_1(VAR_9[2+VAR_0]);
  if( VAR_12==0 ) return VAR_6;

  return VAR_6;
}
