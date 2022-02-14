
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {scalar_t__ HighPart; int LowPart; } ;
struct TYPE_5__ {TYPE_1__ EndingAddress; } ;
typedef int* PULONG ;
typedef int PSTR ;
typedef scalar_t__* PINFCACHE ;
typedef int ** PHINF ;
typedef scalar_t__ PCSTR ;
typedef scalar_t__* PCHAR ;
typedef int INFCACHE ;
typedef int * HINF ;
typedef TYPE_2__ FILEINFORMATION ;
typedef int BOOLEAN ;
typedef scalar_t__ ARC_STATUS ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ,int*) ;
 scalar_t__ FUNC_3 (int,scalar_t__*,int,int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__* FUNC_4 (int,int ) ;
 int FUNC_5 (scalar_t__*,int ) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,scalar_t__*,int*) ;
 int VAR_2 ;
 int FUNC_7 (scalar_t__*,int) ;
 int VAR_3 ;
 int VAR_4 ;

BOOLEAN
FUNC_8(
    PHINF VAR_5,
    PCSTR VAR_6,
    PULONG VAR_7)
{
    FILEINFORMATION VAR_8;
    ULONG VAR_9;
    PCHAR VAR_10;
    ULONG VAR_11, VAR_12;
    PINFCACHE VAR_13;
    BOOLEAN VAR_14;
    ARC_STATUS VAR_15;

    *VAR_5 = ((void*)0);
    *VAR_7 = (ULONG) - 1;




    VAR_15 = FUNC_2((PSTR)VAR_6, VAR_2, &VAR_9);
    if (VAR_15 != VAR_0)
    {
        return VAR_1;
    }




    VAR_15 = FUNC_1(VAR_9, &VAR_8);
    if ((VAR_15 != VAR_0) || (VAR_8.EndingAddress.HighPart != 0))
    {
        FUNC_0(VAR_9);
        return VAR_1;
    }
    VAR_11 = VAR_8.EndingAddress.LowPart;




    VAR_10 = FUNC_4(VAR_11 + 1, VAR_4);
    if (!VAR_10)
    {
        FUNC_0(VAR_9);
        return VAR_1;
    }




    VAR_15 = FUNC_3(VAR_9, VAR_10, VAR_11, &VAR_12);
    if ((VAR_15 != VAR_0) || (VAR_12 != VAR_11))
    {
        FUNC_0(VAR_9);
        FUNC_5(VAR_10, VAR_4);
        return VAR_1;
    }




    FUNC_0(VAR_9);




    VAR_10[VAR_11] = 0;




    VAR_13 = (PINFCACHE)FUNC_4(sizeof(INFCACHE), VAR_3);
    if (!VAR_13)
    {
        FUNC_5(VAR_10, VAR_4);
        return VAR_1;
    }




    FUNC_7(VAR_13, sizeof(INFCACHE));




    VAR_14 = FUNC_6(VAR_13,
                              VAR_10,
                              VAR_10 + VAR_11,
                              VAR_7);
    if (!VAR_14)
    {
        FUNC_5(VAR_13, VAR_3);
        VAR_13 = ((void*)0);
    }




    FUNC_5(VAR_10, VAR_4);




    *VAR_5 = (HINF)VAR_13;

    return VAR_14;
}
