
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg80211_registered_device {int wiphy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(void *VAR_0, bool VAR_1)
{
 struct cfg80211_registered_device *VAR_2 = VAR_0;

 if (!VAR_1)
  return 0;

 FUNC_1();
 FUNC_0(&VAR_2->wiphy);
 FUNC_2();

 return 0;
}
