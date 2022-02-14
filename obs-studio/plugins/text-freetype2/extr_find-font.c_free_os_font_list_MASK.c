
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t num; scalar_t__ array; } ;


 int FUNC_0 (TYPE_1__) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(void)
{
 for (size_t VAR_1 = 0; VAR_1 < VAR_0.num; VAR_1++)
  FUNC_1(VAR_0.array + VAR_1);
 FUNC_0(VAR_0);
}
