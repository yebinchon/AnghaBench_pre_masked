
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t* litFreq; size_t litSum; int matchLengthSum; int * matchLengthFreq; int offCodeSum; int * offCodeFreq; int litLengthSum; int * litLengthFreq; } ;
typedef TYPE_1__ optState_t ;
typedef size_t U32 ;
typedef size_t BYTE ;


 size_t VAR_0 ;
 size_t const VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t const) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(optState_t* const VAR_3,
                             U32 VAR_4, const BYTE* VAR_5,
                             U32 VAR_6, U32 VAR_7)
{

    { U32 VAR_8;
        for (VAR_8=0; VAR_8 < VAR_4; VAR_8++)
            VAR_3->litFreq[VAR_5[VAR_8]] += VAR_2;
        VAR_3->litSum += VAR_4*VAR_2;
    }


    { U32 const VAR_9 = FUNC_0(VAR_4);
        VAR_3->litLengthFreq[VAR_9]++;
        VAR_3->litLengthSum++;
    }


    { U32 const VAR_10 = FUNC_2(VAR_6+1);
        FUNC_3(VAR_10 <= VAR_1);
        VAR_3->offCodeFreq[VAR_10]++;
        VAR_3->offCodeSum++;
    }


    { U32 const VAR_11 = VAR_7 - VAR_0;
        U32 const VAR_12 = FUNC_1(VAR_11);
        VAR_3->matchLengthFreq[VAR_12]++;
        VAR_3->matchLengthSum++;
    }
}
