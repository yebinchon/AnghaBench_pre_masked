
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int size; scalar_t__ capacity; TYPE_2__* seq; } ;
typedef TYPE_1__ rawSeqStore_t ;
struct TYPE_18__ {int litLength; int matchLength; int offset; } ;
typedef TYPE_2__ rawSeq ;
struct TYPE_22__ {int dictLimit; int const lowLimit; int * dictBase; int * base; } ;
struct TYPE_19__ {TYPE_6__ window; int hashPower; } ;
typedef TYPE_3__ ldmState_t ;
struct TYPE_20__ {int minMatchLength; int hashLog; unsigned int bucketSizeLog; int hashEveryLog; } ;
typedef TYPE_4__ ldmParams_t ;
struct TYPE_21__ {int const checksum; int const offset; } ;
typedef TYPE_5__ ldmEntry_t ;
typedef int U64 ;
typedef int U32 ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int const* const FUNC_1 (int const,int ) ;
 size_t FUNC_2 (int const*,int const* const,int const* const) ;
 size_t FUNC_3 (int const*,int const* const,int const* const,int const* const,int const* const) ;
 size_t FUNC_4 (int const*,int const*,int const* const,int const* const) ;
 int FUNC_5 (TYPE_3__*,int ,int const*,int const*,int const* const,int const,TYPE_4__ const) ;
 TYPE_5__* FUNC_6 (TYPE_3__*,int ,TYPE_4__ const) ;
 int FUNC_7 (int ,int const) ;
 int FUNC_8 (int const*,int const) ;
 int FUNC_9 (int ,int const) ;
 int const FUNC_10 (int ,int const,int const) ;
 int FUNC_11 (TYPE_3__*,int ,int const,int const,TYPE_4__ const) ;
 int FUNC_12 (int ,int const,int const,int const) ;
 int FUNC_13 (TYPE_6__) ;
 int FUNC_14 (int) ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_15(
        ldmState_t* VAR_2, rawSeqStore_t* VAR_3,
        ldmParams_t const* VAR_4, void const* VAR_5, size_t VAR_6)
{

    int const VAR_7 = FUNC_13(VAR_2->window);
    U32 const VAR_8 = VAR_4->minMatchLength;
    U64 const VAR_9 = VAR_2->hashPower;
    U32 const VAR_10 = VAR_4->hashLog - VAR_4->bucketSizeLog;
    U32 const VAR_11 = 1U << VAR_4->bucketSizeLog;
    U32 const VAR_12 = VAR_4->hashEveryLog;
    U32 const VAR_13 = (1U << VAR_4->hashEveryLog) - 1;

    U32 const VAR_14 = VAR_2->window.dictLimit;
    U32 const VAR_15 = VAR_7 ? VAR_2->window.lowLimit : VAR_14;
    BYTE const* const VAR_16 = VAR_2->window.base;
    BYTE const* const VAR_17 = VAR_7 ? VAR_2->window.dictBase : ((void*)0);
    BYTE const* const VAR_18 = VAR_7 ? VAR_17 + VAR_15 : ((void*)0);
    BYTE const* const VAR_19 = VAR_7 ? VAR_17 + VAR_14 : ((void*)0);
    BYTE const* const VAR_20 = VAR_16 + VAR_14;

    BYTE const* const VAR_21 = (BYTE const*)VAR_5;
    BYTE const* const VAR_22 = VAR_21 + VAR_6;
    BYTE const* const VAR_23 = VAR_22 - FUNC_1(VAR_8, VAR_0);

    BYTE const* VAR_24 = VAR_21;
    BYTE const* VAR_25 = VAR_21;

    BYTE const* VAR_26 = ((void*)0);
    U64 VAR_27 = 0;

    while (VAR_25 <= VAR_23) {
        size_t VAR_28;
        U32 const VAR_29 = (U32)(VAR_25 - VAR_16);
        size_t VAR_30 = 0, VAR_31 = 0;
        ldmEntry_t* VAR_32 = ((void*)0);
        if (VAR_25 != VAR_21) {
            VAR_27 = FUNC_12(VAR_27, VAR_26[0],
                                              VAR_26[VAR_8],
                                              VAR_9);
        } else {
            VAR_27 = FUNC_8(VAR_25, VAR_8);
        }
        VAR_26 = VAR_25;


        if (FUNC_10(VAR_27, VAR_10, VAR_12) != VAR_13) {
           VAR_25++;
           continue;
        }


        {
            ldmEntry_t* const VAR_33 =
                FUNC_6(VAR_2,
                                   FUNC_9(VAR_27, VAR_10),
                                   *VAR_4);
            ldmEntry_t* VAR_34;
            size_t VAR_35 = 0;
            U32 const VAR_36 = FUNC_7(VAR_27, VAR_10);

            for (VAR_34 = VAR_33; VAR_34 < VAR_33 + VAR_11; ++VAR_34) {
                size_t VAR_37, VAR_38,
                       VAR_39;
                if (VAR_34->checksum != VAR_36 || VAR_34->offset <= VAR_15) {
                    continue;
                }
                if (VAR_7) {
                    BYTE const* const VAR_40 =
                        VAR_34->offset < VAR_14 ? VAR_17 : VAR_16;
                    BYTE const* const VAR_41 = VAR_40 + VAR_34->offset;
                    BYTE const* const VAR_42 =
                        VAR_34->offset < VAR_14 ? VAR_19 : VAR_22;
                    BYTE const* const VAR_43 =
                        VAR_34->offset < VAR_14 ? VAR_18 : VAR_20;

                    VAR_37 = FUNC_3(
                                                VAR_25, VAR_41, VAR_22,
                                                VAR_42, VAR_20);
                    if (VAR_37 < VAR_8) {
                        continue;
                    }
                    VAR_38 =
                        FUNC_4(VAR_25, VAR_24, VAR_41,
                                                     VAR_43);
                    VAR_39 = VAR_37 +
                                          VAR_38;
                } else {
                    BYTE const* const VAR_44 = VAR_16 + VAR_34->offset;
                    VAR_37 = FUNC_2(VAR_25, VAR_44, VAR_22);
                    if (VAR_37 < VAR_8) {
                        continue;
                    }
                    VAR_38 =
                        FUNC_4(VAR_25, VAR_24, VAR_44,
                                                     VAR_20);
                    VAR_39 = VAR_37 +
                                          VAR_38;
                }

                if (VAR_39 > VAR_35) {
                    VAR_35 = VAR_39;
                    VAR_30 = VAR_37;
                    VAR_31 = VAR_38;
                    VAR_32 = VAR_34;
                }
            }
        }


        if (VAR_32 == ((void*)0)) {
            FUNC_11(VAR_2, VAR_27,
                                             VAR_10, VAR_29,
                                             *VAR_4);
            VAR_25++;
            continue;
        }


        VAR_28 = VAR_30 + VAR_31;
        VAR_25 -= VAR_31;

        {




            U32 const VAR_45 = VAR_32->offset;
            U32 const VAR_46 = VAR_29 - VAR_45;
            rawSeq* const VAR_47 = VAR_3->seq + VAR_3->size;


            if (VAR_3->size == VAR_3->capacity)
                return FUNC_0(VAR_1);
            VAR_47->litLength = (U32)(VAR_25 - VAR_24);
            VAR_47->matchLength = (U32)VAR_28;
            VAR_47->offset = VAR_46;
            VAR_3->size++;
        }


        FUNC_11(VAR_2, VAR_27, VAR_10,
                                         (U32)(VAR_26 - VAR_16),
                                         *VAR_4);

        FUNC_14(VAR_25 + VAR_31 == VAR_26);



        if (VAR_25 + VAR_28 <= VAR_23) {
            VAR_27 = FUNC_5(
                              VAR_2, VAR_27, VAR_26,
                              VAR_25 + VAR_28, VAR_16, VAR_10, *VAR_4);
            VAR_26 = VAR_25 + VAR_28 - 1;
        }
        VAR_25 += VAR_28;
        VAR_24 = VAR_25;
    }
    return VAR_22 - VAR_24;
}
