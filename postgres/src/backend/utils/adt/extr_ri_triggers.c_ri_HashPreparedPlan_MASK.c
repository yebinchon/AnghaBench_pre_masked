
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * plan; } ;
typedef int * SPIPlanPtr ;
typedef int RI_QueryKey ;
typedef TYPE_1__ RI_QueryHashEntry ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,void*,int ,int*) ;
 int FUNC_2 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(RI_QueryKey *VAR_2, SPIPlanPtr VAR_3)
{
 RI_QueryHashEntry *VAR_4;
 bool VAR_5;




 if (!VAR_1)
  FUNC_2();





 VAR_4 = (RI_QueryHashEntry *) FUNC_1(VAR_1,
             (void *) VAR_2,
             VAR_0, &VAR_5);
 FUNC_0(!VAR_5 || VAR_4->plan == ((void*)0));
 VAR_4->plan = VAR_3;
}
