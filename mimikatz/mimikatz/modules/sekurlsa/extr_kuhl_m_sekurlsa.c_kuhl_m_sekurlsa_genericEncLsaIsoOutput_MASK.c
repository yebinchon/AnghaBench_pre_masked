
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int data; int unkData2; int unkData1; } ;
typedef TYPE_1__* PENC_LSAISO_DATA_BLOB ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,int ) ;

VOID FUNC_3(PENC_LSAISO_DATA_BLOB VAR_2, DWORD VAR_3)
{
 FUNC_1(L"\n\t   * unkData1 : "); FUNC_2(VAR_2->unkData1, sizeof(VAR_2->unkData1), 0);
 FUNC_1(L"\n\t     unkData2 : "); FUNC_2(VAR_2->unkData2, sizeof(VAR_2->unkData2), 0);
 FUNC_1(L"\n\t     Encrypted: "); FUNC_2(VAR_2->data, VAR_3 - FUNC_0(VAR_0, VAR_1), 0);
}
