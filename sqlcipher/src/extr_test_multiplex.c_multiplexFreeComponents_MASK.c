
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nReal; scalar_t__ aReal; } ;
typedef TYPE_1__ multiplexGroup ;


 int FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(multiplexGroup *VAR_0){
  int VAR_1;
  for(VAR_1=0; VAR_1<VAR_0->nReal; VAR_1++){ FUNC_0(VAR_0, VAR_1, 0); }
  FUNC_1(VAR_0->aReal);
  VAR_0->aReal = 0;
  VAR_0->nReal = 0;
}
