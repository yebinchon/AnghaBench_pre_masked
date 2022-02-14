
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ FUNC_10 () ;
 int VAR_2 ;

int FUNC_11(int VAR_3, char **VAR_4)
{
 int VAR_5 = -1;
 int VAR_6 = 0;

 if (VAR_3 < 3) {
  FUNC_6(VAR_2, "Usage: %s iface prog_id\n", VAR_4[0]);
  FUNC_5(VAR_1);
 }

 if (FUNC_10())
  goto err;

 VAR_5 = FUNC_4(VAR_0);
 if (VAR_5 < 0)
  goto err;

 if (FUNC_7(VAR_0))
  goto err;

 if (FUNC_9(VAR_4[1]))
  goto err;

 if (FUNC_1(FUNC_0(VAR_4[2])))
  goto err;

 goto out;
err:
 VAR_6 = -1;
out:
 FUNC_3(VAR_5);
 FUNC_2();
 FUNC_8("[%s]\n", VAR_6 ? "FAIL" : "PASS");
 return VAR_6;
}
