
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
typedef int UCHAR ;
struct TYPE_4__ {int LockCount; } ;
typedef TYPE_1__* PXMS_HANDLE ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static UCHAR FUNC_2(WORD VAR_3)
{
    PXMS_HANDLE VAR_4 = FUNC_0(VAR_3);

    if (!FUNC_1(VAR_4))
        return VAR_0;

    if (!VAR_4->LockCount)
        return VAR_1;


    VAR_4->LockCount--;

    return VAR_2;
}
