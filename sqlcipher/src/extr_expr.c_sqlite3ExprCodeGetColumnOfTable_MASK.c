
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_7__ {int iPKey; } ;
typedef TYPE_1__ Table ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_1__*,int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int ,int,int) ;
 int FUNC_6 (int *,int,int,int,int) ;

void FUNC_7(
  Vdbe *VAR_3,
  Table *VAR_4,
  int VAR_5,
  int VAR_6,
  int VAR_7
){
  if( VAR_4==0 ){
    FUNC_6(VAR_3, VAR_0, VAR_5, VAR_6, VAR_7);
    return;
  }
  if( VAR_6<0 || VAR_6==VAR_4->iPKey ){
    FUNC_5(VAR_3, VAR_1, VAR_5, VAR_7);
  }else{
    int VAR_8 = FUNC_1(VAR_4) ? VAR_2 : VAR_0;
    int VAR_9 = VAR_6;
    if( !FUNC_0(VAR_4) && !FUNC_1(VAR_4) ){
      VAR_9 = FUNC_3(FUNC_4(VAR_4), VAR_6);
    }
    FUNC_6(VAR_3, VAR_8, VAR_5, VAR_9, VAR_7);
  }
  if( VAR_6>=0 ){
    FUNC_2(VAR_3, VAR_4, VAR_6, VAR_7);
  }
}
