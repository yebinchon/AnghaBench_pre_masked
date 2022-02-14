
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int MakeCode; } ;
typedef TYPE_1__* PKEYBOARD_INPUT_DATA ;
typedef int DWORD ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static DWORD
FUNC_1(PKEYBOARD_INPUT_DATA VAR_5, DWORD VAR_6)
{
 if (!(VAR_6 & VAR_0)) {
  if ((VAR_6 & VAR_4) &&
      VAR_3[VAR_5->MakeCode & 0x7f]) {
   FUNC_0("Numlock, using %x\n",
          VAR_5->MakeCode & 0x7f);
   return VAR_3[VAR_5->MakeCode & 0x7f];
  }
  FUNC_0("Not enhanced, using %x\n", VAR_5->MakeCode & 0x7f);
  return VAR_1[VAR_5->MakeCode & 0x7f];
 }

 FUNC_0("Enhanced, using %x\n", VAR_5->MakeCode & 0x7f);
 return VAR_2[VAR_5->MakeCode & 0x7f];
}
