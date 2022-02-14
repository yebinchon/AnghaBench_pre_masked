
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* val; void* key; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 void* FUNC_0 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_1[VAR_3].key = FUNC_0(&VAR_2);
  VAR_1[VAR_3].val = FUNC_0(&VAR_2);
 }
}
