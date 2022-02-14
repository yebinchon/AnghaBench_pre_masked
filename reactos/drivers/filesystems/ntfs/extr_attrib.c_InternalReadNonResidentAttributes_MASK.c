
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ULONGLONG ;
typedef int ULONG ;
struct TYPE_12__ {int * NonResidentStart; int * NonResidentEnd; int Vcb; scalar_t__ OnlyResident; TYPE_1__* CurrAttr; } ;
struct TYPE_11__ {int pRecord; } ;
struct TYPE_10__ {scalar_t__ Type; } ;
typedef TYPE_1__* PNTFS_ATTR_RECORD ;
typedef TYPE_2__* PNTFS_ATTR_CONTEXT ;
typedef int * PNTFS_ATTRIBUTE_LIST_ITEM ;
typedef TYPE_3__* PFIND_ATTR_CONTXT ;
typedef scalar_t__ PCHAR ;
typedef int NTSTATUS ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,TYPE_3__*) ;
 int * FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,TYPE_2__*,int ,scalar_t__,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static
NTSTATUS
FUNC_8(PFIND_ATTR_CONTXT VAR_7)
{
    ULONGLONG VAR_8;
    PNTFS_ATTR_RECORD VAR_9;
    PNTFS_ATTR_CONTEXT VAR_10;

    FUNC_2("InternalReadNonResidentAttributes(%p)\n", VAR_7);

    VAR_9 = VAR_7->CurrAttr;
    FUNC_0(VAR_9->Type == VAR_0);

    if (VAR_7->OnlyResident)
    {
        VAR_7->NonResidentStart = ((void*)0);
        VAR_7->NonResidentEnd = ((void*)0);
        return VAR_5;
    }

    if (VAR_7->NonResidentStart != ((void*)0))
    {
        return VAR_3;
    }

    VAR_10 = FUNC_5(VAR_9);
    VAR_8 = FUNC_1(VAR_10->pRecord);
    if (VAR_8 > 0xFFFFFFFF)
    {
        FUNC_7(VAR_10);
        return VAR_2;
    }

    VAR_7->NonResidentStart = FUNC_3(VAR_1, (ULONG)VAR_8, VAR_6);
    if (VAR_7->NonResidentStart == ((void*)0))
    {
        FUNC_7(VAR_10);
        return VAR_4;
    }

    if (FUNC_6(VAR_7->Vcb, VAR_10, 0, (PCHAR)VAR_7->NonResidentStart, (ULONG)VAR_8) != VAR_8)
    {
        FUNC_4(VAR_7->NonResidentStart, VAR_6);
        VAR_7->NonResidentStart = ((void*)0);
        FUNC_7(VAR_10);
        return VAR_3;
    }

    FUNC_7(VAR_10);
    VAR_7->NonResidentEnd = (PNTFS_ATTRIBUTE_LIST_ITEM)((PCHAR)VAR_7->NonResidentStart + VAR_8);
    return VAR_5;
}
