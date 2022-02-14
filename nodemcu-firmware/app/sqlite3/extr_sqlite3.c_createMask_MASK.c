
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ n; int* ix; } ;
typedef TYPE_1__ WhereMaskSet ;


 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(WhereMaskSet *VAR_0, int VAR_1){
  FUNC_1( VAR_0->n < FUNC_0(VAR_0->ix) );
  VAR_0->ix[VAR_0->n++] = VAR_1;
}
