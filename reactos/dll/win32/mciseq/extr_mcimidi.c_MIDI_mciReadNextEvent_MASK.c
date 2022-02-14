
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_7__ {int hFile; } ;
typedef TYPE_1__ WINE_MCIMIDI ;
struct TYPE_8__ {scalar_t__ dwIndex; int wLastCommand; int dwLast; int dwEventData; int wEventLength; int dwEventPulse; } ;
typedef TYPE_2__ MCI_MIDITRACK ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int*) ;
 int FUNC_2 (TYPE_1__*,int*) ;
 int VAR_2 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ) ;

__attribute__((used)) static DWORD FUNC_5(WINE_MCIMIDI* VAR_3, MCI_MIDITRACK* VAR_4)
{
    BYTE VAR_5, VAR_6 = 0, VAR_7;
    WORD VAR_8 = 0;
    DWORD VAR_9;
    DWORD VAR_10;
    DWORD VAR_11;

    if (FUNC_4(VAR_3->hFile, VAR_4->dwIndex, VAR_2) != VAR_4->dwIndex) {
 FUNC_3("Can't seek at %08X\n", VAR_4->dwIndex);
 return VAR_1;
    }
    VAR_10 = FUNC_2(VAR_3, &VAR_9) + 1;
    FUNC_1(VAR_3, &VAR_5);
    switch (VAR_5) {
    case 0xF0:
    case 0xF7:
 VAR_10 += FUNC_2(VAR_3, &VAR_11);
 VAR_10 += VAR_11;
 break;
    case 0xFF:
 FUNC_1(VAR_3, &VAR_6); VAR_10++;

 VAR_10 += FUNC_2(VAR_3, &VAR_11);
 if (VAR_10 >= 0x10000u) {

     FUNC_3("Ouch !! Implementation limitation to 64k bytes for a MIDI event is overflowed\n");
     VAR_8 = 0xFFFF;
 } else {
     VAR_8 = FUNC_0(VAR_10);
 }
 VAR_10 += VAR_11;
 break;
    default:
 if (VAR_5 & 0x80) {
     VAR_4->wLastCommand = VAR_5;
     FUNC_1(VAR_3, &VAR_6); VAR_10++;
 } else {
     VAR_6 = VAR_5;
     VAR_5 = VAR_4->wLastCommand;
 }
 switch ((VAR_5 >> 4) & 0x07) {
 case 0: case 1: case 2: case 3: case 6:
     FUNC_1(VAR_3, &VAR_7); VAR_10++;
     VAR_8 = VAR_7;
     break;
 case 4: case 5:
     break;
 case 7:
     FUNC_3("Strange indeed b1=0x%02x\n", VAR_5);
 }
 break;
    }
    if (VAR_4->dwIndex + VAR_10 > VAR_4->dwLast)
 return VAR_0;

    VAR_4->dwEventPulse += VAR_9;
    VAR_4->dwEventData = (VAR_8 << 16) + (VAR_6 << 8) + VAR_5;
    VAR_4->wEventLength = VAR_10;






    return 0;
}
