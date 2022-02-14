
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int Vdbe ;
typedef int Table ;
struct TYPE_3__ {int * pVdbe; } ;
typedef TYPE_1__ Parse ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int,int,int) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(
  Parse *VAR_0,
  Table *VAR_1,
  int VAR_2,
  int VAR_3,
  int VAR_4,
  u8 VAR_5
){
  Vdbe *VAR_6 = VAR_0->pVdbe;
  FUNC_0( VAR_6!=0 );
  FUNC_1(VAR_6, VAR_1, VAR_3, VAR_2, VAR_4);
  if( VAR_5 ){
    FUNC_2(VAR_6, VAR_5);
  }
  return VAR_4;
}
