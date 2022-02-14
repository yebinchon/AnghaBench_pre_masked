
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nAlloc; char* a; } ;
typedef TYPE_1__ Blob ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(Blob *VAR_2, int VAR_3, int *VAR_4){
  if( *VAR_4==VAR_1 && VAR_3>VAR_2->nAlloc ){
    int VAR_5 = VAR_3;
    char *VAR_6 = (char *)FUNC_0(VAR_2->a, VAR_5);
    if( VAR_6 ){
      VAR_2->nAlloc = VAR_5;
      VAR_2->a = VAR_6;
    }else{
      *VAR_4 = VAR_0;
    }
  }
}
