
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clocksource {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct clocksource *VAR_2)
{
 if (VAR_2->flags & VAR_0)
  VAR_2->flags |= VAR_1;
}
