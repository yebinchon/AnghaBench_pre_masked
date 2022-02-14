
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(void)
{
 int VAR_0;

 VAR_0 = FUNC_1();
 if (VAR_0)
  goto exit;

 VAR_0 = FUNC_2();
 if (VAR_0)
  goto exit;

 return 0;

exit:
 FUNC_0();
 return VAR_0;
}
