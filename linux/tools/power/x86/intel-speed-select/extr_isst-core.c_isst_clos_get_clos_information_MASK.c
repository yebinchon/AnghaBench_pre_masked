
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,unsigned int) ;
 int FUNC_2 (int,int ,int ,int ,int ,unsigned int*) ;

int FUNC_3(int VAR_2, int *VAR_3, int *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_1, VAR_0, 0, 0,
         &VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_1("cpu:%d CLOS_PM_QOS_CONFIG resp:%x\n", VAR_2, VAR_5);

 if (VAR_5 & FUNC_0(1))
  *VAR_3 = 1;
 else
  *VAR_3 = 0;

 if (VAR_5 & FUNC_0(2))
  *VAR_4 = 1;
 else
  *VAR_4 = 0;

 return 0;
}
