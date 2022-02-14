
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
typedef int UCHAR ;
struct TYPE_4__ {int LockCount; int Address; } ;
typedef TYPE_1__* PXMS_HANDLE ;
typedef int * PDWORD ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static UCHAR FUNC_2(WORD VAR_3, PDWORD VAR_4)
{
    PXMS_HANDLE VAR_5 = FUNC_0(VAR_3);

    if (!FUNC_1(VAR_5))
        return VAR_0;

    if (VAR_5->LockCount == 0xFF)
        return VAR_1;


    VAR_5->LockCount++;
    *VAR_4 = VAR_5->Address;

    return VAR_2;
}
