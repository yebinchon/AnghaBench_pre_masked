
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_3__ {int Offset; int DataContext; int Volume; } ;
typedef TYPE_1__* PNTFS_FILE_HANDLE ;
typedef int ARC_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,scalar_t__) ;

ARC_STATUS FUNC_2(ULONG VAR_2, VOID* VAR_3, ULONG VAR_4, ULONG* VAR_5)
{
    PNTFS_FILE_HANDLE VAR_6 = FUNC_0(VAR_2);
    ULONGLONG VAR_7;




    VAR_7 = FUNC_1(VAR_6->Volume, VAR_6->DataContext, VAR_6->Offset, VAR_3, VAR_4);
    VAR_6->Offset += VAR_7;
    *VAR_5 = (ULONG)VAR_7;




    if (VAR_7 > 0)
        return VAR_1;
    else
        return VAR_0;
}
