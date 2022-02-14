
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef int ULONG ;
typedef int UCHAR ;
typedef int PVOID ;
typedef int Mem ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

BOOLEAN
FUNC_3(
    ULONG_PTR VAR_2)
{
    UCHAR VAR_3[3];
    ULONG VAR_4 = 0;

    if (!FUNC_2(FUNC_1(VAR_3, (PVOID)VAR_2, sizeof (VAR_3))))
    {
        FUNC_0("Couldn't access memory at 0x%p\n", VAR_2);
        return VAR_0;
    }


    while ((VAR_4 < sizeof (VAR_3)) && (VAR_3[VAR_4] == 0x66 || VAR_3[VAR_4] == 0x67))
        VAR_4++;

    if (VAR_4 == sizeof (VAR_3))
        return VAR_0;

    if (VAR_3[VAR_4] == 0xE8 || VAR_3[VAR_4] == 0x9A || VAR_3[VAR_4] == 0xF2 || VAR_3[VAR_4] == 0xF3 ||
        (((VAR_4 + 1) < sizeof (VAR_3)) && VAR_3[VAR_4] == 0xFF && (VAR_3[VAR_4+1] & 0x38) == 0x10))
    {
        return VAR_1;
    }

    return VAR_0;
}
