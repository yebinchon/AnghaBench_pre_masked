
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* zErr; } ;
typedef TYPE_1__ CsvReader ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 char* FUNC_2 (char const*,int,char const*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(
  CsvReader *VAR_0,
  const char *VAR_1,
  const char *VAR_2,
  char **VAR_3
){
  const char *VAR_4;
  VAR_4 = FUNC_2(VAR_1,(int)FUNC_5(VAR_1),VAR_2);
  if( VAR_4==0 ) return 0;
  VAR_0->zErr[0] = 0;
  if( *VAR_3 ){
    FUNC_1(VAR_0, "more than one '%s' parameter", VAR_1);
    return 1;
  }
  *VAR_3 = FUNC_4("%s", VAR_4);
  if( *VAR_3==0 ){
    FUNC_1(VAR_0, "out of memory");
    return 1;
  }
  FUNC_3(*VAR_3);
  FUNC_0(*VAR_3);
  return 1;
}
