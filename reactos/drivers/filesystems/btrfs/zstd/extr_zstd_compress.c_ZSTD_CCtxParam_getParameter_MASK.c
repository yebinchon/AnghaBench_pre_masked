
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ZSTD_cParameter ;
struct TYPE_8__ {unsigned int enableLdm; unsigned int hashLog; unsigned int minMatchLength; unsigned int bucketSizeLog; unsigned int hashEveryLog; } ;
struct TYPE_7__ {unsigned int contentSizeFlag; unsigned int checksumFlag; int noDictIDFlag; } ;
struct TYPE_6__ {unsigned int windowLog; unsigned int hashLog; unsigned int chainLog; unsigned int searchLog; unsigned int searchLength; unsigned int targetLength; int strategy; } ;
struct TYPE_9__ {unsigned int format; unsigned int compressionLevel; unsigned int forceWindow; unsigned int attachDictPref; unsigned int nbWorkers; unsigned int jobSize; unsigned int overlapSizeLog; TYPE_3__ ldmParams; TYPE_2__ fParams; TYPE_1__ cParams; } ;
typedef TYPE_4__ ZSTD_CCtx_params ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

size_t FUNC_2(
        ZSTD_CCtx_params* VAR_1, ZSTD_cParameter VAR_2, unsigned* VAR_3)
{
    switch(VAR_2)
    {
    case 140 :
        *VAR_3 = VAR_1->format;
        break;
    case 147 :
        *VAR_3 = VAR_1->compressionLevel;
        break;
    case 128 :
        *VAR_3 = VAR_1->cParams.windowLog;
        break;
    case 139 :
        *VAR_3 = VAR_1->cParams.hashLog;
        break;
    case 149 :
        *VAR_3 = VAR_1->cParams.chainLog;
        break;
    case 130 :
        *VAR_3 = VAR_1->cParams.searchLog;
        break;
    case 133 :
        *VAR_3 = VAR_1->cParams.searchLength;
        break;
    case 129 :
        *VAR_3 = VAR_1->cParams.targetLength;
        break;
    case 146 :
        *VAR_3 = (unsigned)VAR_1->cParams.strategy;
        break;
    case 145 :
        *VAR_3 = VAR_1->fParams.contentSizeFlag;
        break;
    case 148 :
        *VAR_3 = VAR_1->fParams.checksumFlag;
        break;
    case 144 :
        *VAR_3 = !VAR_1->fParams.noDictIDFlag;
        break;
    case 141 :
        *VAR_3 = VAR_1->forceWindow;
        break;
    case 142 :
        *VAR_3 = VAR_1->attachDictPref;
        break;
    case 132 :

        FUNC_1(VAR_1->nbWorkers == 0);

        *VAR_3 = VAR_1->nbWorkers;
        break;
    case 138 :

        return FUNC_0(VAR_0);




    case 131 :

        return FUNC_0(VAR_0);




    case 143 :
        *VAR_3 = VAR_1->ldmParams.enableLdm;
        break;
    case 135 :
        *VAR_3 = VAR_1->ldmParams.hashLog;
        break;
    case 134 :
        *VAR_3 = VAR_1->ldmParams.minMatchLength;
        break;
    case 137 :
        *VAR_3 = VAR_1->ldmParams.bucketSizeLog;
        break;
    case 136 :
        *VAR_3 = VAR_1->ldmParams.hashEveryLog;
        break;
    default: return FUNC_0(VAR_0);
    }
    return 0;
}
