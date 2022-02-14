
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int a ;
struct TYPE_8__ {struct TYPE_8__* pDirty; } ;
typedef TYPE_1__ PgHdr ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__**,int ,int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static PgHdr *FUNC_4(PgHdr *VAR_1){
  PgHdr *VAR_2[VAR_0], *VAR_3;
  int VAR_4;
  FUNC_2(VAR_2, 0, sizeof(VAR_2));
  while( VAR_1 ){
    VAR_3 = VAR_1;
    VAR_1 = VAR_3->pDirty;
    VAR_3->pDirty = 0;
    for(VAR_4=0; FUNC_0(VAR_4<VAR_0-1); VAR_4++){
      if( VAR_2[VAR_4]==0 ){
        VAR_2[VAR_4] = VAR_3;
        break;
      }else{
        VAR_3 = FUNC_3(VAR_2[VAR_4], VAR_3);
        VAR_2[VAR_4] = 0;
      }
    }
    if( FUNC_1(VAR_4==VAR_0-1) ){



      VAR_2[VAR_4] = FUNC_3(VAR_2[VAR_4], VAR_3);
    }
  }
  VAR_3 = VAR_2[0];
  for(VAR_4=1; VAR_4<VAR_0; VAR_4++){
    if( VAR_2[VAR_4]==0 ) continue;
    VAR_3 = VAR_3 ? FUNC_3(VAR_3, VAR_2[VAR_4]) : VAR_2[VAR_4];
  }
  return VAR_3;
}
