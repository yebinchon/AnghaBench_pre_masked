
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;

int FUNC_5(void)
{
 int VAR_5;
 VAR_3 = 1;
 VAR_2 =
  FUNC_2(&VAR_3, 0);
 if (!VAR_2)
  return -VAR_0;

 VAR_5 = FUNC_3(&VAR_1);
 if (VAR_5 < 0) {
  FUNC_4("nf_ct_helper: Unable to register helper extension.\n");
  goto out_extend;
 }

 FUNC_0(&VAR_4);
 return 0;
out_extend:
 FUNC_1(VAR_2);
 return VAR_5;
}
