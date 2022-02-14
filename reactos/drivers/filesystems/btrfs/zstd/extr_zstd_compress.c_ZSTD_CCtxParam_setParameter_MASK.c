
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ZSTD_strategy ;
typedef int ZSTD_format_e ;
typedef int ZSTD_cParameter ;
struct TYPE_10__ {int enableLdm; unsigned int hashLog; unsigned int minMatchLength; unsigned int bucketSizeLog; unsigned int hashEveryLog; } ;
struct TYPE_9__ {int contentSizeFlag; int checksumFlag; int noDictIDFlag; } ;
struct TYPE_8__ {unsigned int windowLog; unsigned int hashLog; unsigned int chainLog; unsigned int searchLog; unsigned int searchLength; unsigned int targetLength; int strategy; } ;
struct TYPE_11__ {int compressionLevel; int forceWindow; size_t attachDictPref; TYPE_3__ ldmParams; TYPE_2__ fParams; TYPE_1__ cParams; int format; } ;
typedef TYPE_4__ ZSTD_CCtx_params ;
typedef int U32 ;


 int FUNC_0 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int,char*,int,...) ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (TYPE_4__*,int ,unsigned int) ;
 size_t FUNC_4 (TYPE_4__*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_5 () ;
 int VAR_21 ;
 int VAR_22 ;

size_t FUNC_6(
        ZSTD_CCtx_params* VAR_23, ZSTD_cParameter VAR_24, unsigned VAR_25)
{
    FUNC_1(4, "ZSTD_CCtxParam_setParameter (%u, %u)", (U32)VAR_24, VAR_25);
    switch(VAR_24)
    {
    case 140 :
        if (VAR_25 > (unsigned)VAR_19)
            return FUNC_2(VAR_22);
        VAR_23->format = (ZSTD_format_e)VAR_25;
        return (size_t)VAR_23->format;

    case 147 : {
        int VAR_26 = (int)VAR_25;
        if (VAR_26 > FUNC_5()) VAR_26 = FUNC_5();
        if (VAR_26) {
            VAR_23->compressionLevel = VAR_26;
        }
        if (VAR_23->compressionLevel >= 0) return VAR_23->compressionLevel;
        return 0;
    }

    case 128 :
        if (VAR_25>0)
            FUNC_0(VAR_25, VAR_14, VAR_13);
        VAR_23->cParams.windowLog = VAR_25;
        return VAR_23->cParams.windowLog;

    case 139 :
        if (VAR_25>0)
            FUNC_0(VAR_25, VAR_5, VAR_4);
        VAR_23->cParams.hashLog = VAR_25;
        return VAR_23->cParams.hashLog;

    case 149 :
        if (VAR_25>0)
            FUNC_0(VAR_25, VAR_3, VAR_2);
        VAR_23->cParams.chainLog = VAR_25;
        return VAR_23->cParams.chainLog;

    case 130 :
        if (VAR_25>0)
            FUNC_0(VAR_25, VAR_12, VAR_11);
        VAR_23->cParams.searchLog = VAR_25;
        return VAR_25;

    case 133 :
        if (VAR_25>0)
            FUNC_0(VAR_25, VAR_10, VAR_9);
        VAR_23->cParams.searchLength = VAR_25;
        return VAR_23->cParams.searchLength;

    case 129 :

        VAR_23->cParams.targetLength = VAR_25;
        return VAR_23->cParams.targetLength;

    case 146 :
        if (VAR_25>0)
            FUNC_0(VAR_25, (unsigned)VAR_20, (unsigned)VAR_15);
        VAR_23->cParams.strategy = (ZSTD_strategy)VAR_25;
        return (size_t)VAR_23->cParams.strategy;

    case 145 :

        FUNC_1(4, "set content size flag = %u", (VAR_25>0));
        VAR_23->fParams.contentSizeFlag = VAR_25 > 0;
        return VAR_23->fParams.contentSizeFlag;

    case 148 :

        VAR_23->fParams.checksumFlag = VAR_25 > 0;
        return VAR_23->fParams.checksumFlag;

    case 144 :
        FUNC_1(4, "set dictIDFlag = %u", (VAR_25>0));
        VAR_23->fParams.noDictIDFlag = !VAR_25;
        return !VAR_23->fParams.noDictIDFlag;

    case 141 :
        VAR_23->forceWindow = (VAR_25 > 0);
        return VAR_23->forceWindow;

    case 142 :
        VAR_23->attachDictPref = VAR_25 ?
                                    (VAR_25 > 0 ? VAR_17 : VAR_18) :
                                     VAR_16;
        return VAR_23->attachDictPref;

    case 132 :

        if (VAR_25>0) return FUNC_2(VAR_22);
        return 0;




    case 138 :

        return FUNC_2(VAR_22);




    case 131 :

        return FUNC_2(VAR_22);




    case 143 :
        VAR_23->ldmParams.enableLdm = (VAR_25>0);
        return VAR_23->ldmParams.enableLdm;

    case 135 :
        if (VAR_25>0)
            FUNC_0(VAR_25, VAR_5, VAR_4);
        VAR_23->ldmParams.hashLog = VAR_25;
        return VAR_23->ldmParams.hashLog;

    case 134 :
        if (VAR_25>0)
            FUNC_0(VAR_25, VAR_8, VAR_7);
        VAR_23->ldmParams.minMatchLength = VAR_25;
        return VAR_23->ldmParams.minMatchLength;

    case 137 :
        if (VAR_25 > VAR_6)
            return FUNC_2(VAR_21);
        VAR_23->ldmParams.bucketSizeLog = VAR_25;
        return VAR_23->ldmParams.bucketSizeLog;

    case 136 :
        if (VAR_25 > VAR_13 - VAR_5)
            return FUNC_2(VAR_21);
        VAR_23->ldmParams.hashEveryLog = VAR_25;
        return VAR_23->ldmParams.hashEveryLog;

    default: return FUNC_2(VAR_22);
    }
}
