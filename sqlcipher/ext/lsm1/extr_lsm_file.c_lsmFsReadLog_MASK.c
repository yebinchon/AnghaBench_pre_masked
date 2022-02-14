
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_7__ {int fdLog; int pEnv; } ;
struct TYPE_6__ {size_t n; int * z; } ;
typedef TYPE_1__ LsmString ;
typedef TYPE_2__ FileSystem ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

int FUNC_3(FileSystem *VAR_1, i64 VAR_2, int VAR_3, LsmString *VAR_4){
  int VAR_5;
  FUNC_0( VAR_1->fdLog );
  VAR_5 = FUNC_2(VAR_4, VAR_3);
  if( VAR_5==VAR_0 ){
    VAR_5 = FUNC_1(VAR_1->pEnv, VAR_1->fdLog, VAR_2, &VAR_4->z[VAR_4->n], VAR_3);
    VAR_4->n += VAR_3;
  }
  return VAR_5;
}
