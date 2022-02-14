
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(int VAR_0, int VAR_1, mode_t VAR_2)
{
 char VAR_3[512];
 int VAR_4;

 FUNC_3(VAR_3, "/proc/self/fd/%d", VAR_0);
 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 if (VAR_4 < 0) {
  FUNC_2("open(%s) failed: %m\n", VAR_3);
  FUNC_0();
 }

 return VAR_4;
}
