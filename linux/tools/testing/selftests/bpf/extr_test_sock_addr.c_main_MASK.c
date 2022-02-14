
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 int VAR_1 ;

int FUNC_8(int VAR_2, char **VAR_3)
{
 int VAR_4 = -1;
 int VAR_5 = 0;

 if (VAR_2 < 2) {
  FUNC_4(VAR_1,
   "%s has to be run via %s.sh. Skip direct run.\n",
   VAR_3[0], VAR_3[0]);
  FUNC_3(VAR_5);
 }

 if (FUNC_7())
  goto err;

 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4 < 0)
  goto err;

 if (FUNC_5(VAR_0))
  goto err;

 if (FUNC_6(VAR_4))
  goto err;

 goto out;
err:
 VAR_5 = -1;
out:
 FUNC_1(VAR_4);
 FUNC_0();
 return VAR_5;
}
