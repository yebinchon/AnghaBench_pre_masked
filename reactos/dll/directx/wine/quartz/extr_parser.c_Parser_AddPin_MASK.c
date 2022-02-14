
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int IBaseFilter_iface; int csFilter; } ;
struct TYPE_13__ {int cStreams; int ** ppPins; TYPE_8__ filter; } ;
struct TYPE_9__ {int * pFilter; } ;
struct TYPE_10__ {TYPE_1__ pinInfo; } ;
struct TYPE_11__ {TYPE_2__ pin; } ;
struct TYPE_12__ {int allocProps; TYPE_3__ pin; scalar_t__ dwSamplesProcessed; void* pmt; } ;
typedef TYPE_4__ Parser_OutputPin ;
typedef TYPE_5__ ParserImpl ;
typedef int PIN_INFO ;
typedef int IPin ;
typedef int HRESULT ;
typedef int AM_MEDIA_TYPE ;
typedef int ALLOCATOR_PROPERTIES ;


 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (int *,int,int const*,int *,int *,int **) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (void*,int const*) ;
 int FUNC_5 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int **,int **,int) ;
 int VAR_1 ;
 TYPE_4__* FUNC_8 (int *) ;

HRESULT FUNC_9(ParserImpl * VAR_2, const PIN_INFO * VAR_3, ALLOCATOR_PROPERTIES * VAR_4, const AM_MEDIA_TYPE * VAR_5)
{
    IPin ** VAR_6;
    HRESULT VAR_7;

    VAR_6 = VAR_2->ppPins;

    VAR_2->ppPins = FUNC_2((VAR_2->cStreams + 2) * sizeof(IPin *));
    FUNC_7(VAR_2->ppPins, VAR_6, (VAR_2->cStreams + 1) * sizeof(IPin *));

    VAR_7 = FUNC_1(&VAR_0, sizeof(Parser_OutputPin), VAR_3, &VAR_1, &VAR_2->filter.csFilter, VAR_2->ppPins + (VAR_2->cStreams + 1));

    if (FUNC_6(VAR_7))
    {
        IPin *VAR_8 = VAR_2->ppPins[VAR_2->cStreams + 1];
        Parser_OutputPin *VAR_9 = FUNC_8(VAR_8);
        VAR_9->pmt = FUNC_2(sizeof(AM_MEDIA_TYPE));
        FUNC_4(VAR_9->pmt, VAR_5);
        VAR_9->dwSamplesProcessed = 0;

        VAR_9->pin.pin.pinInfo.pFilter = &VAR_2->filter.IBaseFilter_iface;
        VAR_9->allocProps = *VAR_4;
        VAR_2->cStreams++;
        FUNC_0(&VAR_2->filter);
        FUNC_3(VAR_6);
    }
    else
    {
        FUNC_3(VAR_2->ppPins);
        VAR_2->ppPins = VAR_6;
        FUNC_5("Failed with error %x\n", VAR_7);
    }

    return VAR_7;
}
