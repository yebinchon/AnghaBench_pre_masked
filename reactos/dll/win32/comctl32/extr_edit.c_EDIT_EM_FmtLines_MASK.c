
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ EDITSTATE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static BOOL FUNC_1(EDITSTATE *VAR_1, BOOL VAR_2)
{
 VAR_1->flags &= ~VAR_0;
 if (VAR_2) {
  VAR_1->flags |= VAR_0;
  FUNC_0("soft break enabled, not implemented\n");
 }
 return VAR_2;
}
