
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int ,int*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

int FUNC_3(int VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 loff_t VAR_7 = VAR_5;

 if (VAR_2 == VAR_1)
 {
  VAR_6 = FUNC_2(VAR_4, VAR_0, &VAR_7);
  if (VAR_6 < 0)
  {
   FUNC_1(VAR_3, "Failed to get erase block status\n");
   FUNC_0(1);
  }
 }
 return VAR_6;
}
