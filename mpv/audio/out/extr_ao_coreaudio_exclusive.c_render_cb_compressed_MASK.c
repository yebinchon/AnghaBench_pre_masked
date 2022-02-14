
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct priv {size_t stream_idx; scalar_t__ spdif_hack; scalar_t__ hw_latency_us; } ;
struct TYPE_5__ {int num; } ;
struct ao {int sstride; TYPE_1__ channels; struct priv* priv; } ;
typedef int int64_t ;
struct TYPE_7__ {int mDataByteSize; int mData; } ;
struct TYPE_6__ {TYPE_3__* mBuffers; } ;
typedef int OSStatus ;
typedef int AudioTimeStamp ;
typedef int AudioDeviceID ;
typedef TYPE_2__ AudioBufferList ;
typedef TYPE_3__ AudioBuffer ;


 int FUNC_0 (struct ao*,char*,int) ;
 int FUNC_1 (struct ao*,int *,int,int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct ao*,int) ;
 scalar_t__ FUNC_4 (int const*) ;
 int VAR_0 ;
 int FUNC_5 () ;
 int VAR_1 ;

__attribute__((used)) static OSStatus FUNC_6(
        AudioDeviceID VAR_2, const AudioTimeStamp *VAR_3,
        const void *VAR_4, const AudioTimeStamp *VAR_5,
        AudioBufferList *VAR_6, const AudioTimeStamp *VAR_7, void *VAR_8)
{
    struct ao *VAR_9 = VAR_8;
    struct priv *VAR_10 = VAR_9->priv;
    AudioBuffer VAR_11 = VAR_6->mBuffers[VAR_10->stream_idx];
    int VAR_12 = VAR_11.mDataByteSize;
    int VAR_13 = VAR_10->spdif_hack ? 4 * VAR_9->channels.num : VAR_9->sstride;

    int VAR_14 = VAR_12 / VAR_13;


    if (VAR_14 * VAR_13 != VAR_12) {
        FUNC_0(VAR_9, "Unsupported unaligned read of %d bytes.\n", VAR_12);
        return VAR_0;
    }

    int64_t VAR_15 = FUNC_5();
    VAR_15 += VAR_10->hw_latency_us + FUNC_4(VAR_3)
        + FUNC_3(VAR_9, VAR_14);

    FUNC_1(VAR_9, &VAR_11.mData, VAR_14, VAR_15);

    if (VAR_10->spdif_hack)
        FUNC_2(VAR_11.mData, VAR_14 * VAR_9->channels.num);

    return VAR_1;
}
