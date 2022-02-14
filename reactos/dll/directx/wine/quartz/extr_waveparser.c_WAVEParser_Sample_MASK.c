
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ llStop; } ;
struct TYPE_11__ {unsigned int cStreams; int * ppPins; TYPE_1__ sourceSeeking; TYPE_4__* pInputPin; } ;
struct TYPE_12__ {scalar_t__ EndOfFile; TYPE_2__ Parser; } ;
typedef TYPE_3__ WAVEParserImpl ;
typedef scalar_t__ ULONG ;
struct TYPE_14__ {int pin; int dwSamplesProcessed; } ;
struct TYPE_13__ {scalar_t__ rtNext; scalar_t__ rtStop; scalar_t__ rtCurrent; int pReader; int cbAlign; int pAlloc; } ;
typedef scalar_t__ REFERENCE_TIME ;
typedef TYPE_4__ PullPin ;
typedef TYPE_5__ Parser_OutputPin ;
typedef TYPE_3__* LPVOID ;
typedef int * LPBYTE ;
typedef scalar_t__ LONGLONG ;
typedef int IPin ;
typedef int IMediaSample ;
typedef scalar_t__ HRESULT ;
typedef int DWORD_PTR ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int ,int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int **) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,scalar_t__*,scalar_t__*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_14 (int ,int **,int *,int *,int ) ;
 scalar_t__ FUNC_15 (int ,int **) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_20 (char*,...) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_21 (TYPE_3__*,scalar_t__) ;
 TYPE_5__* FUNC_22 (int ) ;

__attribute__((used)) static HRESULT FUNC_23(LPVOID VAR_6, IMediaSample * VAR_7, DWORD_PTR VAR_8)
{
    WAVEParserImpl *VAR_9 = VAR_6;
    LPBYTE VAR_10 = ((void*)0);
    ULONG VAR_11 = 0;
    REFERENCE_TIME VAR_12, VAR_13;
    HRESULT VAR_14;
    IMediaSample *VAR_15 = ((void*)0);
    Parser_OutputPin *VAR_16;
    PullPin *VAR_17 = VAR_9->Parser.pInputPin;

    FUNC_7(VAR_7, &VAR_10);
    VAR_14 = FUNC_9(VAR_7, &VAR_12, &VAR_13);

    VAR_11 = FUNC_6(VAR_7);


    if (VAR_11 == 0)
    {
        FUNC_20(".. Why do I need you?\n");
        return VAR_2;
    }

    VAR_16 = FUNC_22(VAR_9->Parser.ppPins[1]);

    if (FUNC_19(VAR_14))
        VAR_14 = FUNC_14(VAR_17->pAlloc, &VAR_15, ((void*)0), ((void*)0), 0);

    if (FUNC_19(VAR_14))
    {
        LONGLONG VAR_18 = VAR_17->rtNext;

        LONGLONG VAR_19 = VAR_18 + FUNC_18(FUNC_8(VAR_15));

        if (VAR_19 > VAR_17->rtStop)
            VAR_19 = FUNC_18(FUNC_0(FUNC_1(VAR_17->rtStop), VAR_17->cbAlign));

        FUNC_13(VAR_15, &VAR_18, &VAR_19);

        VAR_17->rtCurrent = VAR_17->rtNext;
        VAR_17->rtNext = VAR_19;

        FUNC_11(VAR_15, VAR_0);
        FUNC_10(VAR_15, VAR_0);
        FUNC_12(VAR_15, VAR_3);

        VAR_14 = FUNC_5(VAR_17->pReader, VAR_15, 0);
    }

    if (FUNC_19(VAR_14))
    {
        REFERENCE_TIME VAR_20, VAR_21;

        FUNC_12(VAR_7, VAR_3);
        VAR_16->dwSamplesProcessed++;

        VAR_20 = FUNC_21(VAR_9, VAR_12);
        VAR_21 = FUNC_21(VAR_9, VAR_12 + FUNC_18(FUNC_6(VAR_7)));

        FUNC_13(VAR_7, &VAR_20, &VAR_21);

        VAR_14 = FUNC_2(&VAR_16->pin, VAR_7);
        if (VAR_14 != VAR_2 && VAR_14 != VAR_1 && VAR_14 != VAR_5)
            FUNC_3("Error sending sample (%x)\n", VAR_14);
        else if (VAR_14 != VAR_2)

            VAR_9->Parser.pInputPin->rtCurrent = VAR_12;
    }

    if (VAR_13 >= VAR_9->EndOfFile || (FUNC_21(VAR_9, VAR_13) >= VAR_9->Parser.sourceSeeking.llStop) || VAR_14 == VAR_4)
    {
        unsigned int VAR_22;

        FUNC_20("End of file reached\n");

        for (VAR_22 = 0; VAR_22 < VAR_9->Parser.cStreams; VAR_22++)
        {
            IPin* VAR_23;
            HRESULT VAR_24;

            FUNC_20("Send End Of Stream to output pin %u\n", VAR_22);

            VAR_24 = FUNC_15(VAR_9->Parser.ppPins[VAR_22+1], &VAR_23);
            if (FUNC_19(VAR_24))
            {
                VAR_24 = FUNC_16(VAR_23);
                FUNC_17(VAR_23);
            }
            if (FUNC_4(VAR_24))
            {
                FUNC_3("%x\n", VAR_24);
                break;
            }
        }


        VAR_14 = VAR_1;
    }

    return VAR_14;
}
