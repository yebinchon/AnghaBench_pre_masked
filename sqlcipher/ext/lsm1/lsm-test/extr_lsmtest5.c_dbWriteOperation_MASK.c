
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int TestDb ;
struct TYPE_6__ {int nKey; } ;
typedef TYPE_1__ DbParameters ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *,int,int,int*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,int,int,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int*) ;
 int FUNC_8 (int *,char*,char const*,int*) ;

__attribute__((used)) static int FUNC_9(
  DbParameters *VAR_1,
  TestDb *VAR_2,
  int VAR_3,
  const char *VAR_4,
  int *VAR_5
){
  const int VAR_6 = FUNC_4(VAR_1);
  char VAR_7[VAR_0];
  int VAR_8;
  int VAR_9;

  FUNC_0( VAR_3>=0 && VAR_3<VAR_1->nKey );
  FUNC_3(VAR_1, 0, VAR_3, VAR_7);


  if( *VAR_5==0 && FUNC_6(VAR_2) ){
    VAR_9 = FUNC_5(VAR_2, 2);
    if( VAR_9==5 ) return 0;
    *VAR_5 = VAR_9;
  }

  FUNC_8(VAR_2, VAR_7, VAR_4, VAR_5);
  for(VAR_8=1; VAR_8<=VAR_6; VAR_8++){
    char VAR_10[VAR_0];
    u32 VAR_11 = 0;

    VAR_11 = FUNC_1(VAR_1, VAR_2, VAR_8, VAR_3, VAR_5);
    FUNC_2(VAR_11, VAR_10);
    FUNC_3(VAR_1, VAR_8, VAR_3, VAR_7);
    FUNC_8(VAR_2, VAR_7, VAR_10, VAR_5);
  }
  if( FUNC_6(VAR_2) ) FUNC_7(VAR_2, 0, VAR_5);
  return 1;
}
