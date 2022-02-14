
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* pLogWriter; int pEnv; } ;
typedef TYPE_2__ lsm_db ;
struct TYPE_5__ {TYPE_4__* z; } ;
struct TYPE_7__ {TYPE_1__ buf; } ;


 int FUNC_0 (int ,TYPE_4__*) ;

void FUNC_1(lsm_db *VAR_0){
  if( VAR_0->pLogWriter ){
    FUNC_0(VAR_0->pEnv, VAR_0->pLogWriter->buf.z);
    FUNC_0(VAR_0->pEnv, VAR_0->pLogWriter);
    VAR_0->pLogWriter = 0;
  }
}
