
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Buffer; } ;
struct TYPE_5__ {scalar_t__ FixedBuffer; TYPE_1__ Str; } ;
typedef TYPE_2__* PSDB_TMP_STR ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(PSDB_TMP_STR VAR_0)
{
    if (VAR_0->Str.Buffer != VAR_0->FixedBuffer)
    {
        FUNC_0(VAR_0->Str.Buffer);
    }
}
