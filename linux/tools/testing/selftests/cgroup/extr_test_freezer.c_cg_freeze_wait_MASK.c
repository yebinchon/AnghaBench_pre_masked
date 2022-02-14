
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_0, bool VAR_1)
{
 int VAR_2, VAR_3 = -1;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3) {
  FUNC_5("Error: cg_freeze_nowait() failed\n");
  goto out;
 }

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  goto out;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
out:
 FUNC_4(VAR_2);
 return VAR_3;
}
