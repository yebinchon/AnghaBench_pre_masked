
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;

int FUNC_2(void)
{
 int VAR_1 = FUNC_0(&VAR_0);
 if (VAR_1 < 0)
  FUNC_1("nf_ct_timeout: Unable to register timeout extension.\n");
 return VAR_1;
}
