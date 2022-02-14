
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;

int FUNC_6(int VAR_1, char **VAR_2)
{
 int VAR_3 = -1;
 int VAR_4 = 0;

 if (FUNC_5())
  goto err;

 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3 < 0)
  goto err;

 if (FUNC_3(VAR_0))
  goto err;

 if (FUNC_4(VAR_3))
  goto err;

 goto out;
err:
 VAR_4 = -1;
out:
 FUNC_1(VAR_3);
 FUNC_0();
 return VAR_4;
}
