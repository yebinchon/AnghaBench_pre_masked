
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;


struct TYPE_22__ {int nBlockAlign; int nAvgBytesPerSec; } ;
typedef TYPE_5__ WAVEFORMATEX ;
typedef int UINT ;
struct TYPE_26__ {int cbAlign; int cbBuffer; int cBuffers; int cbPrefix; } ;
struct TYPE_25__ {scalar_t__ pbFormat; } ;
struct TYPE_19__ {int llDuration; int llStop; int llCurrent; } ;
struct TYPE_17__ {TYPE_2__ sourceSeeking; TYPE_1__* pInputPin; } ;
struct TYPE_24__ {int EndOfFile; int begin_offset; scalar_t__ position; TYPE_11__ Parser; int header; } ;
struct TYPE_20__ {scalar_t__ pFilter; } ;
struct TYPE_21__ {TYPE_3__ pinInfo; } ;
struct TYPE_23__ {int pReader; TYPE_4__ pin; } ;
struct TYPE_18__ {void* rtCurrent; void* rtStart; void* rtStop; } ;
typedef TYPE_6__ PullPin ;
typedef int PIN_INFO ;
typedef TYPE_7__ MPEGSplitterImpl ;
typedef int LONGLONG ;
typedef int IPin ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BYTE ;
typedef TYPE_8__ AM_MEDIA_TYPE ;
typedef TYPE_9__ ALLOCATOR_PROPERTIES ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int*,int*) ;
 int FUNC_5 (int ,int,int,int*) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (TYPE_7__*,int*,int *,TYPE_8__*) ;



 int FUNC_9 (TYPE_11__*,int *,TYPE_9__*,TYPE_8__*) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_11 (char*,int,...) ;
 TYPE_6__* FUNC_12 (int *) ;
 int FUNC_13 (char*,int*,int) ;
 int FUNC_14 (int ,int*,int) ;
 int FUNC_15 (int*,int*,int) ;
 scalar_t__ FUNC_16 (int*,int*,int *) ;
 int FUNC_17 (char*,char*,int) ;

__attribute__((used)) static HRESULT FUNC_18(IPin *VAR_2, IPin *VAR_3, ALLOCATOR_PROPERTIES *VAR_4)
{
    PullPin *VAR_5 = FUNC_12(VAR_2);
    MPEGSplitterImpl *VAR_6 = (MPEGSplitterImpl*)VAR_5->pin.pinInfo.pFilter;
    HRESULT VAR_7;
    LONGLONG VAR_8 = 0;
    BYTE VAR_9[10];
    int VAR_10;
    LONGLONG VAR_11, VAR_12;
    AM_MEDIA_TYPE VAR_13;
    PIN_INFO VAR_14;

    FUNC_4(VAR_5->pReader, &VAR_11, &VAR_12);
    VAR_6->EndOfFile = VAR_11;

    VAR_7 = FUNC_5(VAR_5->pReader, VAR_8, 4, VAR_9);
    if (FUNC_10(VAR_7))
        VAR_8 += 4;


    if (FUNC_10(VAR_7) && !FUNC_13("ID3", VAR_9, 3))
    do {
        UINT VAR_15 = 0;
        VAR_7 = FUNC_5(VAR_5->pReader, VAR_8, 6, VAR_9 + 4);
        if (FUNC_2(VAR_7))
            break;
        VAR_8 += 6;
        FUNC_11("Found ID3 v2.%d.%d\n", VAR_9[3], VAR_9[4]);
        if(VAR_9[3] <= 4 && VAR_9[4] != 0xff &&
           (VAR_9[5]&0x0f) == 0 && (VAR_9[6]&0x80) == 0 &&
           (VAR_9[7]&0x80) == 0 && (VAR_9[8]&0x80) == 0 &&
           (VAR_9[9]&0x80) == 0)
        {
            VAR_15 = (VAR_9[6]<<21) | (VAR_9[7]<<14) |
                     (VAR_9[8]<< 7) | (VAR_9[9] );
            if((VAR_9[5]&0x10))
                VAR_15 += 10;
            FUNC_11("Length: %u\n", VAR_15);
        }
        VAR_8 += VAR_15;


        VAR_7 = FUNC_5(VAR_5->pReader, VAR_8, 4, VAR_9);
        if (FUNC_10(VAR_7))
            VAR_8 += 4;
    } while (0);

    while(FUNC_10(VAR_7))
    {
        FUNC_11("Testing header %x:%x:%x:%x\n", VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3]);

        VAR_10 = FUNC_7(VAR_9);
        if (VAR_10 == 130)
        {
            LONGLONG VAR_16;
            if (FUNC_16(VAR_9, &VAR_16, ((void*)0)) == VAR_1)
            {
                BYTE VAR_17[4];






                VAR_7 = FUNC_5(VAR_5->pReader, VAR_8 + VAR_16 - 4, 4, VAR_17);
                if (FUNC_2(VAR_7))
                    break;
                if (FUNC_16(VAR_17, &VAR_16, ((void*)0)) == VAR_1)
                    break;
                FUNC_11("%x:%x:%x:%x is a fake audio header, looking for next...\n",
                      VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3]);
            }
        }
        else if (VAR_10)
            break;


        FUNC_15(VAR_9, VAR_9+1, 3);
        VAR_7 = FUNC_5(VAR_5->pReader, VAR_8++, 1, VAR_9 + 3);
    }
    if (FUNC_2(VAR_7))
        return VAR_7;
    VAR_8 -= 4;
    VAR_6->begin_offset = VAR_8;
    FUNC_14(VAR_6->header, VAR_9, 4);

    switch(VAR_10)
    {
        case 130:
        {
            LONGLONG VAR_18 = 0;
            WAVEFORMATEX *VAR_19;

            VAR_7 = FUNC_8(VAR_6, VAR_9, &VAR_14, &VAR_13);
            if (FUNC_10(VAR_7))
            {
                VAR_19 = (WAVEFORMATEX*)VAR_13.pbFormat;

                VAR_4->cbAlign = 1;
                VAR_4->cbPrefix = 0;

                VAR_4->cbBuffer = 0x4000 / VAR_19->nBlockAlign *
                                 VAR_19->nBlockAlign;
                VAR_4->cBuffers = 3;
                VAR_7 = FUNC_9(&(VAR_6->Parser), &VAR_14, VAR_4, &VAR_13);
            }

            if (FUNC_2(VAR_7))
            {
                FUNC_0(VAR_13.pbFormat);
                FUNC_1("Could not create pin for MPEG audio stream (%x)\n", VAR_7);
                break;
            }


            VAR_7 = FUNC_5(VAR_5->pReader, VAR_6->EndOfFile-128, 3, VAR_9);
            if (FUNC_2(VAR_7))
                break;
            if (!FUNC_17((char*)VAR_9, "TAG", 3))
                VAR_6->EndOfFile -= 128;
            VAR_6->Parser.pInputPin->rtStop = FUNC_6(VAR_6->EndOfFile);
            VAR_6->Parser.pInputPin->rtStart = VAR_6->Parser.pInputPin->rtCurrent = FUNC_6(VAR_6->begin_offset);

            VAR_18 = (VAR_6->EndOfFile-VAR_6->begin_offset) * 10000000 / VAR_19->nAvgBytesPerSec;
            FUNC_11("Duration: %d seconds\n", (DWORD)(VAR_18 / 10000000));

            VAR_6->Parser.sourceSeeking.llCurrent = 0;
            VAR_6->Parser.sourceSeeking.llDuration = VAR_18;
            VAR_6->Parser.sourceSeeking.llStop = VAR_18;
            break;
        }
        case 128:
            FUNC_3("MPEG video processing not yet supported!\n");
            VAR_7 = VAR_0;
            break;
        case 129:
            FUNC_3("MPEG system streams not yet supported!\n");
            VAR_7 = VAR_0;
            break;

        default:
            break;
    }
    VAR_6->position = 0;

    return VAR_7;
}
