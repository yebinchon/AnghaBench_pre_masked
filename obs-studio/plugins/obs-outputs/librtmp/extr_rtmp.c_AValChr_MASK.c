
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int av_len; char* av_val; } ;
typedef TYPE_1__ AVal ;



__attribute__((used)) static char *FUNC_0(AVal *VAR_0, char VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_0->av_len; VAR_2++)
    {
        if (VAR_0->av_val[VAR_2] == VAR_1)
            return &VAR_0->av_val[VAR_2];
    }
    return ((void*)0);
}
