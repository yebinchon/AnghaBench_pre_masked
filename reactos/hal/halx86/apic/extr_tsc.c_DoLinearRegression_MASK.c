
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG64 ;
typedef int ULONG ;


 int VAR_0 ;

__attribute__((used)) static
ULONG64
FUNC_0(
    ULONG VAR_1,
    ULONG64 *VAR_2)
{
    ULONG VAR_3, VAR_4;
    ULONG64 VAR_5;


    VAR_4 = (VAR_1 * (VAR_1 + 1) * (2*VAR_1 + 1)) / 6;



    for (VAR_5 = 0, VAR_3 = 1; VAR_3 <= VAR_1; VAR_3++)
    {
         VAR_5 += VAR_3 * (VAR_2[VAR_3] - VAR_2[0]);
    }


    VAR_5 *= VAR_0;


    return (VAR_5 + (VAR_4/2)) / VAR_4;
}
