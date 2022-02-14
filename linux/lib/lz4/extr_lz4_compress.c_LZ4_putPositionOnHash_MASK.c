
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tableType_t ;
typedef size_t U32 ;
typedef int U16 ;
typedef int BYTE ;






__attribute__((used)) static void FUNC_0(
 const BYTE *VAR_0,
 U32 VAR_1,
 void *VAR_2,
 tableType_t const VAR_3,
 const BYTE *VAR_4)
{
 switch (VAR_3) {
 case 130:
 {
  const BYTE **VAR_5 = (const BYTE **)VAR_2;

  VAR_5[VAR_1] = VAR_0;
  return;
 }
 case 128:
 {
  U32 *VAR_6 = (U32 *) VAR_2;

  VAR_6[VAR_1] = (U32)(VAR_0 - VAR_4);
  return;
 }
 case 129:
 {
  U16 *VAR_7 = (U16 *) VAR_2;

  VAR_7[VAR_1] = (U16)(VAR_0 - VAR_4);
  return;
 }
 }
}
