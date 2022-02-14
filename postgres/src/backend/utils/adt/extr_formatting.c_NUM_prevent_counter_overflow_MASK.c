
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int age; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void
FUNC_0(void)
{
 if (VAR_2 >= (VAR_0 - 1))
 {
  for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   VAR_1[VAR_4]->age >>= 1;
  VAR_2 >>= 1;
 }
}
