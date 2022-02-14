
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_17__ {scalar_t__ qwBaseOffset; size_t nEntriesInUse; TYPE_7__* aIndex; } ;
struct TYPE_16__ {unsigned int dwSize; scalar_t__ dwOffset; } ;
struct TYPE_10__ {TYPE_5__* pInputPin; } ;
struct TYPE_15__ {int offset; TYPE_3__* oldindex; TYPE_1__ Parser; TYPE_4__* streams; } ;
struct TYPE_14__ {int pReader; int pAlloc; } ;
struct TYPE_13__ {size_t pos; size_t pos_next; size_t index; size_t index_next; size_t entries; int packet_queued; int * sample; TYPE_8__** stdindex; scalar_t__ preroll; int seek; } ;
struct TYPE_12__ {int cb; TYPE_2__* aIndex; } ;
struct TYPE_11__ {int dwFlags; int dwSize; int dwOffset; int dwChunkId; } ;
typedef TYPE_4__ StreamData ;
typedef int RIFFLIST ;
typedef int RIFFCHUNK ;
typedef TYPE_5__ PullPin ;
typedef scalar_t__ LONGLONG ;
typedef int IMediaSample ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_6__ AVISplitterImpl ;
typedef TYPE_7__ AVISTDINDEX_ENTRY ;
typedef TYPE_8__ AVISTDINDEX ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,scalar_t__*,scalar_t__*) ;
 int FUNC_11 (int ,int **,int *,int *,int ) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,...) ;
 int VAR_5 ;
 int FUNC_17 (int) ;

__attribute__((used)) static HRESULT FUNC_18(AVISplitterImpl *VAR_6, DWORD VAR_7)
{
    StreamData *VAR_8 = VAR_6->streams + VAR_7;
    PullPin *VAR_9 = VAR_6->Parser.pInputPin;
    IMediaSample *VAR_10 = ((void*)0);
    HRESULT VAR_11;
    ULONG VAR_12;

    FUNC_16("(%p, %u)->()\n", VAR_6, VAR_7);

    VAR_11 = FUNC_11(VAR_9->pAlloc, &VAR_10, ((void*)0), ((void*)0), 0);
    if (VAR_11 != VAR_4)
        FUNC_1("... %08x?\n", VAR_11);

    if (FUNC_13(VAR_11))
    {
        LONGLONG VAR_13;

        LONGLONG VAR_14;

        VAR_8->pos = VAR_8->pos_next;
        VAR_8->index = VAR_8->index_next;

        FUNC_7(VAR_10, VAR_8->seek);
        VAR_8->seek = VAR_2;
        if (VAR_8->preroll)
        {
            --VAR_8->preroll;
            FUNC_8(VAR_10, VAR_5);
        }
        else
            FUNC_8(VAR_10, VAR_2);
        FUNC_9(VAR_10, VAR_5);

        if (VAR_8->stdindex)
        {
            AVISTDINDEX *VAR_15 = VAR_8->stdindex[VAR_8->index];
            AVISTDINDEX_ENTRY *VAR_16 = &VAR_15->aIndex[VAR_8->pos];


            if (VAR_8->index >= VAR_8->entries)
            {
                FUNC_16("END OF STREAM ON %u\n", VAR_7);
                FUNC_5(VAR_10);
                return VAR_3;
            }

            VAR_13 = VAR_15->qwBaseOffset;
            VAR_13 += VAR_16->dwOffset;
            VAR_13 = FUNC_12(VAR_13);

            ++VAR_8->pos_next;
            if (VAR_15->nEntriesInUse == VAR_8->pos_next)
            {
                VAR_8->pos_next = 0;
                ++VAR_8->index_next;
            }

            VAR_14 = VAR_13 + FUNC_12(VAR_16->dwSize & ~(1u << 31));

            FUNC_16("offset(%u) size(%u)\n", (DWORD)FUNC_0(VAR_13), (DWORD)FUNC_0(VAR_14 - VAR_13));
        }
        else if (VAR_6->oldindex)
        {
            DWORD VAR_17 = VAR_6->oldindex->aIndex[VAR_8->pos].dwFlags;
            DWORD VAR_18 = VAR_6->oldindex->aIndex[VAR_8->pos].dwSize;


            if (VAR_8->index)
            {
                FUNC_16("END OF STREAM ON %u\n", VAR_7);
                FUNC_5(VAR_10);
                return VAR_3;
            }

            VAR_13 = FUNC_12(VAR_6->offset);
            VAR_13 += FUNC_12(VAR_6->oldindex->aIndex[VAR_8->pos].dwOffset);
            VAR_14 = VAR_13 + FUNC_12(VAR_18);
            if (VAR_17 & VAR_1)
            {
                FUNC_3("Only stand alone frames are currently handled correctly!\n");
            }
            if (VAR_17 & VAR_0)
            {
                FUNC_3("Not sure if this is handled correctly\n");
                VAR_13 += FUNC_12(sizeof(RIFFLIST));
                VAR_14 += FUNC_12(sizeof(RIFFLIST));
            }
            else
            {
                VAR_13 += FUNC_12(sizeof(RIFFCHUNK));
                VAR_14 += FUNC_12(sizeof(RIFFCHUNK));
            }


            do {
                VAR_8->pos_next++;
            } while (VAR_8->pos_next * sizeof(VAR_6->oldindex->aIndex[0]) < VAR_6->oldindex->cb
                     && FUNC_15(VAR_6->oldindex->aIndex[VAR_8->pos_next].dwChunkId) != VAR_7);


            if (VAR_8->pos_next * sizeof(VAR_6->oldindex->aIndex[0]) >= VAR_6->oldindex->cb)
            {
                VAR_8->pos_next = 0;
                ++VAR_8->index_next;
            }
        }
        else
        {
            FUNC_1("CAN'T PLAY WITHOUT AN INDEX! SOS! SOS! SOS!\n");
            FUNC_17(0);
        }

        if (VAR_13 != VAR_14)
        {
            FUNC_10(VAR_10, &VAR_13, &VAR_14);
            VAR_11 = FUNC_4(VAR_9->pReader, VAR_10, VAR_7);

            if (FUNC_2(VAR_11))
            {
                VAR_12 = FUNC_5(VAR_10);
                FUNC_17(VAR_12 == 0);
            }
        }
        else
        {
            VAR_8->sample = VAR_10;
            FUNC_6(VAR_10, 0);
            FUNC_14(VAR_8->packet_queued);
        }
    }
    else
    {
        if (VAR_10)
        {
            FUNC_1("There should be no sample!\n");
            VAR_12 = FUNC_5(VAR_10);
            FUNC_17(VAR_12 == 0);
        }
    }
    FUNC_16("--> %08x\n", VAR_11);

    return VAR_11;
}
