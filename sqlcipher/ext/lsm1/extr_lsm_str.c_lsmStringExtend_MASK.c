
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int nAlloc; char* z; int pEnv; } ;
typedef TYPE_1__ LsmString ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (int ,char*,int) ;

int FUNC_3(LsmString *VAR_3, int VAR_4){
  FUNC_0( VAR_4>0 );
  if( VAR_3->n<0 ) return VAR_0;
  if( VAR_3->n + VAR_4 >= VAR_3->nAlloc ){
    int VAR_5 = VAR_3->n + VAR_4 + 100;
    char *VAR_6 = FUNC_2(VAR_3->pEnv, VAR_3->z, VAR_5);
    if( VAR_6==0 ){
      FUNC_1(VAR_3->pEnv, VAR_3->z);
      VAR_5 = 0;
      VAR_3->n = -1;
    }
    VAR_3->nAlloc = VAR_5;
    VAR_3->z = VAR_6;
  }
  return (VAR_3->z ? VAR_2 : VAR_1);
}
