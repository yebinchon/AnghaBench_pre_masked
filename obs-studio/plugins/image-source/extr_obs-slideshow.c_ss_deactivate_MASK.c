
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slideshow {scalar_t__ behavior; int pause_on_deactivate; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(void *VAR_1)
{
 struct slideshow *VAR_2 = VAR_1;

 if (VAR_2->behavior == VAR_0)
  VAR_2->pause_on_deactivate = 1;
}
