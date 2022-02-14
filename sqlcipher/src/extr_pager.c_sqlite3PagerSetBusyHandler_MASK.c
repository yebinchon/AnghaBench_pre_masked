
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* xBusyHandler ) (void*) ;int fd; void* pBusyHandlerArg; } ;
typedef TYPE_1__ Pager ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,void*) ;

void FUNC_2(
  Pager *VAR_1,
  int (*VAR_2)(void *),
  void *VAR_3
){
  void **VAR_4;
  VAR_1->xBusyHandler = VAR_2;
  VAR_1->pBusyHandlerArg = VAR_3;
  VAR_4 = (void **)&VAR_1->xBusyHandler;
  FUNC_0( ((int(*)(void *))(VAR_4[0]))==VAR_2 );
  FUNC_0( VAR_4[1]==VAR_3 );
  FUNC_1(VAR_1->fd, VAR_0, (void *)VAR_4);
}
