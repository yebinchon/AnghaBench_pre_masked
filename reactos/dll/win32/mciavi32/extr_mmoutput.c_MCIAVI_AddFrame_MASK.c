
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct MMIOPos {int dwSize; int dwOffset; } ;
struct AviListBuild {int numVideoFrames; int inVideoSize; int numAudioBlocks; int numAudioAllocated; int inAudioSize; } ;
struct TYPE_9__ {int fccHandler; } ;
struct TYPE_11__ {int video_stream_n; int dwPlayableVideoFrames; int audio_stream_n; struct MMIOPos* lpAudioIndex; int lpWaveFormat; TYPE_3__* lpVideoIndex; TYPE_2__ ash_video; TYPE_1__* inbih; } ;
typedef TYPE_4__ WINE_MCIAVI ;
struct TYPE_12__ {scalar_t__ ckid; int cksize; int dwDataOffset; } ;
struct TYPE_10__ {int dwSize; int dwOffset; } ;
struct TYPE_8__ {scalar_t__ biCompression; } ;
typedef int LPSTR ;
typedef TYPE_5__* LPMMCKINFO ;
typedef int DWORD ;
typedef char BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct MMIOPos* FUNC_1 (int ,int ,int) ;
 struct MMIOPos* FUNC_2 (int ,int ,struct MMIOPos*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,...) ;
 int VAR_1 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ VAR_2 ;




 int FUNC_7 (char const) ;
 char FUNC_8 (char const) ;

__attribute__((used)) static BOOL FUNC_9(WINE_MCIAVI* VAR_3, LPMMCKINFO VAR_4,
    struct AviListBuild* VAR_5)
{
    const BYTE *VAR_6;
    DWORD VAR_7;
    DWORD VAR_8;

    if (VAR_4->ckid == VAR_2) return VAR_1;

    VAR_6 = (const BYTE *)&VAR_4->ckid;

    if (!FUNC_7(VAR_6[0]) || !FUNC_7(VAR_6[1]))
    {
        FUNC_6("wrongly encoded stream #\n");
        return VAR_0;
    }

    VAR_7 = (VAR_6[0] <= '9') ? (VAR_6[0] - '0') : (FUNC_8(VAR_6[0]) - 'a' + 10);
    VAR_7 <<= 4;
    VAR_7 |= (VAR_6[1] <= '9') ? (VAR_6[1] - '0') : (FUNC_8(VAR_6[1]) - 'a' + 10);

    FUNC_4("ckid %4.4s (stream #%d)\n", (LPSTR)&VAR_4->ckid, VAR_7);
    VAR_8 = FUNC_5(VAR_4->ckid);
    if (VAR_8 == FUNC_5(VAR_3->inbih->biCompression))
        VAR_8 = 130;


    else if (VAR_8 == FUNC_3(VAR_3->ash_video.fccHandler))
        VAR_8 = 130;
    switch (VAR_8) {
    case 131:
    case 130:
    case 129:
        if (VAR_7 != VAR_3->video_stream_n)
        {
            FUNC_4("data belongs to another video stream #%d\n", VAR_7);
            return VAR_0;
        }

 FUNC_4("Adding video frame[%d]: %d bytes\n",
       VAR_5->numVideoFrames, VAR_4->cksize);

 if (VAR_5->numVideoFrames < VAR_3->dwPlayableVideoFrames) {
     VAR_3->lpVideoIndex[VAR_5->numVideoFrames].dwOffset = VAR_4->dwDataOffset;
     VAR_3->lpVideoIndex[VAR_5->numVideoFrames].dwSize = VAR_4->cksize;
     if (VAR_5->inVideoSize < VAR_4->cksize)
  VAR_5->inVideoSize = VAR_4->cksize;
     VAR_5->numVideoFrames++;
 } else {
     FUNC_6("Too many video frames\n");
 }
 break;
    case 128:
        if (VAR_7 != VAR_3->audio_stream_n)
        {
            FUNC_4("data belongs to another audio stream #%d\n", VAR_7);
            return VAR_0;
        }

 FUNC_4("Adding audio frame[%d]: %d bytes\n",
       VAR_5->numAudioBlocks, VAR_4->cksize);
 if (VAR_3->lpWaveFormat) {
     if (VAR_5->numAudioBlocks >= VAR_5->numAudioAllocated) {
                DWORD VAR_9 = VAR_5->numAudioAllocated + 32;
                struct MMIOPos* VAR_10;

                if (!VAR_3->lpAudioIndex)
                    VAR_10 = FUNC_1(FUNC_0(), 0, VAR_9 * sizeof(struct MMIOPos));
                else
                    VAR_10 = FUNC_2(FUNC_0(), 0, VAR_3->lpAudioIndex, VAR_9 * sizeof(struct MMIOPos));
                if (!VAR_10) return VAR_0;
                VAR_5->numAudioAllocated = VAR_9;
                VAR_3->lpAudioIndex = VAR_10;
     }
     VAR_3->lpAudioIndex[VAR_5->numAudioBlocks].dwOffset = VAR_4->dwDataOffset;
     VAR_3->lpAudioIndex[VAR_5->numAudioBlocks].dwSize = VAR_4->cksize;
     if (VAR_5->inAudioSize < VAR_4->cksize)
  VAR_5->inAudioSize = VAR_4->cksize;
     VAR_5->numAudioBlocks++;
 } else {
     FUNC_6("Wave chunk without wave format... discarding\n");
 }
 break;
    default:
        FUNC_6("Unknown frame type %4.4s\n", (LPSTR)&VAR_4->ckid);
 break;
    }
    return VAR_1;
}
