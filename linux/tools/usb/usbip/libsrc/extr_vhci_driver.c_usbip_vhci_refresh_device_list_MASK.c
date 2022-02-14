
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;

int FUNC_2(void)
{

 if (FUNC_1())
  goto err;

 return 0;
err:
 FUNC_0("failed to refresh device list");
 return -1;
}
