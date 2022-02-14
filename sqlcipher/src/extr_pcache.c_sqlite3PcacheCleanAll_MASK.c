
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pDirty; } ;
typedef int PgHdr ;
typedef TYPE_1__ PCache ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

void FUNC_2(PCache *VAR_0){
  PgHdr *VAR_1;
  FUNC_0(("%p.CLEAN-ALL\n",VAR_0));
  while( (VAR_1 = VAR_0->pDirty)!=0 ){
    FUNC_1(VAR_1);
  }
}
