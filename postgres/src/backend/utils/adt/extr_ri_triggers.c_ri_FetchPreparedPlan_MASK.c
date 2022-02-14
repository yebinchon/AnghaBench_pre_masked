
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * plan; } ;
typedef int * SPIPlanPtr ;
typedef int RI_QueryKey ;
typedef TYPE_1__ RI_QueryHashEntry ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,void*,int ,int *) ;
 int FUNC_3 () ;
 int VAR_1 ;

__attribute__((used)) static SPIPlanPtr
FUNC_4(RI_QueryKey *VAR_2)
{
 RI_QueryHashEntry *VAR_3;
 SPIPlanPtr VAR_4;




 if (!VAR_1)
  FUNC_3();




 VAR_3 = (RI_QueryHashEntry *) FUNC_2(VAR_1,
             (void *) VAR_2,
             VAR_0, ((void*)0));
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 VAR_4 = VAR_3->plan;
 if (VAR_4 && FUNC_1(VAR_4))
  return VAR_4;





 VAR_3->plan = ((void*)0);
 if (VAR_4)
  FUNC_0(VAR_4);

 return ((void*)0);
}
