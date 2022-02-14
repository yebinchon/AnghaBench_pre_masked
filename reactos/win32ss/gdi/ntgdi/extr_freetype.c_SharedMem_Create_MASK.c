
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {int RefCount; int IsMapping; int BufferSize; int Buffer; } ;
typedef int SHARED_MEM ;
typedef TYPE_1__* PSHARED_MEM ;
typedef int PBYTE ;
typedef int BOOL ;


 int FUNC_0 (char*,int ,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static PSHARED_MEM
FUNC_2(PBYTE VAR_2, ULONG VAR_3, BOOL VAR_4)
{
    PSHARED_MEM VAR_5;
    VAR_5 = FUNC_1(VAR_0, sizeof(SHARED_MEM), VAR_1);
    if (VAR_5)
    {
        VAR_5->Buffer = VAR_2;
        VAR_5->BufferSize = VAR_3;
        VAR_5->RefCount = 1;
        VAR_5->IsMapping = VAR_4;
        FUNC_0("Creating SharedMem for %p (%i, %p)\n", VAR_2, VAR_4, VAR_5);
    }
    return VAR_5;
}
