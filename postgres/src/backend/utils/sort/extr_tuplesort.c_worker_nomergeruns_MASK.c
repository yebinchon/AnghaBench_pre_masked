
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int result_tape; int* tp_tapenum; size_t destTape; } ;
typedef TYPE_1__ Tuplesortstate ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(Tuplesortstate *VAR_0)
{
 FUNC_0(FUNC_1(VAR_0));
 FUNC_0(VAR_0->result_tape == -1);

 VAR_0->result_tape = VAR_0->tp_tapenum[VAR_0->destTape];
 FUNC_2(VAR_0);
}
