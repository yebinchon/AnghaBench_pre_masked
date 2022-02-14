
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t WORD ;
struct TYPE_8__ {int wFormat; int nTracks; int nDivision; int dwTempo; TYPE_4__* tracks; int hFile; int dwMciTimeFormat; } ;
typedef TYPE_1__ WINE_MCIMIDI ;
struct TYPE_9__ {size_t wTrackNr; } ;
typedef int MCI_MIDITRACK ;
typedef int HPSTR ;
typedef scalar_t__ FOURCC ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 TYPE_4__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (char*,scalar_t__,...) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (char,char,char,char) ;
 long FUNC_11 (int ,int ,long) ;
 scalar_t__ FUNC_12 (int ,scalar_t__,int ) ;

__attribute__((used)) static DWORD FUNC_13(WINE_MCIMIDI* VAR_9, DWORD VAR_10)
{
    DWORD VAR_11;
    FOURCC VAR_12;
    WORD VAR_13;

    FUNC_8("(%p, %08X);\n", VAR_9, VAR_10);

    if (FUNC_12(VAR_9->hFile, VAR_10, VAR_8) != VAR_10) {
 FUNC_9("Can't seek at %08X begin of 'MThd'\n", VAR_10);
 return VAR_0;
    }
    if (FUNC_11(VAR_9->hFile, (HPSTR)&VAR_12,
     (long) sizeof(FOURCC)) != (long) sizeof(FOURCC))
 return VAR_0;

    if (VAR_12 != FUNC_10('M', 'T', 'h', 'd')) {
 FUNC_9("Can't synchronize on 'MThd' !\n");
 return VAR_0;
    }

    if (FUNC_5(VAR_9, &VAR_11) != 0 || VAR_11 < 3 * sizeof(WORD))
 return VAR_0;

    if (FUNC_7(VAR_9, &VAR_9->wFormat) != 0 ||
 FUNC_7(VAR_9, &VAR_9->nTracks) != 0 ||
 FUNC_7(VAR_9, &VAR_9->nDivision) != 0) {
 return VAR_0;
    }

    FUNC_8("toberead=0x%08X, wFormat=0x%04X nTracks=0x%04X nDivision=0x%04X\n",
   VAR_11, VAR_9->wFormat, VAR_9->nTracks, VAR_9->nDivision);




    if (VAR_9->nDivision > 0x8000) {






 FUNC_0("Handling SMPTE time in MIDI files has not been tested\n"
       "Please report to comp.emulators.ms-windows.wine with MIDI file !\n");

 switch (FUNC_2(VAR_9->nDivision)) {
 case 0xE8: VAR_9->dwMciTimeFormat = VAR_3; break;
 case 0xE7: VAR_9->dwMciTimeFormat = VAR_4; break;
 case 0xE3: VAR_9->dwMciTimeFormat = VAR_6; break;
 case 0xE2: VAR_9->dwMciTimeFormat = VAR_5; break;
 default:
     FUNC_9("Unsupported number of frames %d\n", -(char)FUNC_2(VAR_9->nDivision));
     return VAR_0;
 }
 switch (FUNC_4(VAR_9->nDivision)) {
 case 4:
 case 8:
 case 10:
 case 80:
 case 100:
 default:
     FUNC_9("Unsupported number of sub-frames %d\n", FUNC_4(VAR_9->nDivision));
     return VAR_0;
 }
    } else if (VAR_9->nDivision == 0) {
 FUNC_9("Number of division is 0, can't support that !!\n");
 return VAR_0;
    } else {
 VAR_9->dwMciTimeFormat = VAR_2;
    }

    switch (VAR_9->wFormat) {
    case 0:
 if (VAR_9->nTracks != 1) {
     FUNC_9("Got type 0 file whose number of track is not 1. Setting it to 1\n");
     VAR_9->nTracks = 1;
 }
 break;
    case 1:
    case 2:
 break;
    default:
 FUNC_9("Handling MIDI files which format = %d is not (yet) supported\n"
      "Please report with MIDI file !\n", VAR_9->wFormat);
 return VAR_0;
    }

    if (VAR_9->nTracks > 0x80) {

 FUNC_0("Truncating MIDI file with %u tracks\n", VAR_9->nTracks);
 VAR_9->nTracks = 0x80;
    }

    if ((VAR_9->tracks = FUNC_3(FUNC_1(), 0, sizeof(MCI_MIDITRACK) * VAR_9->nTracks)) == ((void*)0)) {
 return VAR_1;
    }

    VAR_11 -= 3 * sizeof(WORD);
    if (VAR_11 > 0) {
 FUNC_8("Size of MThd > 6, skipping %d extra bytes\n", VAR_11);
 FUNC_12(VAR_9->hFile, VAR_11, VAR_7);
    }

    for (VAR_13 = 0; VAR_13 < VAR_9->nTracks; VAR_13++) {
 VAR_9->tracks[VAR_13].wTrackNr = VAR_13;
 if (FUNC_6(VAR_9, &VAR_9->tracks[VAR_13]) != 0) {
     FUNC_9("Can't read 'MTrk' header\n");
     return VAR_0;
 }
    }

    VAR_9->dwTempo = 500000;

    return 0;
}
