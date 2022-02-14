
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct test_entry {int Type; int OutputPath; int * InputPath; } ;
typedef int WCHAR ;
typedef int ULONG ;
struct TYPE_11__ {scalar_t__ StaticBuffer; int StaticSize; int Size; int ReservedForAllocatedSize; int const* ReservedForIMalloc; int const* Buffer; } ;
struct TYPE_10__ {int const* Buffer; int MaximumLength; } ;
struct TYPE_8__ {int member_0; } ;
struct TYPE_9__ {int MinimumStaticBufferForTerminalNul; TYPE_5__ ByteBuffer; TYPE_4__ String; TYPE_1__ member_0; } ;
typedef int StaticBuffer ;
typedef TYPE_2__ RTL_UNICODE_STRING_BUFFER ;
typedef scalar_t__ PUCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,scalar_t__,int) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int VAR_2 ;
 int FUNC_4 (int const*,int const*,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int const*,int *) ;
 int FUNC_7 (int const*,int ) ;
 int FUNC_8 (int ,TYPE_2__*,int*,int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int,char*) ;

__attribute__((used)) static void FUNC_11(struct test_entry* VAR_3)
{
    RTL_UNICODE_STRING_BUFFER VAR_4 = { 0 };
    WCHAR VAR_5[VAR_0];
    ULONG VAR_6 = 0x12345;

    FUNC_2(&VAR_4.ByteBuffer, (PUCHAR)VAR_5, sizeof(VAR_5));

    FUNC_3(&VAR_4.String, VAR_3->InputPath);
    FUNC_0(VAR_1, &VAR_4.ByteBuffer, VAR_4.String.MaximumLength);
    FUNC_4(VAR_4.ByteBuffer.Buffer, VAR_4.String.Buffer, VAR_4.String.MaximumLength);

    FUNC_5(FUNC_8(0, &VAR_4, &VAR_6, ((void*)0)), VAR_2);

    FUNC_5(VAR_6, VAR_3->Type);
    FUNC_7(VAR_4.String.Buffer, VAR_3->OutputPath);

    if (!FUNC_9(VAR_3->InputPath, VAR_3->OutputPath))
    {
        FUNC_6(VAR_4.String.Buffer, VAR_3->InputPath);
    }
    else
    {

        FUNC_10((PUCHAR)VAR_4.String.Buffer >= VAR_4.ByteBuffer.StaticBuffer &&
                    (PUCHAR)VAR_4.String.Buffer <= (VAR_4.ByteBuffer.StaticBuffer + VAR_4.ByteBuffer.StaticSize),
                    "Expected Buffer to point inside StaticBuffer\n");
    }
    FUNC_7((const WCHAR *)VAR_4.ByteBuffer.Buffer, VAR_3->OutputPath);

    FUNC_5(VAR_4.MinimumStaticBufferForTerminalNul, 0);


    FUNC_6(VAR_4.ByteBuffer.Buffer, VAR_4.ByteBuffer.StaticBuffer);
    FUNC_5(VAR_4.ByteBuffer.Size, VAR_4.ByteBuffer.StaticSize);

    FUNC_5(VAR_4.ByteBuffer.ReservedForAllocatedSize, 0);
    FUNC_6(VAR_4.ByteBuffer.ReservedForIMalloc, ((void*)0));

    FUNC_1(&VAR_4.ByteBuffer);
}
