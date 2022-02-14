
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT16 ;
typedef int PKULL_M_ACR_COMM ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int const*,scalar_t__ const) ;
 int FUNC_1 (int ,int*,int,int*,scalar_t__*) ;

BOOL FUNC_2(PKULL_M_ACR_COMM VAR_2, BYTE VAR_3, BYTE VAR_4, BYTE VAR_5, BYTE VAR_6, const BYTE *VAR_7, const UINT16 VAR_8, BYTE *VAR_9, UINT16 *VAR_10, BOOL VAR_11)
{
 BOOL VAR_12 = VAR_1;
 BYTE VAR_13[VAR_0], VAR_14 = 4;


 VAR_13[0] = VAR_3;
 VAR_13[1] = VAR_4;
 VAR_13[2] = VAR_5;
 VAR_13[3] = VAR_6;

 if(VAR_8)
 {
  VAR_13[VAR_14++] = (BYTE) VAR_8;
  FUNC_0(VAR_13 + VAR_14, VAR_7, VAR_8);
  VAR_14 += VAR_8;
 }
 if(!VAR_11 && *VAR_10)
  VAR_13[VAR_14++] = (BYTE) *VAR_10;
 return FUNC_1(VAR_2, VAR_13, VAR_14, VAR_9, VAR_10);
}
