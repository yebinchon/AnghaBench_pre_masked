
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pgno; int pBt; } ;
typedef TYPE_1__ MemPage ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1(MemPage *VAR_1, int *VAR_2){
  if( (*VAR_2)==VAR_0 ){
    *VAR_2 = FUNC_0(VAR_1->pBt, VAR_1, VAR_1->pgno);
  }
}
