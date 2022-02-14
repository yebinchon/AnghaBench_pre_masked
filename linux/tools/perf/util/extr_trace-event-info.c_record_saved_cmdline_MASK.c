
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
 int FUNC_5 (int ,unsigned long long*,int) ;

__attribute__((used)) static int FUNC_6(void)
{
 unsigned long long VAR_3;
 char *VAR_4;
 struct stat VAR_5;
 int VAR_6, VAR_7 = 0;

 VAR_4 = FUNC_0("saved_cmdlines");
 if (!VAR_4) {
  FUNC_1("can't get tracing/saved_cmdline");
  return -VAR_1;
 }

 VAR_6 = FUNC_4(VAR_4, &VAR_5);
 if (VAR_6 < 0) {

  VAR_3 = 0;
  if (FUNC_5(VAR_2, &VAR_3, 8) != 8)
   VAR_7 = -VAR_0;
  goto out;
 }
 VAR_7 = FUNC_3(VAR_4, 8);

out:
 FUNC_2(VAR_4);
 return VAR_7;
}
