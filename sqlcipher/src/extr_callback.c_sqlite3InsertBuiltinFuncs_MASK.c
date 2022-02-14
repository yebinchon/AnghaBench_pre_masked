
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__** a; } ;
struct TYPE_6__ {TYPE_2__* pHash; } ;
struct TYPE_7__ {char* zName; TYPE_1__ u; struct TYPE_7__* pNext; } ;
typedef TYPE_2__ FuncDef ;


 int FUNC_0 (char const,int) ;
 int FUNC_1 (int) ;
 TYPE_5__ VAR_0 ;
 TYPE_2__* FUNC_2 (int,char const*) ;
 int FUNC_3 (char const*) ;

void FUNC_4(
  FuncDef *VAR_1,
  int VAR_2
){
  int VAR_3;
  for(VAR_3=0; VAR_3<VAR_2; VAR_3++){
    FuncDef *VAR_4;
    const char *VAR_5 = VAR_1[VAR_3].zName;
    int VAR_6 = FUNC_3(VAR_5);
    int VAR_7 = FUNC_0(VAR_5[0], VAR_6);
    FUNC_1( VAR_5[0]>='a' && VAR_5[0]<='z' );
    VAR_4 = FUNC_2(VAR_7, VAR_5);
    if( VAR_4 ){
      FUNC_1( VAR_4!=&VAR_1[VAR_3] && VAR_4->pNext!=&VAR_1[VAR_3] );
      VAR_1[VAR_3].pNext = VAR_4->pNext;
      VAR_4->pNext = &VAR_1[VAR_3];
    }else{
      VAR_1[VAR_3].pNext = 0;
      VAR_1[VAR_3].u.pHash = VAR_0.a[VAR_7];
      VAR_0.a[VAR_7] = &VAR_1[VAR_3];
    }
  }
}
