
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,char const*,int) ;
 int FUNC_1 (struct device*,char const*) ;
 int FUNC_2 (struct device*,char const*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1,
      const char *VAR_2,
      u32 *VAR_3, int VAR_4,
      int VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_1, VAR_2);
 if (VAR_6 < 0) {
  if (VAR_6 == -VAR_0)
   return 0;

  FUNC_0(VAR_1, "%s malformed (%d)\n", VAR_2, VAR_6);

  return VAR_6;
 } else if ((VAR_6 % VAR_5) != 0) {
  FUNC_0(VAR_1, "%s not a multiple of %d entries\n",
    VAR_2, VAR_5);

  return -VAR_0;
 }

 if (VAR_6 > VAR_4)
  VAR_6 = VAR_4;

 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 return VAR_6;
}
