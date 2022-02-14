
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPJ_UINT32 ;
typedef int OPJ_BYTE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int const*,int) ;

void FUNC_2(OPJ_BYTE * VAR_0, OPJ_UINT32 VAR_1,
                        OPJ_UINT32 VAR_2)
{
    const OPJ_BYTE * VAR_3 = ((const OPJ_BYTE *) &VAR_1) + sizeof(
                                      OPJ_UINT32) - VAR_2;

    FUNC_0(VAR_2 > 0 && VAR_2 <= sizeof(OPJ_UINT32));

    FUNC_1(VAR_0, VAR_3, VAR_2);
}
