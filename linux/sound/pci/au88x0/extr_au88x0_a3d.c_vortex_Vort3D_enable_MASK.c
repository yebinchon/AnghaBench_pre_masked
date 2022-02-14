
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * a3d; } ;
typedef TYPE_1__ vortex_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(vortex_t *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_2, VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_2(VAR_2, VAR_3 % 4, VAR_3 >> 2);
  FUNC_1(&VAR_2->a3d[0], VAR_2);
 }

 FUNC_3(VAR_2);
}
