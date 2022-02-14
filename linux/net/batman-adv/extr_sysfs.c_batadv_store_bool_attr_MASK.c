
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef int atomic_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (struct net_device*,char*,char const*,char*,...) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(char *VAR_1, size_t VAR_2,
      struct net_device *VAR_3,
      const char *VAR_4, atomic_t *VAR_5,
      bool *VAR_6)
{
 int VAR_7 = -1;

 *VAR_6 = 0;

 if (VAR_1[VAR_2 - 1] == '\n')
  VAR_1[VAR_2 - 1] = '\0';

 if ((FUNC_3(VAR_1, "1", 2) == 0) ||
     (FUNC_3(VAR_1, "enable", 7) == 0) ||
     (FUNC_3(VAR_1, "enabled", 8) == 0))
  VAR_7 = 1;

 if ((FUNC_3(VAR_1, "0", 2) == 0) ||
     (FUNC_3(VAR_1, "disable", 8) == 0) ||
     (FUNC_3(VAR_1, "disabled", 9) == 0))
  VAR_7 = 0;

 if (VAR_7 < 0) {
  FUNC_2(VAR_3, "%s: Invalid parameter received: %s\n",
       VAR_4, VAR_1);
  return -VAR_0;
 }

 if (FUNC_0(VAR_5) == VAR_7)
  return VAR_2;

 FUNC_2(VAR_3, "%s: Changing from: %s to: %s\n", VAR_4,
      FUNC_0(VAR_5) == 1 ? "enabled" : "disabled",
      VAR_7 == 1 ? "enabled" : "disabled");

 *VAR_6 = 1;

 FUNC_1(VAR_5, (unsigned int)VAR_7);
 return VAR_2;
}
