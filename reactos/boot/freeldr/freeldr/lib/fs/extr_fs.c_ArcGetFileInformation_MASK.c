
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_4__ {TYPE_1__* FuncTable; } ;
struct TYPE_3__ {int (* GetFileInformation ) (size_t,int *) ;} ;
typedef int FILEINFORMATION ;
typedef int ARC_STATUS ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t,int *) ;

ARC_STATUS FUNC_1(ULONG VAR_3, FILEINFORMATION* VAR_4)
{
    if (VAR_3 >= VAR_2 || !VAR_1[VAR_3].FuncTable)
        return VAR_0;
    return VAR_1[VAR_3].FuncTable->GetFileInformation(VAR_3, VAR_4);
}
