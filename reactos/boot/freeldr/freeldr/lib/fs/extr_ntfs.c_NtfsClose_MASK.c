
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {int DataContext; } ;
typedef TYPE_1__* PNTFS_FILE_HANDLE ;
typedef int ARC_STATUS ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

ARC_STATUS FUNC_3(ULONG VAR_2)
{
    PNTFS_FILE_HANDLE VAR_3 = FUNC_1(VAR_2);

    FUNC_2(VAR_3->DataContext);
    FUNC_0(VAR_3, VAR_1);

    return VAR_0;
}
