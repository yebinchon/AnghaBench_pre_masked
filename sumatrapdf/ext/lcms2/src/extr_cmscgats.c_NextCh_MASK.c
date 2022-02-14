
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t IncludeSP; char ch; char* Source; TYPE_1__** FileStack; } ;
typedef TYPE_2__ cmsIT8 ;
struct TYPE_4__ {scalar_t__ Stream; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 char FUNC_2 (scalar_t__) ;

__attribute__((used)) static
void FUNC_3(cmsIT8* VAR_0)
{
    if (VAR_0 -> FileStack[VAR_0 ->IncludeSP]->Stream) {

        VAR_0 ->ch = FUNC_2(VAR_0 ->FileStack[VAR_0 ->IncludeSP]->Stream);

        if (FUNC_1(VAR_0 -> FileStack[VAR_0 ->IncludeSP]->Stream)) {

            if (VAR_0 ->IncludeSP > 0) {

                FUNC_0(VAR_0 ->FileStack[VAR_0->IncludeSP--]->Stream);
                VAR_0 -> ch = ' ';

            } else
                VAR_0 ->ch = 0;
        }
    }
    else {
        VAR_0->ch = *VAR_0->Source;
        if (VAR_0->ch) VAR_0->Source++;
    }
}
