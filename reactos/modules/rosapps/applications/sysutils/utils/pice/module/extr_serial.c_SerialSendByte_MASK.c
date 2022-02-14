
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int ULONG ;
typedef int UCHAR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_5 ;

BOOLEAN FUNC_2(UCHAR VAR_6)
{
    ULONG VAR_7;

    VAR_7 = 0x00FFFFL;


    while ((FUNC_0((USHORT)(VAR_5 + VAR_1)) & VAR_4) == 0)
        if (!(--VAR_7))
        {
   return VAR_0;
        }

    FUNC_1((USHORT)(VAR_5 + VAR_3), VAR_6);

 return VAR_2;
}
