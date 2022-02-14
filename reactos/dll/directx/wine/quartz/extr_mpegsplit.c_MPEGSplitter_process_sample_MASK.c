
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ llStop; } ;
struct TYPE_10__ {unsigned int cStreams; int * ppPins; TYPE_2__ sourceSeeking; TYPE_1__* pInputPin; } ;
struct TYPE_11__ {scalar_t__ position; scalar_t__ EndOfFile; TYPE_3__ Parser; int header; } ;
struct TYPE_8__ {void* rtCurrent; } ;
typedef void* REFERENCE_TIME ;
typedef TYPE_4__ MPEGSplitterImpl ;
typedef TYPE_4__* LPVOID ;
typedef int IPin ;
typedef int IMediaSample ;
typedef scalar_t__ HRESULT ;
typedef int DWORD_PTR ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int **) ;
 scalar_t__ FUNC_6 (int *,void**,void**) ;
 scalar_t__ FUNC_7 (int ,int **) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_11 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_12 (char*,unsigned int,...) ;
 int FUNC_13 (int ,int *,int) ;

__attribute__((used)) static HRESULT FUNC_14(LPVOID VAR_3, IMediaSample * VAR_4, DWORD_PTR VAR_5)
{
    MPEGSplitterImpl *VAR_6 = VAR_3;
    BYTE *VAR_7;
    DWORD VAR_8 = 0;
    REFERENCE_TIME VAR_9, VAR_10, VAR_11 = VAR_6->position;
    HRESULT VAR_12;

    VAR_12 = FUNC_6(VAR_4, &VAR_9, &VAR_10);
    if (FUNC_10(VAR_12))
    {
        VAR_8 = FUNC_4(VAR_4);
        VAR_12 = FUNC_5(VAR_4, &VAR_7);
    }


    if (VAR_8 == 0)
    {
        FUNC_2(".. Why do I need you?\n");
        return VAR_1;
    }





    VAR_12 = FUNC_3(VAR_6, VAR_4);
    if (VAR_12 != VAR_1)
    {
        FUNC_12("Failed with hres: %08x!\n", VAR_12);


        if (VAR_12 == VAR_2 || VAR_12 == VAR_0)
        {
            FUNC_13(VAR_6->header, VAR_7, 4);
            VAR_6->Parser.pInputPin->rtCurrent = VAR_9;
            VAR_6->position = VAR_11;
        }
    }

    if (FUNC_0(VAR_10) >= VAR_6->EndOfFile || VAR_6->position >= VAR_6->Parser.sourceSeeking.llStop)
    {
        unsigned int VAR_13;

        FUNC_11("End of file reached\n");

        for (VAR_13 = 0; VAR_13 < VAR_6->Parser.cStreams; VAR_13++)
        {
            IPin* VAR_14;

            VAR_12 = FUNC_7(VAR_6->Parser.ppPins[VAR_13+1], &VAR_14);
            if (FUNC_10(VAR_12))
            {
                VAR_12 = FUNC_8(VAR_14);
                FUNC_9(VAR_14);
            }
            if (FUNC_1(VAR_12))
                FUNC_12("Error sending EndOfStream to pin %u (%x)\n", VAR_13, VAR_12);
        }


        VAR_12 = VAR_0;
    }

    return VAR_12;
}
