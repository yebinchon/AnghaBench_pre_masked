
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int MaximumLength; scalar_t__ Length; int Buffer; } ;
struct TYPE_5__ {TYPE_1__ Str; int FixedBuffer; } ;
typedef TYPE_2__* PSDB_TMP_STR ;



void FUNC_0(PSDB_TMP_STR VAR_0)
{
    VAR_0->Str.Buffer = VAR_0->FixedBuffer;
    VAR_0->Str.Length = 0;
    VAR_0->Str.MaximumLength = sizeof(VAR_0->FixedBuffer);
}
