
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int av_len; int av_val; } ;
typedef TYPE_1__ AVal ;


 char* FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,int) ;

char *
FUNC_3(char *VAR_2, char *VAR_3, const AVal *VAR_4)
{
    if ((VAR_4->av_len < 65536 && VAR_2 + 1 + 2 + VAR_4->av_len > VAR_3) ||
            VAR_2 + 1 + 4 + VAR_4->av_len > VAR_3)
        return ((void*)0);

    if (VAR_4->av_len < 65536)
    {
        *VAR_2++ = VAR_1;

        VAR_2 = FUNC_0(VAR_2, VAR_3, VAR_4->av_len);
    }
    else
    {
        *VAR_2++ = VAR_0;

        VAR_2 = FUNC_1(VAR_2, VAR_3, VAR_4->av_len);
    }
    FUNC_2(VAR_2, VAR_4->av_val, VAR_4->av_len);
    VAR_2 += VAR_4->av_len;

    return VAR_2;
}
