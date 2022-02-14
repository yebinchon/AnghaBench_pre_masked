
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int** apWiData; } ;
typedef TYPE_1__ Wal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(Wal *VAR_3, u32 VAR_4){
  int VAR_5 = FUNC_0(VAR_4);
  if( VAR_5==0 ){
    return VAR_3->apWiData[0][VAR_2/sizeof(u32) + VAR_4 - 1];
  }
  return VAR_3->apWiData[VAR_5][(VAR_4-1-VAR_1)%VAR_0];
}
