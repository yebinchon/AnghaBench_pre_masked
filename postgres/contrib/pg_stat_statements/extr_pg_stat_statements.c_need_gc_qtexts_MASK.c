
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int extent; int mutex; } ;
typedef TYPE_1__ pgssSharedState ;
struct TYPE_4__ {int mean_query_len; } ;
typedef int Size ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_2(void)
{
 Size VAR_2;


 {
  volatile pgssSharedState *VAR_3 = (volatile pgssSharedState *) VAR_0;

  FUNC_0(&VAR_3->mutex);
  VAR_2 = VAR_3->extent;
  FUNC_1(&VAR_3->mutex);
 }


 if (VAR_2 < 512 * VAR_1)
  return 0;
 if (VAR_2 < VAR_0->mean_query_len * VAR_1 * 2)
  return 0;

 return 1;
}
