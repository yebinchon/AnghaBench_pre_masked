
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slideshow {scalar_t__ behavior; int restart_on_activate; int use_cut; int pause_on_deactivate; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(void *VAR_2)
{
 struct slideshow *VAR_3 = VAR_2;

 if (VAR_3->behavior == VAR_1) {
  VAR_3->restart_on_activate = 1;
  VAR_3->use_cut = 1;
 } else if (VAR_3->behavior == VAR_0) {
  VAR_3->pause_on_deactivate = 0;
 }
}
