
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int ULONG ;
struct TYPE_15__ {int csFilter; } ;
struct TYPE_14__ {double dRate; int llStop; } ;
struct TYPE_16__ {TYPE_3__ filter; TYPE_2__ sourceSeeking; int * ppPins; } ;
struct TYPE_20__ {TYPE_4__ Parser; TYPE_6__* streams; } ;
struct TYPE_17__ {int tStart; double dRate; int IPin_iface; } ;
struct TYPE_12__ {TYPE_5__ pin; } ;
struct TYPE_19__ {int dwSamplesProcessed; TYPE_10__ pin; } ;
struct TYPE_13__ {int dwScale; int dwRate; int dwSampleSize; } ;
struct TYPE_18__ {TYPE_1__ streamheader; } ;
typedef TYPE_6__ StreamData ;
typedef TYPE_7__ Parser_OutputPin ;
typedef int LONGLONG ;
typedef int IPin ;
typedef int IMediaSample ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef TYPE_8__ AVISplitterImpl ;


 scalar_t__ FUNC_0 (TYPE_10__*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int*,int*) ;
 int FUNC_6 (int *,int*,int*) ;
 scalar_t__ FUNC_7 (int *,int **) ;
 scalar_t__ FUNC_8 (int *,int,int ,double) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_0 ;
 TYPE_7__* FUNC_11 (int ) ;

__attribute__((used)) static HRESULT FUNC_12(AVISplitterImpl *VAR_1, IMediaSample *VAR_2, DWORD VAR_3)
{
    Parser_OutputPin *VAR_4 = FUNC_11(VAR_1->Parser.ppPins[1+VAR_3]);
    HRESULT VAR_5;
    LONGLONG VAR_6, VAR_7, VAR_8, VAR_9;
    StreamData *VAR_10 = &VAR_1->streams[VAR_3];

    VAR_6 = VAR_4->dwSamplesProcessed;
    VAR_6 *= VAR_10->streamheader.dwScale;
    VAR_6 *= 10000000;
    VAR_6 /= VAR_10->streamheader.dwRate;

    if (VAR_10->streamheader.dwSampleSize)
    {
        ULONG VAR_11 = FUNC_3(VAR_2);
        ULONG VAR_12 = VAR_10->streamheader.dwSampleSize;

        VAR_4->dwSamplesProcessed += VAR_11 / VAR_12;
    }
    else
        ++VAR_4->dwSamplesProcessed;

    VAR_7 = VAR_4->dwSamplesProcessed;
    VAR_7 *= VAR_10->streamheader.dwScale;
    VAR_7 *= 10000000;
    VAR_7 /= VAR_10->streamheader.dwRate;

    if (FUNC_4(VAR_2) == VAR_0) {
        IPin *VAR_13;
        FUNC_1(&VAR_1->Parser.filter.csFilter);
        VAR_4->pin.pin.tStart = VAR_6;
        VAR_4->pin.pin.dRate = VAR_1->Parser.sourceSeeking.dRate;
        VAR_5 = FUNC_7(&VAR_4->pin.pin.IPin_iface, &VAR_13);
        if (VAR_5 == VAR_0)
        {
            VAR_5 = FUNC_8(VAR_13, VAR_6, VAR_1->Parser.sourceSeeking.llStop,
                                 VAR_1->Parser.sourceSeeking.dRate);
            if (VAR_5 != VAR_0)
                FUNC_2("NewSegment returns %08x\n", VAR_5);
            FUNC_9(VAR_13);
        }
        FUNC_10(&VAR_1->Parser.filter.csFilter);
        if (VAR_5 != VAR_0)
            return VAR_5;
    }
    VAR_8 = (double)(VAR_6 - VAR_4->pin.pin.tStart) / VAR_4->pin.pin.dRate;
    VAR_9 = (double)(VAR_7 - VAR_4->pin.pin.tStart) / VAR_4->pin.pin.dRate;
    FUNC_5(VAR_2, &VAR_6, &VAR_7);
    FUNC_6(VAR_2, &VAR_8, &VAR_9);
    FUNC_5(VAR_2, &VAR_6, &VAR_7);

    VAR_5 = FUNC_0(&VAR_4->pin, VAR_2);
    return VAR_5;
}
