
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int sqlite3 ;
typedef int res ;
struct TYPE_5__ {int z; } ;
typedef TYPE_1__ String ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int ,TYPE_1__*,char**) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(
  sqlite3_context *VAR_2,
  int VAR_3,
  sqlite3_value **VAR_4
){
  sqlite3 *VAR_5 = FUNC_2(VAR_2);
  const char *VAR_6 = (const char*)FUNC_8(VAR_4[0]);
  String VAR_7;
  char *VAR_8 = 0;
  int VAR_9;
  FUNC_0(VAR_3);
  FUNC_1(&VAR_7, 0, sizeof(VAR_7));
  VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_1, &VAR_7, &VAR_8);
  if( VAR_8 ){
    FUNC_5(VAR_2, VAR_8, -1);
    FUNC_4(VAR_8);
  }else if( VAR_9 ){
    FUNC_6(VAR_2, VAR_9);
  }else{
    FUNC_7(VAR_2, VAR_7.z, -1, VAR_0);
  }
  FUNC_9(&VAR_7);
}
