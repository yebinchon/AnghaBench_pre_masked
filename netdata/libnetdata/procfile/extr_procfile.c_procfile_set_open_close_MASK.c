
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
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

void FUNC_1(procfile *VAR_3, const char *VAR_4, const char *VAR_5) {
    PF_CHAR_TYPE *VAR_6 = VAR_3->separators;


    int VAR_7 = 256;
    while(VAR_7--)
        if(FUNC_0(VAR_6[VAR_7] == VAR_1 || VAR_6[VAR_7] == VAR_0))
            VAR_6[VAR_7] = VAR_2;


    if(FUNC_0(!VAR_4 || !*VAR_4 || !VAR_5 || !*VAR_5))
        return;


    const char *VAR_8 = VAR_4;
    while(*VAR_8)
        VAR_6[(int)*VAR_8++] = VAR_1;


    VAR_8 = VAR_5;
    while(*VAR_8)
        VAR_6[(int)*VAR_8++] = VAR_0;
}
