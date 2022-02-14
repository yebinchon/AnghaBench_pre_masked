
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_state {int attached; int ctx; int handle; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct test_state *VAR_0)
{
 FUNC_3(VAR_0->handle, 0);
 if (VAR_0->attached == 1)
  FUNC_0(VAR_0->handle, 0);
 FUNC_1(VAR_0->handle);
 FUNC_2(VAR_0->ctx);
}
