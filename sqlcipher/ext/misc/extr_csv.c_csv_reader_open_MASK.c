
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* zIn; scalar_t__ in; int nIn; } ;
typedef TYPE_1__ CsvReader ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(
  CsvReader *VAR_1,
  const char *VAR_2,
  const char *VAR_3
){
  if( VAR_2 ){
    VAR_1->zIn = FUNC_5( VAR_0 );
    if( VAR_1->zIn==0 ){
      FUNC_1(VAR_1, "out of memory");
      return 1;
    }
    VAR_1->in = FUNC_3(VAR_2, "rb");
    if( VAR_1->in==0 ){
      FUNC_4(VAR_1->zIn);
      FUNC_2(VAR_1);
      FUNC_1(VAR_1, "cannot open '%s' for reading", VAR_2);
      return 1;
    }
  }else{
    FUNC_0( VAR_1->in==0 );
    VAR_1->zIn = (char*)VAR_3;
    VAR_1->nIn = FUNC_6(VAR_3);
  }
  return 0;
}
