
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (int ,unsigned int*,int) ;

__attribute__((used)) static int FUNC_6(void)
{
 unsigned int VAR_3;
 char *VAR_4;
 struct stat VAR_5;
 int VAR_6, VAR_7 = 0;

 VAR_4 = FUNC_0("printk_formats");
 if (!VAR_4) {
  FUNC_1("can't get tracing/printk_formats");
  return -VAR_1;
 }

 VAR_6 = FUNC_4(VAR_4, &VAR_5);
 if (VAR_6 < 0) {

  VAR_3 = 0;
  if (FUNC_5(VAR_2, &VAR_3, 4) != 4)
   VAR_7 = -VAR_0;
  goto out;
 }
 VAR_7 = FUNC_3(VAR_4, 4);

out:
 FUNC_2(VAR_4);
 return VAR_7;
}
