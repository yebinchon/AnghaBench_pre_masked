
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(void)
{
 int VAR_6 = 0;

 FUNC_1(&VAR_4);
 if (FUNC_0(VAR_5 == VAR_1)) {
  VAR_6 = -VAR_0;
  goto out_unlock;
 }


 if (++VAR_5 > 1)
  goto out_unlock;


 VAR_6 = FUNC_5(&VAR_2);
 if (VAR_6)
  goto err_dec;

 VAR_6 = FUNC_4(&VAR_3);
 if (VAR_6)
  goto err_unregister;

 VAR_6 = FUNC_3();
 if (VAR_6)
  goto err_unreg_inet;

 FUNC_2(&VAR_4);
 return VAR_6;
err_unreg_inet:
 FUNC_6(&VAR_3);
err_unregister:
 FUNC_7(&VAR_2);
err_dec:
 VAR_5--;
out_unlock:
 FUNC_2(&VAR_4);
 return VAR_6;
}
