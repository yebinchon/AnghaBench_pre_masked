
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int temp_store; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_6__ {TYPE_1__* db; } ;
typedef TYPE_2__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(Parse *VAR_2, const char *VAR_3){
  int VAR_4 = FUNC_0(VAR_3);
  sqlite3 *VAR_5 = VAR_2->db;
  if( VAR_5->temp_store==VAR_4 ) return VAR_1;
  if( FUNC_1( VAR_2 ) != VAR_1 ){
    return VAR_0;
  }
  VAR_5->temp_store = (u8)VAR_4;
  return VAR_1;
}
