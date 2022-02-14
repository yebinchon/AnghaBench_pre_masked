
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__* PVOID ;
typedef scalar_t__ CHAR ;


 scalar_t__* FUNC_0 (int ,int ,char) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int ) ;

PVOID
FUNC_2(
    PVOID VAR_0,
    ULONG VAR_1)
{
    CHAR *VAR_2;

    VAR_2 = FUNC_0(0, VAR_1, 'tmp ');
    FUNC_1(VAR_2, VAR_0, VAR_1);

    *VAR_2 = 0;

    return VAR_2;
}
