
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int ID3D10Blob ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int,int **) ;

__attribute__((used)) static void FUNC_3(void)
{
    ID3D10Blob *VAR_2;
    HRESULT VAR_3;
    ULONG VAR_4;

    VAR_3 = FUNC_2(1, ((void*)0));
    FUNC_1(VAR_3 == VAR_0, "D3DCreateBlob failed with %x\n", VAR_3);

    VAR_3 = FUNC_2(0, ((void*)0));
    FUNC_1(VAR_3 == VAR_0, "D3DCreateBlob failed with %x\n", VAR_3);

    VAR_3 = FUNC_2(0, &VAR_2);
    FUNC_1(VAR_3 == VAR_1, "D3DCreateBlob failed with %x\n", VAR_3);

    VAR_4 = FUNC_0(VAR_2);
    FUNC_1(!VAR_4, "ID3DBlob has %u references left\n", VAR_4);
}
