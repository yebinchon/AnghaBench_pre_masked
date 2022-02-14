
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int int8_t ;
typedef int byte ;
struct TYPE_25__ {int allocator; } ;
struct TYPE_24__ {int* gbat; scalar_t__ USESKIP; scalar_t__ TPGDON; int GBTEMPLATE; scalar_t__ MMR; } ;
struct TYPE_23__ {int HDPW; int GRAYMAX; scalar_t__ HDMMR; int HDTEMPLATE; int HDPH; } ;
struct TYPE_22__ {int number; } ;
typedef int Jbig2WordStream ;
typedef TYPE_1__ Jbig2Segment ;
typedef TYPE_2__ Jbig2PatternDictParams ;
typedef int Jbig2PatternDict ;
typedef int Jbig2Image ;
typedef TYPE_3__ Jbig2GenericRegionParams ;
typedef TYPE_4__ Jbig2Ctx ;
typedef int Jbig2ArithState ;
typedef int Jbig2ArithCx ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (TYPE_4__*,TYPE_1__*,TYPE_3__*,int const*,size_t const,int *) ;
 int FUNC_2 (TYPE_4__*,TYPE_1__*,TYPE_3__*,int *,int *,int *) ;
 int FUNC_3 (TYPE_4__*,int ,int ,char*) ;
 int FUNC_4 (int ,int *) ;
 int * FUNC_5 (TYPE_4__*,TYPE_2__ const*,int *) ;
 int * FUNC_6 (TYPE_4__*,int,int ) ;
 int FUNC_7 (TYPE_4__*,int *) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 int * FUNC_9 (TYPE_4__*,int const*,size_t const) ;

__attribute__((used)) static Jbig2PatternDict *
FUNC_10(Jbig2Ctx *VAR_1, Jbig2Segment *VAR_2,
                          const Jbig2PatternDictParams *VAR_3, const byte *VAR_4, const size_t VAR_5, Jbig2ArithCx *VAR_6)
{
    Jbig2PatternDict *VAR_7 = ((void*)0);
    Jbig2Image *VAR_8 = ((void*)0);
    Jbig2GenericRegionParams VAR_9;
    int VAR_10 = 0;


    VAR_8 = FUNC_6(VAR_1, VAR_3->HDPW * (VAR_3->GRAYMAX + 1), VAR_3->HDPH);
    if (VAR_8 == ((void*)0)) {
        FUNC_3(VAR_1, VAR_0, VAR_2->number, "failed to allocate collective bitmap for halftone dictionary");
        return ((void*)0);
    }


    VAR_9.MMR = VAR_3->HDMMR;
    VAR_9.GBTEMPLATE = VAR_3->HDTEMPLATE;
    VAR_9.TPGDON = 0;
    VAR_9.USESKIP = 0;
    VAR_9.gbat[0] = -(int8_t) VAR_3->HDPW;
    VAR_9.gbat[1] = 0;
    VAR_9.gbat[2] = -3;
    VAR_9.gbat[3] = -1;
    VAR_9.gbat[4] = 2;
    VAR_9.gbat[5] = -2;
    VAR_9.gbat[6] = -2;
    VAR_9.gbat[7] = -2;

    if (VAR_3->HDMMR) {
        VAR_10 = FUNC_1(VAR_1, VAR_2, &VAR_9, VAR_4, VAR_5, VAR_8);
    } else {
        Jbig2WordStream *VAR_11 = FUNC_9(VAR_1, VAR_4, VAR_5);

        if (VAR_11 != ((void*)0)) {
            Jbig2ArithState *VAR_12 = FUNC_0(VAR_1, VAR_11);

            if (VAR_12 != ((void*)0)) {
                VAR_10 = FUNC_2(VAR_1, VAR_2, &VAR_9, VAR_12, VAR_8, VAR_6);
            } else {
                VAR_10 = FUNC_3(VAR_1, VAR_0, VAR_2->number, "failed to allocate arithmetic coding state when handling halftone dictionary");
            }

            FUNC_4(VAR_1->allocator, VAR_12);
            FUNC_8(VAR_1, VAR_11);
        } else {
            VAR_10 = FUNC_3(VAR_1, VAR_0, VAR_2->number, "failed to allocate word stream when handling halftone dictionary");
        }
    }

    if (VAR_10 == 0)
        VAR_7 = FUNC_5(VAR_1, VAR_3, VAR_8);
    else
        FUNC_3(VAR_1, VAR_0, VAR_2->number, "failed to decode immediate generic region");
    FUNC_7(VAR_1, VAR_8);

    return VAR_7;
}
