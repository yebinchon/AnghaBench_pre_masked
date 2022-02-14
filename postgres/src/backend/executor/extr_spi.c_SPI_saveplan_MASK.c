
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ magic; } ;
typedef TYPE_1__* SPIPlanPtr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

SPIPlanPtr
FUNC_3(SPIPlanPtr VAR_3)
{
 SPIPlanPtr VAR_4;

 if (VAR_3 == ((void*)0) || VAR_3->magic != VAR_2)
 {
  VAR_1 = VAR_0;
  return ((void*)0);
 }

 VAR_1 = FUNC_0(0);
 if (VAR_1 < 0)
  return ((void*)0);

 VAR_4 = FUNC_2(VAR_3);

 VAR_1 = FUNC_1(0);

 return VAR_4;
}
