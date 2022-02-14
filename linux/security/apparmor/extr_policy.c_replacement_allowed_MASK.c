
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct aa_profile {TYPE_1__ label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct aa_profile *VAR_3, int VAR_4,
          const char **VAR_5)
{
 if (VAR_3) {
  if (VAR_3->label.flags & VAR_2) {
   *VAR_5 = "cannot replace immutible profile";
   return -VAR_1;
  } else if (VAR_4) {
   *VAR_5 = "profile already exists";
   return -VAR_0;
  }
 }
 return 0;
}
