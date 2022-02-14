
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int buf ;
typedef int WORD ;
struct TYPE_8__ {int hFile; int * lpstrName; int * lpstrCopyright; } ;
typedef TYPE_1__ WINE_MCIMIDI ;
typedef int WCHAR ;
struct TYPE_9__ {scalar_t__ dwFirst; scalar_t__ dwLast; scalar_t__ dwIndex; scalar_t__ wEventLength; int wStatus; scalar_t__ dwEventPulse; scalar_t__ dwLength; int wTrackNr; int dwEventData; } ;
typedef TYPE_2__ MCI_MIDITRACK ;
typedef char* HPSTR ;
typedef scalar_t__ FOURCC ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_6 (TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (int ,int ,char*,int,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (char,char,char,char) ;
 int FUNC_13 (int ,char*,int) ;
 scalar_t__ FUNC_14 (int ,char*,int ) ;

__attribute__((used)) static DWORD FUNC_15(WINE_MCIMIDI* VAR_4, MCI_MIDITRACK* VAR_5)
{
    DWORD VAR_6;
    FOURCC VAR_7;

    if (FUNC_13(VAR_4->hFile, (HPSTR)&VAR_7, (long)sizeof(FOURCC)) !=
 (long)sizeof(FOURCC)) {
 return VAR_1;
    }

    if (VAR_7 != FUNC_12('M', 'T', 'r', 'k')) {
 FUNC_10("Can't synchronize on 'MTrk' !\n");
 return VAR_1;
    }

    if (FUNC_6(VAR_4, &VAR_6) != 0) {
 return VAR_1;
    }
    VAR_5->dwFirst = FUNC_14(VAR_4->hFile, 0, VAR_2);
    VAR_5->dwLast = VAR_5->dwFirst + VAR_6;


    VAR_5->dwIndex = VAR_5->dwFirst;
    VAR_5->dwEventPulse = 0;

    while (FUNC_7(VAR_4, VAR_5) == 0 && FUNC_5(VAR_5->dwEventData) != 0x2FFF) {
 char VAR_8[1024];
 WORD VAR_9;

 VAR_5->dwIndex += VAR_5->wEventLength;

 switch (FUNC_5(VAR_5->dwEventData)) {
 case 0x02FF:
 case 0x03FF:
     VAR_9 = VAR_5->wEventLength - FUNC_2(VAR_5->dwEventData);
     if (VAR_9 >= sizeof(VAR_8)) {
  FUNC_10("Buffer for text is too small (%u are needed)\n", VAR_9);
  VAR_9 = sizeof(VAR_8) - 1;
     }
            if (FUNC_13(VAR_4->hFile, VAR_8, VAR_9) == VAR_9) {
  VAR_8[VAR_9] = 0;
  switch (FUNC_1(FUNC_5(VAR_5->dwEventData))) {
  case 0x02:
      if (VAR_4->lpstrCopyright) {
   FUNC_10("Two copyright notices (%s|%s)\n", FUNC_11(VAR_4->lpstrCopyright), VAR_8);
   FUNC_4(FUNC_0(), 0, VAR_4->lpstrCopyright);
      }
      VAR_9 = FUNC_8( VAR_0, 0, VAR_8, -1, ((void*)0), 0 );
      VAR_4->lpstrCopyright = FUNC_3( FUNC_0(), 0, VAR_9 * sizeof(WCHAR) );
      FUNC_8( VAR_0, 0, VAR_8, -1, VAR_4->lpstrCopyright, VAR_9 );
      break;
  case 0x03:
      if (VAR_4->lpstrName) {
   FUNC_10("Two names (%s|%s)\n", FUNC_11(VAR_4->lpstrName), VAR_8);
   FUNC_4(FUNC_0(), 0, VAR_4->lpstrName);
      }
      VAR_9 = FUNC_8( VAR_0, 0, VAR_8, -1, ((void*)0), 0 );
      VAR_4->lpstrName = FUNC_3( FUNC_0(), 0, VAR_9 * sizeof(WCHAR) );
      FUNC_8( VAR_0, 0, VAR_8, -1, VAR_4->lpstrName, VAR_9 );
      break;
  }
     }
     break;
 }
    }
    VAR_5->dwLength = VAR_5->dwEventPulse;

    FUNC_9("Track %u has %u bytes and %u pulses\n", VAR_5->wTrackNr, VAR_6, VAR_5->dwLength);


    VAR_5->wStatus = 1;
    VAR_5->dwIndex = VAR_5->dwFirst;
    VAR_5->dwEventPulse = 0;

    if (FUNC_14(VAR_4->hFile, 0, VAR_2) != VAR_5->dwLast) {
 FUNC_10("Ouch, out of sync seek=%u track=%u\n",
      FUNC_14(VAR_4->hFile, 0, VAR_2), VAR_5->dwLast);

 FUNC_14(VAR_4->hFile, VAR_5->dwLast, VAR_3);
    }

    return 0;
}
