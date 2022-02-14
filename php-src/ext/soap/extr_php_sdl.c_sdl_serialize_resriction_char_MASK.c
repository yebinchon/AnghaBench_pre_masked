
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int smart_str ;
typedef TYPE_1__* sdlRestrictionCharPtr ;
struct TYPE_3__ {int fixed; int value; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(sdlRestrictionCharPtr VAR_0, smart_str *VAR_1)
{
 if (VAR_0) {
  FUNC_0(1, VAR_1);
  FUNC_1(VAR_0->value, VAR_1);
  FUNC_0(VAR_0->fixed, VAR_1);
 } else {
  FUNC_0(0, VAR_1);
 }
}
