
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int ULONG ;
typedef scalar_t__ UINT ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

UINT FUNC_2(UINT VAR_1)
{
    UINT VAR_2 = FUNC_1(VAR_1);

    if (!VAR_2)
        return 0;

    VAR_2 += sizeof(ULONG) + 2 * sizeof(USHORT);

    FUNC_0(VAR_0,("AddrLen %x\n", VAR_2));

    return VAR_2;
}
