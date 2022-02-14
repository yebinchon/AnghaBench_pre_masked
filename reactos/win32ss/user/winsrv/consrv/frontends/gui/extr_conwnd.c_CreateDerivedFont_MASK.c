
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lf ;
typedef int ULONG ;
struct TYPE_5__ {void* lfStrikeOut; void* lfUnderline; int lfWeight; } ;
typedef TYPE_1__ LOGFONTW ;
typedef int * HFONT ;
typedef void* BOOLEAN ;


 int * FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static HFONT
FUNC_3(HFONT VAR_0,

                  ULONG VAR_1,

                  BOOLEAN VAR_2,
                  BOOLEAN VAR_3)
{
    LOGFONTW VAR_4;


    FUNC_2(&VAR_4, sizeof(VAR_4));


    if (FUNC_1(VAR_0, sizeof(VAR_4), &VAR_4) == 0)
        return ((void*)0);




    VAR_4.lfWeight = VAR_1;

    VAR_4.lfUnderline = VAR_2;
    VAR_4.lfStrikeOut = VAR_3;


    return FUNC_0(&VAR_4);
}
