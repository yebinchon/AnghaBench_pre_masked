
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ longLengthID; int sequencesStart; int sequences; int litStart; int lit; } ;
typedef TYPE_1__ seqStore_t ;



void FUNC_0(seqStore_t* VAR_0)
{
    VAR_0->lit = VAR_0->litStart;
    VAR_0->sequences = VAR_0->sequencesStart;
    VAR_0->longLengthID = 0;
}
