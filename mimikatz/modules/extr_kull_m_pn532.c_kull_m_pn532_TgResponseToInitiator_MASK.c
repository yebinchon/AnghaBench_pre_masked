
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dataOut ;
typedef int dataIn ;
typedef int UINT16 ;
typedef int PKULL_M_PN532_COMM ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*,int,int*,int*) ;

void FUNC_1(PKULL_M_PN532_COMM VAR_2)
{
 BYTE VAR_3[3] = {0x01, 0x20, 0x01};
 BYTE VAR_4[VAR_1 - 2];
 UINT16 VAR_5 = sizeof(VAR_4);

 FUNC_0(VAR_2, VAR_0, VAR_3, sizeof(VAR_3), VAR_4, &VAR_5);
}
