
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef size_t ULONG ;
struct TYPE_4__ {TYPE_1__* FuncTable; } ;
struct TYPE_3__ {int (* Read ) (size_t,int *,size_t,size_t*) ;} ;
typedef int ARC_STATUS ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t,int *,size_t,size_t*) ;

ARC_STATUS FUNC_1(ULONG VAR_3, VOID* VAR_4, ULONG VAR_5, ULONG* VAR_6)
{
    if (VAR_3 >= VAR_2 || !VAR_1[VAR_3].FuncTable)
        return VAR_0;
    return VAR_1[VAR_3].FuncTable->Read(VAR_3, VAR_4, VAR_5, VAR_6);
}
