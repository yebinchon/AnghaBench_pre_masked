
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nstates; int * states; } ;
typedef int FONSstate ;
typedef TYPE_1__ FONScontext ;



__attribute__((used)) static FONSstate* FUNC_0(FONScontext* VAR_0)
{
 return &VAR_0->states[VAR_0->nstates-1];
}
