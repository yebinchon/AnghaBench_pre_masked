
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int av_len; int av_val; } ;
typedef TYPE_1__ AVal ;


 char* FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int ,int) ;

char *
FUNC_3(char *VAR_0, char *VAR_1, const AVal *VAR_2, int VAR_3)
{
    if (VAR_0+2+VAR_2->av_len > VAR_1)
        return ((void*)0);
    VAR_0 = FUNC_1(VAR_0, VAR_1, VAR_2->av_len);

    FUNC_2(VAR_0, VAR_2->av_val, VAR_2->av_len);
    VAR_0 += VAR_2->av_len;

    return FUNC_0(VAR_0, VAR_1, VAR_3);
}
