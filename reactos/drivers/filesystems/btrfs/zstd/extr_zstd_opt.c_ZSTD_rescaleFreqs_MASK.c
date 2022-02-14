
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int litLengthSum; int* litFreq; int* litLengthFreq; int matchLengthSum; int* matchLengthFreq; int offCodeSum; int* offCodeFreq; void* litSum; TYPE_3__* symbolCosts; void* priceType; } ;
typedef TYPE_4__ optState_t ;
typedef scalar_t__ U32 ;
struct TYPE_13__ {int symbolTT; } ;
struct TYPE_10__ {int offcodeCTable; int matchlengthCTable; int litlengthCTable; } ;
struct TYPE_9__ {scalar_t__ repeatMode; int CTable; } ;
struct TYPE_11__ {TYPE_2__ fse; TYPE_1__ huf; } ;
typedef TYPE_5__ FSE_CState_t ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (int*,unsigned int*,int const* const,size_t const) ;
 scalar_t__ FUNC_3 (int ,unsigned int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 void* FUNC_4 (int*,unsigned int,int) ;
 int FUNC_5 (TYPE_4__* const,int) ;
 int FUNC_6 (int) ;
 void* VAR_5 ;
 void* VAR_6 ;

__attribute__((used)) static void FUNC_7(optState_t* const VAR_7,
                              const BYTE* const VAR_8, size_t const VAR_9,
                              int VAR_10)
{
    VAR_7->priceType = VAR_5;

    if (VAR_7->litLengthSum == 0) {
        if (VAR_9 <= 1024)
            VAR_7->priceType = VAR_6;

        FUNC_6(VAR_7->symbolCosts != ((void*)0));
        if (VAR_7->symbolCosts->huf.repeatMode == VAR_0) {
            VAR_7->priceType = VAR_5;

            FUNC_6(VAR_7->litFreq != ((void*)0));
            VAR_7->litSum = 0;
            { unsigned VAR_11;
                for (VAR_11=0; VAR_11<=VAR_2; VAR_11++) {
                    U32 const VAR_12 = 11;
                    U32 const VAR_13 = FUNC_3(VAR_7->symbolCosts->huf.CTable, VAR_11);
                    FUNC_6(VAR_13 <= VAR_12);
                    VAR_7->litFreq[VAR_11] = VAR_13 ? 1 << (VAR_12-VAR_13) : 1 ;
                    VAR_7->litSum += VAR_7->litFreq[VAR_11];
            } }

            { unsigned VAR_14;
                FSE_CState_t VAR_15;
                FUNC_1(&VAR_15, VAR_7->symbolCosts->fse.litlengthCTable);
                VAR_7->litLengthSum = 0;
                for (VAR_14=0; VAR_14<=VAR_1; VAR_14++) {
                    U32 const VAR_16 = 10;
                    U32 const VAR_17 = FUNC_0(VAR_15.symbolTT, VAR_14);
                    FUNC_6(VAR_17 < VAR_16);
                    VAR_7->litLengthFreq[VAR_14] = VAR_17 ? 1 << (VAR_16-VAR_17) : 1 ;
                    VAR_7->litLengthSum += VAR_7->litLengthFreq[VAR_14];
            } }

            { unsigned VAR_18;
                FSE_CState_t VAR_19;
                FUNC_1(&VAR_19, VAR_7->symbolCosts->fse.matchlengthCTable);
                VAR_7->matchLengthSum = 0;
                for (VAR_18=0; VAR_18<=VAR_3; VAR_18++) {
                    U32 const VAR_20 = 10;
                    U32 const VAR_21 = FUNC_0(VAR_19.symbolTT, VAR_18);
                    FUNC_6(VAR_21 < VAR_20);
                    VAR_7->matchLengthFreq[VAR_18] = VAR_21 ? 1 << (VAR_20-VAR_21) : 1 ;
                    VAR_7->matchLengthSum += VAR_7->matchLengthFreq[VAR_18];
            } }

            { unsigned VAR_22;
                FSE_CState_t VAR_23;
                FUNC_1(&VAR_23, VAR_7->symbolCosts->fse.offcodeCTable);
                VAR_7->offCodeSum = 0;
                for (VAR_22=0; VAR_22<=VAR_4; VAR_22++) {
                    U32 const VAR_24 = 10;
                    U32 const VAR_25 = FUNC_0(VAR_23.symbolTT, VAR_22);
                    FUNC_6(VAR_25 < VAR_24);
                    VAR_7->offCodeFreq[VAR_22] = VAR_25 ? 1 << (VAR_24-VAR_25) : 1 ;
                    VAR_7->offCodeSum += VAR_7->offCodeFreq[VAR_22];
            } }

        } else {

            FUNC_6(VAR_7->litFreq != ((void*)0));
            { unsigned VAR_26 = VAR_2;
                FUNC_2(VAR_7->litFreq, &VAR_26, VAR_8, VAR_9);
            }
            VAR_7->litSum = FUNC_4(VAR_7->litFreq, VAR_2, 1);

            { unsigned VAR_27;
                for (VAR_27=0; VAR_27<=VAR_1; VAR_27++)
                    VAR_7->litLengthFreq[VAR_27] = 1;
            }
            VAR_7->litLengthSum = VAR_1+1;

            { unsigned VAR_28;
                for (VAR_28=0; VAR_28<=VAR_3; VAR_28++)
                    VAR_7->matchLengthFreq[VAR_28] = 1;
            }
            VAR_7->matchLengthSum = VAR_3+1;

            { unsigned VAR_29;
                for (VAR_29=0; VAR_29<=VAR_4; VAR_29++)
                    VAR_7->offCodeFreq[VAR_29] = 1;
            }
            VAR_7->offCodeSum = VAR_4+1;

        }

    } else {

        VAR_7->litSum = FUNC_4(VAR_7->litFreq, VAR_2, 1);
        VAR_7->litLengthSum = FUNC_4(VAR_7->litLengthFreq, VAR_1, 0);
        VAR_7->matchLengthSum = FUNC_4(VAR_7->matchLengthFreq, VAR_3, 0);
        VAR_7->offCodeSum = FUNC_4(VAR_7->offCodeFreq, VAR_4, 0);
    }

    FUNC_5(VAR_7, VAR_10);
}
