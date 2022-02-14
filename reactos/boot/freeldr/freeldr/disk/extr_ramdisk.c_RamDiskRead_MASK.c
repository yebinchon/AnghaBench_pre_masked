
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONG ;
typedef scalar_t__ PVOID ;
typedef int ARC_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static ARC_STATUS FUNC_1(ULONG VAR_6, VOID* VAR_7, ULONG VAR_8, ULONG* VAR_9)
{
    PVOID VAR_10;


    if (VAR_5 >= VAR_3 || VAR_5 + VAR_8 > VAR_3)
    {
        *VAR_9 = 0;
        return VAR_0;
    }



    VAR_10 = (PVOID)((ULONG_PTR)VAR_2 + VAR_4 + (ULONG_PTR)VAR_5);


    FUNC_0(VAR_7, VAR_10, VAR_8);
    VAR_5 += VAR_8;
    *VAR_9 = VAR_8;

    return VAR_1;
}
