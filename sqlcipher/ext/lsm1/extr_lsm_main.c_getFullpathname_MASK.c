
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* xFullpath ) (TYPE_1__*,char const*,char*,int*) ;} ;
typedef TYPE_1__ lsm_env ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 char* FUNC_1 (TYPE_1__*,char*,int,int*) ;
 int FUNC_2 (TYPE_1__*,char const*,char*,int*) ;

__attribute__((used)) static int FUNC_3(
  lsm_env *VAR_1,
  const char *VAR_2,
  char **VAR_3
){
  int VAR_4 = 0;
  char *VAR_5 = 0;
  int VAR_6 = 0;
  int VAR_7;

  do{
    VAR_4 = VAR_6;
    VAR_7 = VAR_1->xFullpath(VAR_1, VAR_2, VAR_5, &VAR_6);
    if( VAR_6>VAR_4 ){
      VAR_5 = FUNC_1(VAR_1, VAR_5, VAR_6, &VAR_7);
    }
  }while( VAR_6>VAR_4 && VAR_7==VAR_0 );

  if( VAR_7!=VAR_0 ){
    FUNC_0(VAR_1, VAR_5);
    VAR_5 = 0;
  }
  *VAR_3 = VAR_5;
  return VAR_7;
}
