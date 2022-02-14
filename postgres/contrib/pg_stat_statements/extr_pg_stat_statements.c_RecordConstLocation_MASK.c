
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int location; int length; } ;
typedef TYPE_1__ pgssLocationLen ;
struct TYPE_6__ {int clocations_count; int clocations_buf_size; TYPE_1__* clocations; } ;
typedef TYPE_2__ pgssJumbleState ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1(pgssJumbleState *VAR_0, int VAR_1)
{

 if (VAR_1 >= 0)
 {

  if (VAR_0->clocations_count >= VAR_0->clocations_buf_size)
  {
   VAR_0->clocations_buf_size *= 2;
   VAR_0->clocations = (pgssLocationLen *)
    FUNC_0(VAR_0->clocations,
       VAR_0->clocations_buf_size *
       sizeof(pgssLocationLen));
  }
  VAR_0->clocations[VAR_0->clocations_count].location = VAR_1;

  VAR_0->clocations[VAR_0->clocations_count].length = -1;
  VAR_0->clocations_count++;
 }
}
