
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,char*,scalar_t__) ;

int FUNC_5(char *VAR_4, ssize_t VAR_5)
{
 ssize_t VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_1("/proc/self/auxv", VAR_2);
 if (VAR_8 == -1) {
  FUNC_2("open");
  return -VAR_3;
 }

 VAR_6 = FUNC_4(VAR_8, VAR_4, VAR_5);
 if (VAR_6 < 0) {
  FUNC_2("read");
  VAR_7 = -VAR_0;
  goto out;
 }

 if (VAR_6 > VAR_5) {
  FUNC_3("overflowed auxv buffer\n");
  VAR_7 = -VAR_1;
  goto out;
 }

 VAR_7 = 0;
out:
 FUNC_0(VAR_8);
 return VAR_7;
}
