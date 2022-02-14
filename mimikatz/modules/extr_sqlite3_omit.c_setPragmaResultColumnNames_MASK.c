
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int Vdbe ;
struct TYPE_3__ {int nPragCName; int iPragCName; int zName; } ;
typedef TYPE_1__ PragmaName ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,int,int ,int ,int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(
  Vdbe *VAR_3,
  const PragmaName *VAR_4
){
  u8 VAR_5 = VAR_4->nPragCName;
  FUNC_1(VAR_3, VAR_5==0 ? 1 : VAR_5);
  if( VAR_5==0 ){
    FUNC_0(VAR_3, 0, VAR_0, VAR_4->zName, VAR_1);
  }else{
    int VAR_6, VAR_7;
    for(VAR_6=0, VAR_7=VAR_4->iPragCName; VAR_6<VAR_5; VAR_6++, VAR_7++){
      FUNC_0(VAR_3, VAR_6, VAR_0, VAR_2[VAR_7], VAR_1);
    }
  }
}
