
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_0(u32 VAR_4, struct net_device *VAR_5, int VAR_6)
{
 if ((VAR_4 & VAR_3) ||
     (VAR_5 && (VAR_5->flags & VAR_0) &&
      !(VAR_6 & VAR_1) &&
      !(VAR_4 & VAR_2)))
  return 1;

 return 0;
}
