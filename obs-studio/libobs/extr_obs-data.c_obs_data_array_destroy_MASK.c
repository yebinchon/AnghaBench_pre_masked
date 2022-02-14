
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t num; int * array; } ;
struct TYPE_5__ {TYPE_3__ objects; } ;
typedef TYPE_1__ obs_data_array_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(obs_data_array_t *VAR_0)
{
 if (VAR_0) {
  for (size_t VAR_1 = 0; VAR_1 < VAR_0->objects.num; VAR_1++)
   FUNC_2(VAR_0->objects.array[VAR_1]);
  FUNC_1(VAR_0->objects);
  FUNC_0(VAR_0);
 }
}
