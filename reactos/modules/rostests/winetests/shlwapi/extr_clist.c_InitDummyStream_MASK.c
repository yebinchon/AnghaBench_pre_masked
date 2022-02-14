
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ QuadPart; } ;
struct TYPE_3__ {int * lpVtbl; } ;
struct dummystream {int ref; TYPE_2__ pos; int item; void* failstatcall; scalar_t__ statcalls; scalar_t__ seekcalls; void* failwritesize; void* failwritecall; scalar_t__ writecalls; void* readreturnlarge; void* readbeyondend; void* failreadsize; void* failreadcall; scalar_t__ readcalls; TYPE_1__ IStream_iface; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct dummystream *VAR_3)
{
    VAR_3->IStream_iface.lpVtbl = &VAR_2;
    VAR_3->ref = 1;
    VAR_3->readcalls = 0;
    VAR_3->failreadcall = VAR_0;
    VAR_3->failreadsize = VAR_0;
    VAR_3->readbeyondend = VAR_0;
    VAR_3->readreturnlarge = VAR_0;
    VAR_3->writecalls = 0;
    VAR_3->failwritecall = VAR_0;
    VAR_3->failwritesize = VAR_0;
    VAR_3->seekcalls = 0;
    VAR_3->statcalls = 0;
    VAR_3->failstatcall = VAR_0;
    VAR_3->item = VAR_1;
    VAR_3->pos.QuadPart = 0;
}
