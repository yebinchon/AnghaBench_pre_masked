
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long long addr; } ;


 unsigned long long VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
 unsigned int VAR_3;

 VAR_0 = -1ULL;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (!FUNC_0(&VAR_1[VAR_3]) &&
      VAR_1[VAR_3].addr < VAR_0)
   VAR_0 = VAR_1[VAR_3].addr;
}
