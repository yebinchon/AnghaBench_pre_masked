
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
typedef int VFATFCB ;
typedef scalar_t__ USHORT ;
typedef int ULONG_PTR ;
struct TYPE_19__ {scalar_t__ Length; scalar_t__ MaximumLength; int * Buffer; } ;
struct TYPE_18__ {scalar_t__ Length; scalar_t__ MaximumLength; scalar_t__ Buffer; } ;
struct TYPE_17__ {scalar_t__ Buffer; scalar_t__ MaximumLength; scalar_t__ Length; } ;
struct TYPE_16__ {scalar_t__ Length; } ;
struct TYPE_14__ {int MaximumLength; int Buffer; scalar_t__ Length; } ;
struct TYPE_13__ {int NodeByteSize; int NodeTypeCode; } ;
struct TYPE_15__ {scalar_t__ OpenHandleCount; int FCBShareAccess; TYPE_7__ LongNameU; TYPE_6__ DirNameU; TYPE_5__ PathNameU; TYPE_2__ ShortNameU; int ShortNameBuffer; scalar_t__ PathNameBuffer; TYPE_1__ RFCB; } ;
typedef int SHARE_ACCESS ;
typedef TYPE_3__* PVFATFCB ;
typedef TYPE_4__* PUNICODE_STRING ;


 int FUNC_0 (char*,TYPE_4__*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_4 (int *,int) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_5__*,TYPE_6__*,TYPE_7__*) ;

__attribute__((used)) static
VOID
FUNC_6(
    PVFATFCB VAR_4,
    PUNICODE_STRING VAR_5)
{
    USHORT VAR_6;

    if (VAR_5)
        VAR_6 = VAR_5->Length + sizeof(WCHAR);
    else
        VAR_6 = 0;

    VAR_4->PathNameBuffer = FUNC_1(VAR_2, VAR_6, VAR_3);
    if (!VAR_4->PathNameBuffer)
    {

        FUNC_0("Unable to initialize FCB for filename '%wZ'\n", VAR_5);
        FUNC_2(VAR_0, (ULONG_PTR)VAR_4, (ULONG_PTR)VAR_5, 0, 0);
    }

    VAR_4->RFCB.NodeTypeCode = VAR_1;
    VAR_4->RFCB.NodeByteSize = sizeof(VFATFCB);

    VAR_4->PathNameU.Length = 0;
    VAR_4->PathNameU.Buffer = VAR_4->PathNameBuffer;
    VAR_4->PathNameU.MaximumLength = VAR_6;
    VAR_4->ShortNameU.Length = 0;
    VAR_4->ShortNameU.Buffer = VAR_4->ShortNameBuffer;
    VAR_4->ShortNameU.MaximumLength = sizeof(VAR_4->ShortNameBuffer);
    VAR_4->DirNameU.Buffer = VAR_4->PathNameU.Buffer;
    if (VAR_5 && VAR_5->Length)
    {
        FUNC_3(&VAR_4->PathNameU, VAR_5);
        FUNC_5(&VAR_4->PathNameU, &VAR_4->DirNameU, &VAR_4->LongNameU);
    }
    else
    {
        VAR_4->DirNameU.Buffer = VAR_4->LongNameU.Buffer = ((void*)0);
        VAR_4->DirNameU.MaximumLength = VAR_4->DirNameU.Length = 0;
        VAR_4->LongNameU.MaximumLength = VAR_4->LongNameU.Length = 0;
    }
    FUNC_4(&VAR_4->FCBShareAccess, sizeof(SHARE_ACCESS));
    VAR_4->OpenHandleCount = 0;
}
