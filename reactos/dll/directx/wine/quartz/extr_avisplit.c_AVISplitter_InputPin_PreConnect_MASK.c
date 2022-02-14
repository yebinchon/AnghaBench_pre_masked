
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_11__ ;


typedef int list ;
typedef size_t ULONG ;
struct TYPE_30__ {int cbBuffer; int cbAlign; int cBuffers; scalar_t__ cbPrefix; } ;
struct TYPE_21__ {int cb; int dwFlags; } ;
struct TYPE_23__ {int cStreams; } ;
struct TYPE_29__ {scalar_t__ EndOfFile; TYPE_11__ AviHeader; TYPE_2__ Parser; int * oldindex; TYPE_1__* streams; int CurrentChunk; void* CurrentChunkOffset; } ;
struct TYPE_24__ {scalar_t__ pFilter; } ;
struct TYPE_25__ {TYPE_3__ pinInfo; } ;
struct TYPE_28__ {scalar_t__ rtStop; int pReader; void* rtStart; TYPE_4__ pin; } ;
struct TYPE_27__ {int cb; int fcc; } ;
struct TYPE_26__ {scalar_t__ fcc; scalar_t__ fccListType; int cb; } ;
struct TYPE_22__ {scalar_t__ entries; } ;
typedef TYPE_5__ RIFFLIST ;
typedef TYPE_6__ RIFFCHUNK ;
typedef TYPE_7__ PullPin ;
typedef int LPSTR ;
typedef scalar_t__ LONGLONG ;
typedef int IPin ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BYTE ;
typedef TYPE_8__ AVISplitterImpl ;
typedef TYPE_9__ ALLOCATOR_PROPERTIES ;


 int VAR_0 ;
 int FUNC_0 (TYPE_8__*) ;
 scalar_t__ FUNC_1 (TYPE_8__*) ;
 scalar_t__ FUNC_2 (TYPE_8__*,int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_8__*) ;
 scalar_t__ FUNC_4 (TYPE_8__*,int *,int ,TYPE_9__*) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int) ;
 int FUNC_8 (char*,...) ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (char*,...) ;

 scalar_t__ VAR_2 ;
 int FUNC_10 () ;
 int * FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int *) ;
 int FUNC_13 (int ,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_14 (int ,scalar_t__,int,int *) ;
 void* FUNC_15 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_16 (char*) ;
 scalar_t__ VAR_4 ;




 scalar_t__ VAR_5 ;
 TYPE_7__* FUNC_17 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_18 (TYPE_11__*,TYPE_6__*,int) ;
 int FUNC_19 (TYPE_5__*,int ,int) ;
 int FUNC_20 (scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_21(IPin * VAR_8, IPin * VAR_9, ALLOCATOR_PROPERTIES *VAR_10)
{
    PullPin *VAR_11 = FUNC_17(VAR_8);
    HRESULT VAR_12;
    RIFFLIST VAR_13;
    LONGLONG VAR_14 = 0;
    BYTE * VAR_15;
    RIFFCHUNK * VAR_16;
    LONGLONG VAR_17, VAR_18;
    ULONG VAR_19;
    DWORD VAR_20;

    AVISplitterImpl * VAR_21 = (AVISplitterImpl *)VAR_11->pin.pinInfo.pFilter;

    VAR_12 = FUNC_14(VAR_11->pReader, VAR_14, sizeof(VAR_13), (BYTE *)&VAR_13);
    VAR_14 += sizeof(VAR_13);

    if (VAR_13.fcc != VAR_2)
    {
        FUNC_8("Input stream not a RIFF file\n");
        return VAR_1;
    }
    if (VAR_13.fccListType != VAR_5)
    {
        FUNC_8("Input stream not an AVI RIFF file\n");
        return VAR_1;
    }

    VAR_12 = FUNC_14(VAR_11->pReader, VAR_14, sizeof(VAR_13), (BYTE *)&VAR_13);
    if (VAR_13.fcc != 132)
    {
        FUNC_8("Expected LIST chunk, but got %.04s\n", (LPSTR)&VAR_13.fcc);
        return VAR_1;
    }
    if (VAR_13.fccListType != VAR_6)
    {
        FUNC_8("Header list expected. Got: %.04s\n", (LPSTR)&VAR_13.fccListType);
        return VAR_1;
    }

    VAR_15 = FUNC_11(FUNC_10(), 0, VAR_13.cb - sizeof(RIFFLIST) + sizeof(RIFFCHUNK));
    VAR_12 = FUNC_14(VAR_11->pReader, VAR_14 + sizeof(VAR_13), VAR_13.cb - sizeof(RIFFLIST) + sizeof(RIFFCHUNK), VAR_15);

    VAR_21->AviHeader.cb = 0;


    VAR_10->cbBuffer = 0x20000;

    for (VAR_16 = (RIFFCHUNK *)VAR_15; (BYTE *)VAR_16 + sizeof(*VAR_16) < VAR_15 + VAR_13.cb; VAR_16 = (RIFFCHUNK *)(((BYTE *)VAR_16) + sizeof(*VAR_16) + VAR_16->cb))
    {
        RIFFLIST * VAR_22;

        switch (VAR_16->fcc)
        {
        case 130:

            FUNC_18(&VAR_21->AviHeader, VAR_16, sizeof(VAR_21->AviHeader));
            break;
        case 132:
            VAR_22 = (RIFFLIST *)VAR_16;
            switch (VAR_22->fccListType)
            {
            case 128:
                VAR_12 = FUNC_4(VAR_21, (BYTE *)VAR_16 + sizeof(RIFFLIST), VAR_16->cb + sizeof(RIFFCHUNK) - sizeof(RIFFLIST), VAR_10);
                break;
            case 129:
                VAR_12 = FUNC_2(VAR_21, (BYTE *)VAR_16 + sizeof(RIFFLIST), VAR_16->cb + sizeof(RIFFCHUNK) - sizeof(RIFFLIST));
                break;
            }
            break;
        case 131:

            break;
        default:
            FUNC_9("unrecognised header list type: %.04s\n", (LPSTR)&VAR_16->fcc);
        }
    }
    FUNC_12(FUNC_10(), 0, VAR_15);

    if (VAR_21->AviHeader.cb != sizeof(VAR_21->AviHeader) - sizeof(RIFFCHUNK))
    {
        FUNC_8("Avi Header wrong size!\n");
        return VAR_1;
    }


    do
    {
        VAR_14 += sizeof(RIFFCHUNK) + VAR_13.cb;
        VAR_12 = FUNC_14(VAR_11->pReader, VAR_14, sizeof(VAR_13), (BYTE *)&VAR_13);
    }
    while (VAR_12 == VAR_3 && (VAR_13.fcc != 132 || VAR_13.fccListType != VAR_7));

    if (VAR_12 != VAR_3)
    {
        FUNC_8("Failed to find LIST chunk from AVI file\n");
        return VAR_1;
    }

    FUNC_13(VAR_11->pReader, &VAR_17, &VAR_18);



    VAR_11->rtStart = VAR_21->CurrentChunkOffset = FUNC_15(VAR_14 + sizeof(RIFFLIST));
    VAR_14 += VAR_13.cb + sizeof(RIFFCHUNK);

    VAR_21->EndOfFile = VAR_11->rtStop = FUNC_15(VAR_14);
    if (VAR_14 > VAR_17)
    {
        FUNC_8("File smaller (%s) then EndOfFile (%s)\n", FUNC_20(VAR_17), FUNC_20(VAR_21->EndOfFile));
        return VAR_1;
    }

    VAR_12 = FUNC_14(VAR_11->pReader, FUNC_5(VAR_21->CurrentChunkOffset), sizeof(VAR_21->CurrentChunk), (BYTE *)&VAR_21->CurrentChunk);

    VAR_10->cbAlign = 1;
    VAR_10->cbPrefix = 0;

    VAR_10->cBuffers = 2 * VAR_21->Parser.cStreams;


    if (VAR_12 == VAR_3 && (VAR_17 - VAR_14) > sizeof(RIFFCHUNK))
    {
        FUNC_19(&VAR_13, 0, sizeof(VAR_13));

        VAR_12 = FUNC_14(VAR_11->pReader, VAR_14, sizeof(VAR_13), (BYTE *)&VAR_13);
        if (VAR_13.fcc == VAR_4)
        {
            VAR_21->oldindex = FUNC_7(VAR_21->oldindex, VAR_13.cb + sizeof(RIFFCHUNK));
            if (VAR_21->oldindex)
            {
                VAR_12 = FUNC_14(VAR_11->pReader, VAR_14, sizeof(RIFFCHUNK) + VAR_13.cb, (BYTE *)VAR_21->oldindex);
                if (VAR_12 == VAR_3)
                {
                    VAR_12 = FUNC_3(VAR_21);
                }
                else
                {
                    FUNC_6(VAR_21->oldindex);
                    VAR_21->oldindex = ((void*)0);
                    VAR_12 = VAR_3;
                }
            }
        }
    }

    VAR_20 = 0;
    for (VAR_19 = 0; VAR_19 < VAR_21->Parser.cStreams; ++VAR_19)
        if (VAR_21->streams[VAR_19].entries)
            ++VAR_20;

    if (VAR_20)
    {
        FUNC_6(VAR_21->oldindex);
        VAR_21->oldindex = ((void*)0);
        if (VAR_20 < VAR_21->Parser.cStreams)
        {



            FUNC_8("%d indexes expected, but only have %d\n", VAR_20, VAR_21->Parser.cStreams);
            VAR_20 = 0;
        }
    }
    else if (VAR_21->oldindex)
        VAR_20 = VAR_21->Parser.cStreams;

    if (!VAR_20 && VAR_21->AviHeader.dwFlags & VAR_0)
    {
        FUNC_9("No usable index was found!\n");
        VAR_12 = VAR_1;
    }


    if (VAR_12 == VAR_3)
        VAR_12 = FUNC_1(VAR_21);

    if (VAR_12 != VAR_3)
    {
        FUNC_0(VAR_21);
        return VAR_1;
    }

    FUNC_16("AVI File ok\n");

    return VAR_12;
}
