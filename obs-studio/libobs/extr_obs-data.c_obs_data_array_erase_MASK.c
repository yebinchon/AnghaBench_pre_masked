
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * array; } ;
struct TYPE_4__ {TYPE_3__ objects; } ;
typedef TYPE_1__ obs_data_array_t ;


 int FUNC_0 (TYPE_3__,size_t) ;
 int FUNC_1 (int ) ;

void FUNC_2(obs_data_array_t *VAR_0, size_t VAR_1)
{
 if (VAR_0) {
  FUNC_1(VAR_0->objects.array[VAR_1]);
  FUNC_0(VAR_0->objects, VAR_1);
 }
}
