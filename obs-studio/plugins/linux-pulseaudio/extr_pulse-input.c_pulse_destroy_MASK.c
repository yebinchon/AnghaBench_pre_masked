
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* device; scalar_t__ stream; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
 FUNC_0(VAR_1);

 if (!VAR_0)
  return;

 if (VAR_0->stream)
  FUNC_2(VAR_0);
 FUNC_3();

 if (VAR_0->device)
  FUNC_1(VAR_0->device);
 FUNC_1(VAR_0);
}
