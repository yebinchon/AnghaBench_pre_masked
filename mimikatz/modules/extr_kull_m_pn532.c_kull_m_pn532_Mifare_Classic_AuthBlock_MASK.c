
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dataOut ;
typedef int UINT16 ;
struct TYPE_7__ {scalar_t__ Data; } ;
struct TYPE_6__ {int const member_1; int const member_0; } ;
struct TYPE_9__ {TYPE_2__ DataOut; TYPE_1__ member_1; int member_0; } ;
struct TYPE_8__ {int const* NFCID1; int Tg; } ;
typedef TYPE_3__* PPN532_TARGET_TYPE_A ;
typedef TYPE_4__ PN532_DATA_EXCHANGE_MIFARE ;
typedef int PKULL_M_PN532_COMM ;
typedef int PBYTE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int const*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int,int *,int*) ;

BOOL FUNC_2(PKULL_M_PN532_COMM VAR_4, PPN532_TARGET_TYPE_A VAR_5, const BYTE VAR_6, const BYTE VAR_7, const BYTE VAR_8[VAR_1])
{
 BOOL VAR_9 = VAR_0;
 PN532_DATA_EXCHANGE_MIFARE VAR_10 = {VAR_5->Tg, {VAR_6, VAR_7}};
 BYTE VAR_11;
 UINT16 VAR_12 = sizeof(VAR_11);
 FUNC_0(VAR_10.DataOut.Data, VAR_8, VAR_1);
 FUNC_0(VAR_10.DataOut.Data + VAR_1, VAR_5->NFCID1, VAR_2 );
 if(FUNC_1(VAR_4, VAR_3, (PBYTE) &VAR_10, 13, &VAR_11, &VAR_12))
  VAR_9 = !VAR_11;
 return VAR_9;
}
