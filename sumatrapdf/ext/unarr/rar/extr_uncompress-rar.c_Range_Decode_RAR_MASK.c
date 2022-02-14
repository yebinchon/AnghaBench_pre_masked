
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct CPpmdRAR_RangeDec {int Low; int Range; int Code; TYPE_1__* Stream; } ;
typedef scalar_t__ int32_t ;
typedef int UInt32 ;
struct TYPE_2__ {int (* Read ) (TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, UInt32 VAR_1, UInt32 VAR_2)
{
    struct CPpmdRAR_RangeDec *VAR_3 = VAR_0;
    VAR_3->Low += VAR_1 * VAR_3->Range;
    VAR_3->Code -= VAR_1 * VAR_3->Range;
    VAR_3->Range *= VAR_2;
    for (;;) {
        if ((VAR_3->Low ^ (VAR_3->Low + VAR_3->Range)) >= (1 << 24)) {
            if (VAR_3->Range >= (1 << 15))
                break;
            VAR_3->Range = ((uint32_t)(-(int32_t)VAR_3->Low)) & ((1 << 15) - 1);
        }
        VAR_3->Code = (VAR_3->Code << 8) | VAR_3->Stream->Read(VAR_3->Stream);
        VAR_3->Range <<= 8;
        VAR_3->Low <<= 8;
    }
}
