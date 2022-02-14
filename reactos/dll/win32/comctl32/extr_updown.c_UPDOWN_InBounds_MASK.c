
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int MaxVal; int MinVal; } ;
typedef TYPE_1__ UPDOWN_INFO ;
typedef int BOOL ;



__attribute__((used)) static BOOL FUNC_0(const UPDOWN_INFO *VAR_0, int VAR_1)
{
    if(VAR_0->MaxVal > VAR_0->MinVal)
        return (VAR_0->MinVal <= VAR_1) && (VAR_1 <= VAR_0->MaxVal);
    else
        return (VAR_0->MaxVal <= VAR_1) && (VAR_1 <= VAR_0->MinVal);
}
