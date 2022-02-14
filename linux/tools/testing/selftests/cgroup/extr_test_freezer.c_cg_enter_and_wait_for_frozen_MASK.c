
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0, int VAR_1,
     bool VAR_2)
{
 int VAR_3, VAR_4 = -1;
 int VAR_5;

 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (VAR_4)
  goto out;

 for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
  VAR_4 = FUNC_3(VAR_3);
  if (VAR_4)
   break;

  VAR_4 = FUNC_0(VAR_0, VAR_2);
  if (VAR_4)
   continue;
 }

out:
 FUNC_4(VAR_3);
 return VAR_4;
}
