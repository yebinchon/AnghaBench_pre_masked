
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sign; scalar_t__ allistrue; } ;
typedef TYPE_1__ CACHESIGN ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(CACHESIGN *VAR_1, CACHESIGN *VAR_2)
{
 if (VAR_1->allistrue)
 {
  if (VAR_2->allistrue)
   return 0;
  else
   return VAR_0 - FUNC_1(VAR_2->sign);
 }
 else if (VAR_2->allistrue)
  return VAR_0 - FUNC_1(VAR_1->sign);

 return FUNC_0(VAR_1->sign, VAR_2->sign);
}
