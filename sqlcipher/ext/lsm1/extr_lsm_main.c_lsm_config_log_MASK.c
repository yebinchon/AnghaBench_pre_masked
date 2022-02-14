
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* xLog ) (void*,int,char const*) ;void* pLogCtx; } ;
typedef TYPE_1__ lsm_db ;



void FUNC_0(
  lsm_db *VAR_0,
  void (*VAR_1)(void *, int, const char *),
  void *VAR_2
){
  VAR_0->xLog = VAR_1;
  VAR_0->pLogCtx = VAR_2;
}
