
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_13__ {int csFilter; } ;
struct TYPE_12__ {double dRate; int llStop; } ;
struct TYPE_14__ {TYPE_2__ filter; TYPE_1__ sourceSeeking; TYPE_5__* pInputPin; int * ppPins; } ;
struct TYPE_18__ {int position; TYPE_3__ Parser; int * header; } ;
struct TYPE_15__ {int tStart; double dRate; int IPin_iface; } ;
struct TYPE_11__ {TYPE_4__ pin; } ;
struct TYPE_17__ {TYPE_10__ pin; } ;
struct TYPE_16__ {int rtNext; int rtStop; int rtCurrent; int pReader; int pAlloc; int cbAlign; } ;
typedef TYPE_5__ PullPin ;
typedef TYPE_6__ Parser_OutputPin ;
typedef TYPE_7__ MPEGSplitterImpl ;
typedef int LONGLONG ;
typedef int IPin ;
typedef int IMediaSample ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_10__*,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_5 (char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int ,int,int,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int **) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int*,int*) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int*,int*) ;
 scalar_t__ FUNC_18 (int ,int **,int *,int *,int ) ;
 scalar_t__ FUNC_19 (int *,int **) ;
 scalar_t__ FUNC_20 (int *,int,int ,double) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int) ;
 scalar_t__ FUNC_24 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_25 (char*,scalar_t__,...) ;
 int VAR_3 ;
 int FUNC_26 (int) ;
 int FUNC_27 (int *,int *,int) ;
 int FUNC_28 (int *,int *,int) ;
 scalar_t__ FUNC_29 (int *,int*,int*) ;
 TYPE_6__* FUNC_30 (int ) ;

__attribute__((used)) static HRESULT FUNC_31(MPEGSplitterImpl *VAR_4, IMediaSample *VAR_5)
{
    Parser_OutputPin * VAR_6 = FUNC_30(VAR_4->Parser.ppPins[1]);
    LONGLONG VAR_7 = 0;
    LONGLONG VAR_8 = FUNC_1(VAR_4->Parser.pInputPin->rtNext);
    LONGLONG VAR_9 = VAR_4->position, VAR_10, VAR_11;
    HRESULT VAR_12;
    BYTE *VAR_13 = ((void*)0);
    DWORD VAR_14 = FUNC_8(VAR_5);

    FUNC_25("Source length: %u\n", VAR_14);
    FUNC_9(VAR_5, &VAR_13);


    VAR_12 = FUNC_29(VAR_13, &VAR_7, &VAR_4->position);
    FUNC_26(VAR_12 == VAR_2);
    FUNC_12(VAR_5, VAR_7);


    if (VAR_7 + 4 == VAR_14)
    {
        PullPin *VAR_15 = VAR_4->Parser.pInputPin;
        LONGLONG VAR_16 = FUNC_1(VAR_15->rtStop);

        VAR_12 = VAR_2;
        FUNC_27(VAR_4->header, VAR_13 + VAR_7, 4);
        while (FUNC_4(VAR_12 = FUNC_29(VAR_4->header, &VAR_7, ((void*)0))))
        {
            FUNC_28(VAR_4->header, VAR_4->header+1, 3);
            if (VAR_8 + 4 >= VAR_16)
                break;
            FUNC_7(VAR_15->pReader, ++VAR_8, 1, VAR_4->header + 3);
        }
        VAR_15->rtNext = FUNC_23(VAR_8);

        if (FUNC_24(VAR_12))
        {

            IMediaSample *VAR_17 = ((void*)0);
            LONGLONG VAR_18 = VAR_15->rtNext - FUNC_23(4);
            LONGLONG VAR_19 = VAR_18 + FUNC_23(VAR_7 + 4);

            if (VAR_19 > VAR_15->rtStop)
                VAR_19 = FUNC_23(FUNC_0(FUNC_1(VAR_15->rtStop), VAR_15->cbAlign));

            VAR_12 = FUNC_18(VAR_15->pAlloc, &VAR_17, ((void*)0), ((void*)0), 0);
            if (FUNC_24(VAR_12))
            {
                FUNC_17(VAR_17, &VAR_18, &VAR_19);
                FUNC_15(VAR_17, VAR_0);
                FUNC_13(VAR_17, VAR_0);
                FUNC_16(VAR_17, VAR_3);
                VAR_12 = FUNC_6(VAR_15->pReader, VAR_17, 0);
                if (FUNC_24(VAR_12))
                {
                    VAR_15->rtCurrent = VAR_18;
                    VAR_15->rtNext = VAR_19;
                }
                else
                    FUNC_11(VAR_17);
            }
            if (FUNC_4(VAR_12))
                FUNC_5("o_Ox%08x\n", VAR_12);
        }
    }


    FUNC_25("Media time : %u.%03u\n", (DWORD)(VAR_4->position/10000000), (DWORD)((VAR_4->position/10000)%1000));

    if (FUNC_10(VAR_5) == VAR_2) {
        IPin *VAR_20;
        FUNC_3(&VAR_4->Parser.filter.csFilter);
        VAR_6->pin.pin.tStart = VAR_9;
        VAR_6->pin.pin.dRate = VAR_4->Parser.sourceSeeking.dRate;
        VAR_12 = FUNC_19(&VAR_6->pin.pin.IPin_iface, &VAR_20);
        if (VAR_12 == VAR_2)
        {
            VAR_12 = FUNC_20(VAR_20, VAR_9, VAR_4->Parser.sourceSeeking.llStop,
                                 VAR_4->Parser.sourceSeeking.dRate);
            if (VAR_12 != VAR_2)
                FUNC_5("NewSegment returns %08x\n", VAR_12);
            FUNC_21(VAR_20);
        }
        FUNC_22(&VAR_4->Parser.filter.csFilter);
        if (VAR_12 != VAR_2)
            return VAR_12;
    }
    VAR_11 = (double)(VAR_9 - VAR_6->pin.pin.tStart) / VAR_6->pin.pin.dRate;
    VAR_10 = (double)(VAR_4->position - VAR_6->pin.pin.tStart) / VAR_6->pin.pin.dRate;
    FUNC_17(VAR_5, &VAR_11, &VAR_10);
    FUNC_14(VAR_5, &VAR_9, &VAR_4->position);

    VAR_12 = FUNC_2(&VAR_6->pin, VAR_5);

    if (VAR_12 != VAR_2)
    {
        if (VAR_12 != VAR_1)
            FUNC_25("Error sending sample (%x)\n", VAR_12);
        else
            FUNC_25("S_FALSE (%d), holding\n", FUNC_8(VAR_5));
    }

    return VAR_12;
}
