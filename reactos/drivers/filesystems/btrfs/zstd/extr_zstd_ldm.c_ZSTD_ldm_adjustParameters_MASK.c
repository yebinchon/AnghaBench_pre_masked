
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ windowLog; scalar_t__ minMatchLength; scalar_t__ hashLog; scalar_t__ hashEveryLog; scalar_t__ bucketSizeLog; } ;
typedef TYPE_1__ ldmParams_t ;
struct TYPE_6__ {scalar_t__ windowLog; scalar_t__ strategy; int targetLength; } ;
typedef TYPE_2__ ZSTD_compressionParameters ;
typedef scalar_t__ U32 ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ const VAR_6 ;
 scalar_t__ const VAR_7 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int) ;

void FUNC_5(ldmParams_t* VAR_9,
                               ZSTD_compressionParameters const* VAR_10)
{
    VAR_9->windowLog = VAR_10->windowLog;
    FUNC_3(VAR_0 <= VAR_5);
    FUNC_0(4, "ZSTD_ldm_adjustParameters");
    if (!VAR_9->bucketSizeLog) VAR_9->bucketSizeLog = VAR_0;
    if (!VAR_9->minMatchLength) VAR_9->minMatchLength = VAR_2;
    if (VAR_10->strategy >= VAR_8) {

      U32 const VAR_11 = FUNC_1(VAR_10->targetLength, VAR_9->minMatchLength);
      FUNC_4(VAR_11 >= VAR_7);
      FUNC_4(VAR_11 <= VAR_6);
      VAR_9->minMatchLength = VAR_11;
    }
    if (VAR_9->hashLog == 0) {
        VAR_9->hashLog = FUNC_1(VAR_4, VAR_9->windowLog - VAR_1);
        FUNC_4(VAR_9->hashLog <= VAR_3);
    }
    if (VAR_9->hashEveryLog == 0) {
        VAR_9->hashEveryLog = VAR_9->windowLog < VAR_9->hashLog
                                   ? 0
                                   : VAR_9->windowLog - VAR_9->hashLog;
    }
    VAR_9->bucketSizeLog = FUNC_2(VAR_9->bucketSizeLog, VAR_9->hashLog);
}
