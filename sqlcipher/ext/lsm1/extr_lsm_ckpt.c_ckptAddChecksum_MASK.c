
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int aCkpt; } ;
typedef TYPE_1__ CkptBuffer ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *,int *) ;
 int FUNC_1 (TYPE_1__*,int,int ,int*) ;

__attribute__((used)) static void FUNC_2(CkptBuffer *VAR_1, int VAR_2, int *VAR_3){
  if( *VAR_3==VAR_0 ){
    u32 VAR_4[2] = {0, 0};
    FUNC_0(VAR_1->aCkpt, VAR_2+2, &VAR_4[0], &VAR_4[1]);
    FUNC_1(VAR_1, VAR_2, VAR_4[0], VAR_3);
    FUNC_1(VAR_1, VAR_2+1, VAR_4[1], VAR_3);
  }
}
