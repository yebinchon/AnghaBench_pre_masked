
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_16__ {int llDuration; int llStop; scalar_t__ llCurrent; } ;
struct TYPE_17__ {unsigned int cStreams; TYPE_6__ sourceSeeking; } ;
struct TYPE_19__ {TYPE_7__ Parser; TYPE_8__* streams; TYPE_2__* oldindex; } ;
struct TYPE_15__ {int dwSampleSize; size_t dwLength; int dwScale; int dwRate; } ;
struct TYPE_18__ {int frames; unsigned int pos; size_t entries; TYPE_5__ streamheader; TYPE_4__** stdindex; scalar_t__ index; int seek; } ;
struct TYPE_14__ {size_t nEntriesInUse; TYPE_3__* aIndex; } ;
struct TYPE_13__ {unsigned int dwSize; } ;
struct TYPE_12__ {int cb; TYPE_1__* aIndex; } ;
struct TYPE_11__ {int dwSize; int dwChunkId; } ;
typedef TYPE_8__ StreamData ;
typedef int HRESULT ;
typedef int DWORD64 ;
typedef size_t DWORD ;
typedef TYPE_9__ AVISplitterImpl ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,unsigned int,...) ;
 int VAR_1 ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (char*,size_t,size_t,size_t,size_t,size_t) ;
 int VAR_2 ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static HRESULT FUNC_5(AVISplitterImpl *VAR_3)
{
    unsigned int VAR_4;

    if (VAR_3->oldindex)
    {
        DWORD VAR_5, VAR_6;

        for (VAR_4 = 0; VAR_4 < VAR_3->Parser.cStreams; ++VAR_4)
        {
            VAR_3->streams[VAR_4].frames = 0;
            VAR_3->streams[VAR_4].pos = ~0;
            VAR_3->streams[VAR_4].index = 0;
        }

        VAR_5 = VAR_3->oldindex->cb / sizeof(VAR_3->oldindex->aIndex[0]);


        for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6)
        {
            DWORD VAR_7 = FUNC_2(VAR_3->oldindex->aIndex[VAR_6].dwChunkId);
            if (VAR_7 >= VAR_3->Parser.cStreams)
            {
                FUNC_1("Stream id %s ignored\n", FUNC_4((char*)&VAR_3->oldindex->aIndex[VAR_6].dwChunkId, 4));
                continue;
            }
            if (VAR_3->streams[VAR_7].pos == ~0U)
                VAR_3->streams[VAR_7].pos = VAR_6;

            if (VAR_3->streams[VAR_7].streamheader.dwSampleSize)
                VAR_3->streams[VAR_7].frames += VAR_3->oldindex->aIndex[VAR_6].dwSize / VAR_3->streams[VAR_7].streamheader.dwSampleSize;
            else
                ++VAR_3->streams[VAR_7].frames;
        }

        for (VAR_4 = 0; VAR_4 < VAR_3->Parser.cStreams; ++VAR_4)
        {
            if ((DWORD)VAR_3->streams[VAR_4].frames != VAR_3->streams[VAR_4].streamheader.dwLength)
            {
                FUNC_1("stream %u: frames found: %u, frames meant to be found: %u\n", VAR_4, (DWORD)VAR_3->streams[VAR_4].frames, VAR_3->streams[VAR_4].streamheader.dwLength);
            }
        }

    }
    else if (!VAR_3->streams[0].entries)
    {
        for (VAR_4 = 0; VAR_4 < VAR_3->Parser.cStreams; ++VAR_4)
        {
            VAR_3->streams[VAR_4].frames = VAR_3->streams[VAR_4].streamheader.dwLength;
        }

        FUNC_0("We should be manually seeking through the entire file to build an index, because the index is missing!!!\n");
        return VAR_0;
    }


    for (VAR_4 = 0; VAR_4 < VAR_3->Parser.cStreams; ++VAR_4)
    {
        StreamData *VAR_8 = VAR_3->streams + VAR_4;
        DWORD VAR_9;
        DWORD64 VAR_10 = 0;

        VAR_8->seek = VAR_2;

        if (VAR_8->stdindex)
        {
            VAR_8->index = 0;
            VAR_8->pos = 0;
            for (VAR_9 = 0; VAR_9 < VAR_8->entries; ++VAR_9)
            {
                if (VAR_8->streamheader.dwSampleSize)
                {
                    DWORD VAR_11;

                    for (VAR_11 = 0; VAR_11 < VAR_8->stdindex[VAR_9]->nEntriesInUse; ++VAR_11)
                    {
                        UINT VAR_12 = VAR_8->stdindex[VAR_9]->aIndex[VAR_11].dwSize & ~(1u << 31);
                        VAR_10 += VAR_12 / VAR_8->streamheader.dwSampleSize + !!(VAR_12 % VAR_8->streamheader.dwSampleSize);
                    }
                }
                else
                    VAR_10 += VAR_8->stdindex[VAR_9]->nEntriesInUse;
            }
        }
        else VAR_10 = VAR_8->frames;

        VAR_10 *= VAR_8->streamheader.dwScale;

        VAR_3->Parser.sourceSeeking.llDuration = VAR_10 * 10000000;
        VAR_3->Parser.sourceSeeking.llDuration /= VAR_8->streamheader.dwRate;
        VAR_3->Parser.sourceSeeking.llStop = VAR_3->Parser.sourceSeeking.llDuration;
        VAR_3->Parser.sourceSeeking.llCurrent = 0;

        VAR_10 /= VAR_8->streamheader.dwRate;

        FUNC_3("Duration: %d days, %d hours, %d minutes and %d.%03u seconds\n", (DWORD)(VAR_10 / 86400),
        (DWORD)((VAR_10 % 86400) / 3600), (DWORD)((VAR_10 % 3600) / 60), (DWORD)(VAR_10 % 60),
        (DWORD)(VAR_3->Parser.sourceSeeking.llDuration/10000) % 1000);
    }

    return VAR_1;
}
