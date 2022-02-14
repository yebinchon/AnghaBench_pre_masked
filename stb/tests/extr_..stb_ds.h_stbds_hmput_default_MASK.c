
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; } ;


 void* FUNC_0 (void*,size_t) ;
 void* FUNC_1 (void*,size_t) ;
 int FUNC_2 (void*,int ,size_t) ;
 void* FUNC_3 (void*,size_t,int ,int) ;
 TYPE_1__* FUNC_4 (void*) ;

void * FUNC_5(void *VAR_0, size_t VAR_1)
{




  if (VAR_0 == ((void*)0) || FUNC_4(FUNC_1(VAR_0,VAR_1))->length == 0) {
    VAR_0 = FUNC_3(VAR_0 ? FUNC_1(VAR_0,VAR_1) : ((void*)0), VAR_1, 0, 1);
    FUNC_4(VAR_0)->length += 1;
    FUNC_2(VAR_0, 0, VAR_1);
    VAR_0=FUNC_0(VAR_0,VAR_1);
  }
  return VAR_0;
}
