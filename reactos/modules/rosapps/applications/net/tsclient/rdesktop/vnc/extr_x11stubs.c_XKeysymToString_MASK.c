
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ keysym; char const* string; } ;
typedef scalar_t__ KeySym ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;

const char *
FUNC_0(KeySym VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_1[VAR_3].keysym != VAR_0
      && VAR_1[VAR_3].keysym != VAR_2; VAR_3++);
 return VAR_1[VAR_3].string;
}
