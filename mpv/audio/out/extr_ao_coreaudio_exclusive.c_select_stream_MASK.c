
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct priv {int stream_idx; int stream; scalar_t__ spdif_hack; int device; } ;
struct ao {int format; struct priv* priv; } ;
typedef int OSStatus ;
typedef int AudioStreamID ;


 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int ,int ,int **,size_t*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct ao*,char*) ;
 int FUNC_5 (struct ao*,char*,int,...) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct ao*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct ao *VAR_3)
{
    struct priv *VAR_4 = VAR_3->priv;

    AudioStreamID *VAR_5;
    size_t VAR_6;
    OSStatus VAR_7;


    VAR_7 = FUNC_1(VAR_4->device, VAR_0,
                       &VAR_5, &VAR_6);
    FUNC_2("could not get number of streams");
    for (int VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        uint32_t VAR_9;
        VAR_7 = FUNC_0(VAR_5[VAR_8], VAR_1, &VAR_9);
        FUNC_3("could not get stream direction");
        if (VAR_7 == VAR_2 && VAR_9 != 0) {
            FUNC_5(VAR_3, "Substream %d is not an output stream.\n", VAR_8);
            continue;
        }

        if (FUNC_6(VAR_3->format) || VAR_4->spdif_hack ||
            FUNC_7(VAR_3, VAR_5[VAR_8]))
        {
            FUNC_5(VAR_3, "Using substream %d/%zd.\n", VAR_8, VAR_6);
            VAR_4->stream = VAR_5[VAR_8];
            VAR_4->stream_idx = VAR_8;
            break;
        }
    }

    FUNC_8(VAR_5);

    if (VAR_4->stream_idx < 0) {
        FUNC_4(VAR_3, "No useable substream found.\n");
        goto coreaudio_error;
    }

    return 0;

coreaudio_error:
    return -1;
}
