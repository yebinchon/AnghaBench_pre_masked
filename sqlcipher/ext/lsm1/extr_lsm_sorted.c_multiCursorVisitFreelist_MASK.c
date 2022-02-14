
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pDb; int pSystemVal; int flags; } ;
struct TYPE_4__ {int pEnv; } ;
typedef TYPE_2__ MultiCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int*) ;

__attribute__((used)) static int FUNC_1(MultiCursor *VAR_2){
  int VAR_3 = VAR_1;
  VAR_2->flags |= VAR_0;
  VAR_2->pSystemVal = FUNC_0(VAR_2->pDb->pEnv, 4 + 8, &VAR_3);
  return VAR_3;
}
