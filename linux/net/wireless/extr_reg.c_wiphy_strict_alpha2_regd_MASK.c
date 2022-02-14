
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int regulatory_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct wiphy *VAR_2)
{
 if (VAR_2->regulatory_flags & VAR_1 &&
     !(VAR_2->regulatory_flags & VAR_0))
  return 1;
 return 0;
}
