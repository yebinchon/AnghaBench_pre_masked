
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_6__ {void* LastErrorCode; } ;
struct TYPE_5__ {scalar_t__ BlockType; scalar_t__ OwnerPsp; } ;
typedef TYPE_1__* PDOS_MCB ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 () ;
 void* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;

BOOLEAN FUNC_4(WORD VAR_4)
{
    PDOS_MCB VAR_5 = FUNC_2(VAR_4 - 1);

    FUNC_0("DosFreeMemory: BlockData 0x%04X\n", VAR_4);

    if (VAR_4 == 0)
    {
        VAR_2->LastErrorCode = VAR_0;
        return VAR_1;
    }

    FUNC_1();


    if (!FUNC_3(VAR_5))
    {
        FUNC_0("MCB block type '%c' not valid!\n", VAR_5->BlockType);
        VAR_2->LastErrorCode = VAR_0;
        return VAR_1;
    }


    VAR_5->OwnerPsp = 0;

    return VAR_3;
}
