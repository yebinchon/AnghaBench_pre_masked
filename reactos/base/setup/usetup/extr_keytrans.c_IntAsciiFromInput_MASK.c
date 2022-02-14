
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int USHORT ;
typedef size_t UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_5__ {scalar_t__ ScanCode; int Enhanced; scalar_t__ Normal; scalar_t__ Shift; scalar_t__ bCAPS; scalar_t__ NumLock; } ;
struct TYPE_4__ {scalar_t__ MakeCode; } ;
typedef TYPE_1__* PKEYBOARD_INPUT_DATA ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static UCHAR
FUNC_0(PKEYBOARD_INPUT_DATA VAR_5, DWORD VAR_6)
{
 UINT VAR_7 = 0;
 USHORT VAR_8 = 0;

 if (VAR_6 & VAR_1) VAR_8 = 1;

 while (VAR_4[VAR_7].ScanCode != 0) {
  if ((VAR_4[VAR_7].ScanCode == VAR_5->MakeCode) &&
      (VAR_4[VAR_7].Enhanced == VAR_8)) {
   if (VAR_4[VAR_7].NumLock) {
    if ((VAR_6 & VAR_2) &&
        !(VAR_6 & VAR_3)) {
     return VAR_4[VAR_7].NumLock;
    } else {
     return VAR_4[VAR_7].Normal;
    }
   }

   if ((VAR_6 & VAR_0) && VAR_4[VAR_7].bCAPS)
    VAR_6 ^= VAR_3;

   if (VAR_6 & VAR_3)
    return VAR_4[VAR_7].Shift;

   return VAR_4[VAR_7].Normal;
  }
  VAR_7++;
 }

 return 0;
}
