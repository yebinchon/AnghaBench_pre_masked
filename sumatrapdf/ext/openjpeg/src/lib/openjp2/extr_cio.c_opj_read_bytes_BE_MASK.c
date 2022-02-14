
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_BYTE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int const*,scalar_t__) ;

void FUNC_2(const OPJ_BYTE * VAR_0, OPJ_UINT32 * VAR_1,
                       OPJ_UINT32 VAR_2)
{
    OPJ_BYTE * VAR_3 = ((OPJ_BYTE *) VAR_1);

    FUNC_0(VAR_2 > 0 && VAR_2 <= sizeof(OPJ_UINT32));

    *VAR_1 = 0;
    FUNC_1(VAR_3 + sizeof(OPJ_UINT32) - VAR_2, VAR_0, VAR_2);
}
