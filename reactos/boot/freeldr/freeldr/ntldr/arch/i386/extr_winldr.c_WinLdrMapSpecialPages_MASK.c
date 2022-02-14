
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Valid; int Write; void* PageFrameNumber; } ;
typedef int BOOLEAN ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_1 () ;

__attribute__((used)) static
BOOLEAN
FUNC_2(void)
{
    FUNC_0("HalPageTable: 0x%X\n", VAR_0);





    VAR_0[(VAR_2 - 0xFFC00000) >> VAR_3].PageFrameNumber = VAR_4+1;
    VAR_0[(VAR_2 - 0xFFC00000) >> VAR_3].Valid = 1;
    VAR_0[(VAR_2 - 0xFFC00000) >> VAR_3].Write = 1;

    VAR_0[(VAR_1 - 0xFFC00000) >> VAR_3].PageFrameNumber = VAR_4;
    VAR_0[(VAR_1 - 0xFFC00000) >> VAR_3].Valid = 1;
    VAR_0[(VAR_1 - 0xFFC00000) >> VAR_3].Write = 1;


    FUNC_1();





    return VAR_5;
}
