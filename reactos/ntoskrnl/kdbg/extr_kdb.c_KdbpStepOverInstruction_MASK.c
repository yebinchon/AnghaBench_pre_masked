
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef int LONG ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,int ,int ,int *,int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;

BOOLEAN
FUNC_4(
    ULONG_PTR VAR_3)
{
    LONG VAR_4;

    if (!FUNC_2(VAR_3))
        return VAR_0;

    VAR_4 = FUNC_0(VAR_3);
    if (VAR_4 < 1)
        return VAR_0;

    if (!FUNC_3(FUNC_1(VAR_3 + VAR_4, VAR_1, 0, 0, ((void*)0), VAR_0, ((void*)0))))
        return VAR_0;

    return VAR_2;
}
