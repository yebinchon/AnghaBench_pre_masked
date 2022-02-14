
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* separators; } ;
typedef TYPE_1__ procfile ;
typedef scalar_t__ PF_CHAR_TYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

void FUNC_1(procfile *VAR_2, const char *VAR_3) {
    PF_CHAR_TYPE *VAR_4 = VAR_2->separators;


    int VAR_5 = 256;
    while(VAR_5--)
        if(FUNC_0(VAR_4[VAR_5] == VAR_0))
            VAR_4[VAR_5] = VAR_1;


    if(FUNC_0(!VAR_3 || !*VAR_3))
        return;


    const char *VAR_6 = VAR_3;
    while(*VAR_6)
        VAR_4[(int)*VAR_6++] = VAR_0;
}
