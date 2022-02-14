
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* colors; } ;
struct TYPE_5__ {TYPE_1__ prefix; } ;
typedef TYPE_2__ TrgmStateKey ;
typedef scalar_t__ TrgmColor ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool
FUNC_1(TrgmStateKey *VAR_2, TrgmColor VAR_3)
{




 if (VAR_2->prefix.colors[0] == VAR_1)
  return 0;


 FUNC_0(VAR_2->prefix.colors[1] != VAR_1);

 FUNC_0(VAR_3 != VAR_1);





 if (VAR_2->prefix.colors[0] == VAR_0 &&
  VAR_2->prefix.colors[1] == VAR_0 &&
  VAR_3 == VAR_0)
  return 0;
 if (VAR_2->prefix.colors[0] != VAR_0 &&
  VAR_2->prefix.colors[1] == VAR_0)
  return 0;
 return 1;
}
