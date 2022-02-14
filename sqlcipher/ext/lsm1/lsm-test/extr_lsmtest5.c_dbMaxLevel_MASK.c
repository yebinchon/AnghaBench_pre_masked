
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nKey; int nFanout; } ;
typedef TYPE_1__ DbParameters ;



__attribute__((used)) static int FUNC_0(DbParameters *VAR_0){
  int VAR_1;
  int VAR_2 = 1;
  for(VAR_1=0; VAR_2<VAR_0->nKey; VAR_1++){
    VAR_2 = VAR_2 * VAR_0->nFanout;
  }
  return VAR_1;
}
