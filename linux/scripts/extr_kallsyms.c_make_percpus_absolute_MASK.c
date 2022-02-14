
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* sym; int percpu_absolute; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,int) ;
 TYPE_1__* VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  if (FUNC_0(&VAR_1[VAR_3], &VAR_0, 1)) {





   VAR_1[VAR_3].sym[0] = 'A';
   VAR_1[VAR_3].percpu_absolute = 1;
  }
}
