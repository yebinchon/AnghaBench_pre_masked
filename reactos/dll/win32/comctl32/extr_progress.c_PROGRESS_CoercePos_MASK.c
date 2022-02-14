
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ CurVal; scalar_t__ MinVal; scalar_t__ MaxVal; } ;
typedef TYPE_1__ PROGRESS_INFO ;



__attribute__((used)) static void FUNC_0(PROGRESS_INFO *VAR_0)
{
    if(VAR_0->CurVal < VAR_0->MinVal)
        VAR_0->CurVal = VAR_0->MinVal;
    if(VAR_0->CurVal > VAR_0->MaxVal)
        VAR_0->CurVal = VAR_0->MaxVal;
}
