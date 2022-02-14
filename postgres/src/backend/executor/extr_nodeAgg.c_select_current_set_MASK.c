
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int current_set; int * aggcontexts; int curaggcontext; int hashcontext; } ;
typedef TYPE_1__ AggState ;



__attribute__((used)) static void
FUNC_0(AggState *VAR_0, int VAR_1, bool VAR_2)
{

 if (VAR_2)
  VAR_0->curaggcontext = VAR_0->hashcontext;
 else
  VAR_0->curaggcontext = VAR_0->aggcontexts[VAR_1];

 VAR_0->current_set = VAR_1;
}
