
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_2__ {int nMaxFrame; int eMode; } ;
typedef TYPE_1__ CheckpointStarvationCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(
  void *VAR_2,
  sqlite3 *VAR_3,
  const char *VAR_4,
  int VAR_5
){
  CheckpointStarvationCtx *VAR_6 = (CheckpointStarvationCtx *)VAR_2;
  if( VAR_5>VAR_6->nMaxFrame ){
    VAR_6->nMaxFrame = VAR_5;
  }
  if( VAR_5>=VAR_0 ){
    FUNC_0(VAR_3, VAR_4, VAR_6->eMode, 0, 0);
  }
  return VAR_1;
}
