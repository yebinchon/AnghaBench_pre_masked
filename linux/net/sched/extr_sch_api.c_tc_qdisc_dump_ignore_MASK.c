
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Qdisc {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct Qdisc *VAR_2, bool VAR_3)
{
 if (VAR_2->flags & VAR_0)
  return 1;
 if ((VAR_2->flags & VAR_1) && !VAR_3)
  return 1;

 return 0;
}
