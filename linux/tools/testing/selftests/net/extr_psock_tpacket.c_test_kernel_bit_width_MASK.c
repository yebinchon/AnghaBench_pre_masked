
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int in ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int,char*,int) ;

__attribute__((used)) static int FUNC_6(void)
{
 char VAR_1[512], *VAR_2;
 int VAR_3 = 0, VAR_4;
 ssize_t VAR_5;

 VAR_4 = FUNC_3("/proc/kallsyms", VAR_0);
 if (VAR_4 == -1) {
  FUNC_4("open");
  FUNC_1(1);
 }

 VAR_5 = FUNC_5(VAR_4, VAR_1, sizeof(VAR_1));
 if (VAR_5 <= 0) {
  FUNC_4("read");
  FUNC_1(1);
 }

 FUNC_0(VAR_4);

 VAR_2 = VAR_1;
 while(!FUNC_2(*VAR_2)) {
  VAR_3++;
  VAR_2++;
 }

 return VAR_3 * 4;
}
