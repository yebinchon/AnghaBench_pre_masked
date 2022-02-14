
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * indices; } ;
typedef TYPE_1__ php_com_saproxy ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void FUNC_1(php_com_saproxy *VAR_0, php_com_saproxy *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  FUNC_0(&VAR_0->indices[VAR_3], &VAR_1->indices[VAR_3]);
 }
}
