
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,char*,char*,int *) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static bool FUNC_2(struct net_device *VAR_0, char *VAR_1,
          u32 *VAR_2, u32 *VAR_3)
{
 char *VAR_4;
 bool VAR_5;

 VAR_4 = FUNC_1(VAR_1, '/');
 if (VAR_4)
  *VAR_4 = 0;

 VAR_5 = FUNC_0(VAR_0, VAR_1, "download gateway speed",
          VAR_2);
 if (!VAR_5)
  return 0;


 if (VAR_4) {
  VAR_5 = FUNC_0(VAR_0, VAR_4 + 1,
           "upload gateway speed", VAR_3);
  if (!VAR_5)
   return 0;
 }

 return 1;
}
