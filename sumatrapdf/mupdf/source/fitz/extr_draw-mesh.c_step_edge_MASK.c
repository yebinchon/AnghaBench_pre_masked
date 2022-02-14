
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* v; scalar_t__ dx; int x; } ;
typedef TYPE_1__ edge_data ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(edge_data *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_1->x += VAR_1->dx;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
 {
  VAR_1->v[VAR_3] += VAR_1->v[VAR_3 + VAR_0];
 }
}
