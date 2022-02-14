
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nId; TYPE_1__* a; } ;
struct TYPE_4__ {char* zName; } ;
typedef int RenameCtx ;
typedef int Parse ;
typedef TYPE_2__ IdList ;


 int FUNC_0 (int *,int *,void*) ;
 scalar_t__ FUNC_1 (char*,char const*) ;

__attribute__((used)) static void FUNC_2(
  Parse *VAR_0,
  RenameCtx *VAR_1,
  IdList *VAR_2,
  const char *VAR_3
){
  if( VAR_2 ){
    int VAR_4;
    for(VAR_4=0; VAR_4<VAR_2->nId; VAR_4++){
      char *VAR_5 = VAR_2->a[VAR_4].zName;
      if( 0==FUNC_1(VAR_5, VAR_3) ){
        FUNC_0(VAR_0, VAR_1, (void*)VAR_5);
      }
    }
  }
}
