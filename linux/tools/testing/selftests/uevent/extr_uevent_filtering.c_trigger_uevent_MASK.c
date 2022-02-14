
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;
 int VAR_6 ;
 int FUNC_3 (int,char*,int) ;

int FUNC_4(unsigned int VAR_7)
{
 int VAR_8, VAR_9;
 unsigned int VAR_10;

 VAR_8 = FUNC_2(VAR_4, VAR_3 | VAR_2);
 if (VAR_8 < 0) {
  if (VAR_5 != VAR_1)
   return -VAR_0;

  return -1;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  VAR_9 = FUNC_3(VAR_8, "add\n", sizeof("add\n") - 1);
  if (VAR_9 < 0) {
   FUNC_1(VAR_6, "Failed to trigger uevent\n");
   break;
  }
 }
 FUNC_0(VAR_8);

 return VAR_9;
}
