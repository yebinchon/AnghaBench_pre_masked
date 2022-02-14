
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int markpos_eof; int eof_reached; int markpos_offset; int markpos_block; int result_tape; int tapeset; int current; int randomAccess; int sortcontext; } ;
typedef TYPE_1__ Tuplesortstate ;
typedef int MemoryContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;


 int FUNC_3 (int ,char*) ;

void
FUNC_4(Tuplesortstate *VAR_1)
{
 MemoryContext VAR_2 = FUNC_2(VAR_1->sortcontext);

 FUNC_0(VAR_1->randomAccess);

 switch (VAR_1->status)
 {
  case 129:
   VAR_1->current = VAR_1->markpos_offset;
   VAR_1->eof_reached = VAR_1->markpos_eof;
   break;
  case 128:
   FUNC_1(VAR_1->tapeset,
       VAR_1->result_tape,
       VAR_1->markpos_block,
       VAR_1->markpos_offset);
   VAR_1->eof_reached = VAR_1->markpos_eof;
   break;
  default:
   FUNC_3(VAR_0, "invalid tuplesort state");
   break;
 }

 FUNC_2(VAR_2);
}
