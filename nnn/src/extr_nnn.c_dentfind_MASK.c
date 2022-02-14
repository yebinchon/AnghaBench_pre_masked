
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;

__attribute__((used)) static int FUNC_1(const char *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 for (; VAR_3 < VAR_2; ++VAR_3)
  if (FUNC_0(VAR_1, VAR_0[VAR_3].name) == 0)
   return VAR_3;

 return 0;
}
