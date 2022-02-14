
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ Buffer; } ;
typedef TYPE_3__ UNICODE_STRING ;
struct TYPE_17__ {void* Hash; } ;
struct TYPE_16__ {void* Hash; } ;
struct TYPE_19__ {TYPE_3__ ShortNameU; TYPE_2__ ShortHash; TYPE_3__ DirNameU; TYPE_1__ Hash; TYPE_3__ PathNameU; int LongNameU; scalar_t__ PathNameBuffer; } ;
typedef TYPE_4__* PVFATFCB ;
typedef int PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int *,TYPE_3__*,TYPE_3__*) ;
 void* FUNC_5 (void*,TYPE_3__*) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_3__*,int *) ;
 scalar_t__ FUNC_8 (int ) ;

NTSTATUS
FUNC_9(
    PDEVICE_EXTENSION VAR_2,
    PVFATFCB VAR_3,
    PVFATFCB VAR_4)
{
    NTSTATUS VAR_5;
    UNICODE_STRING VAR_6;


    VAR_5 = FUNC_4(VAR_4, &VAR_3->LongNameU, &VAR_3->ShortNameU, &VAR_6);
    if (!FUNC_1(VAR_5))
    {
        return VAR_5;
    }


    if (VAR_3->PathNameBuffer)
    {
        FUNC_0(VAR_3->PathNameBuffer, VAR_1);
    }
    VAR_3->PathNameU = VAR_6;


    FUNC_3(VAR_2, VAR_3);


    VAR_3->PathNameBuffer = VAR_3->PathNameU.Buffer;
    VAR_3->DirNameU.Buffer = VAR_3->PathNameU.Buffer;
    FUNC_7(&VAR_3->PathNameU, &VAR_3->DirNameU, &VAR_3->LongNameU);
    VAR_3->Hash.Hash = FUNC_5(0, &VAR_3->PathNameU);
    if (FUNC_8(VAR_2))
    {
        VAR_3->ShortHash.Hash = VAR_3->Hash.Hash;
    }
    else
    {
        VAR_3->ShortHash.Hash = FUNC_5(0, &VAR_3->DirNameU);
        VAR_3->ShortHash.Hash = FUNC_5(VAR_3->ShortHash.Hash, &VAR_3->ShortNameU);
    }

    FUNC_2(VAR_2, VAR_3);
    FUNC_6(VAR_2, VAR_4);

    return VAR_0;
}
