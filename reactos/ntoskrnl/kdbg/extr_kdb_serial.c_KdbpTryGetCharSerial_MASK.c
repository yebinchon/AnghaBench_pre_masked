
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int PUCHAR ;
typedef int CHAR ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;

CHAR
FUNC_1(ULONG VAR_1)
{
    CHAR VAR_2 = -1;

    if (VAR_1 == 0)
        while (!FUNC_0(&VAR_0, (PUCHAR)&VAR_2));
    else
        while (!FUNC_0(&VAR_0, (PUCHAR)&VAR_2) && VAR_1-- > 0);

    return VAR_2;
}
