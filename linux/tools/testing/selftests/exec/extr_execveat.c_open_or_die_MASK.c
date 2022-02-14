
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (VAR_2 < 0) {
  FUNC_2("Failed to open '%s'; "
   "check prerequisites are available\n", VAR_0);
  FUNC_0(1);
 }
 return VAR_2;
}
