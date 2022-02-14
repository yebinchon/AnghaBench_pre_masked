
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int dataOut ;
typedef int UINT16 ;
struct TYPE_11__ {int data; } ;
struct TYPE_8__ {int const member_1; int member_0; } ;
struct TYPE_10__ {TYPE_1__ member_1; int member_0; } ;
struct TYPE_9__ {int Tg; } ;
typedef TYPE_2__* PPN532_TARGET_TYPE_A ;
typedef TYPE_3__ PN532_DATA_EXCHANGE_MIFARE ;
typedef TYPE_4__* PMIFARE_CLASSIC_RAW_BLOCK ;
typedef int PKULL_M_PN532_COMM ;
typedef int PBYTE ;
typedef int MIFARE_CLASSIC_RAW_BLOCK ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int,int *,int*) ;

BOOL FUNC_3(PKULL_M_PN532_COMM VAR_4, PPN532_TARGET_TYPE_A VAR_5, const BYTE VAR_6, PMIFARE_CLASSIC_RAW_BLOCK VAR_7)
{
 BOOL VAR_8 = VAR_0;
 PN532_DATA_EXCHANGE_MIFARE VAR_9 = {VAR_5->Tg, {VAR_2, VAR_6}};
 BYTE VAR_10[VAR_1 + 1];
 UINT16 VAR_11 = sizeof(VAR_10);
 FUNC_1(VAR_7, sizeof(MIFARE_CLASSIC_RAW_BLOCK));
 if(FUNC_2(VAR_4, VAR_3, (PBYTE) &VAR_9, 3, VAR_10, &VAR_11))
  if((VAR_8 = !VAR_10[0]))
   FUNC_0(VAR_7->data, VAR_10 + 1, VAR_11 - 1);
 return VAR_8;
}
