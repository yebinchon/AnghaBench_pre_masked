
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int ULONG ;
typedef int* PUCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;

BOOLEAN FUNC_1(PUCHAR VAR_6)
{
    ULONG VAR_7;

    VAR_7 = 0x00FFFFL;


    while ((FUNC_0((USHORT)(VAR_5 + VAR_1)) & VAR_2) == 0)
        if (!(--VAR_7))
        {
   return VAR_0;
        }

    *VAR_6 = FUNC_0((USHORT)(VAR_5 + VAR_3));

    return VAR_4;
}
