
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int av_len; int av_val; } ;
struct TYPE_8__ {size_t av_len; char* av_val; } ;
struct TYPE_9__ {int num; TYPE_1__ name; } ;
typedef TYPE_2__ RTMP_METHOD ;
typedef TYPE_3__ AVal ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_3(RTMP_METHOD **VAR_0, int *VAR_1, AVal *VAR_2, int VAR_3)
{
    char *VAR_4;
    if (!(*VAR_1 & 0x0f))
        *VAR_0 = FUNC_2(*VAR_0, (*VAR_1 + 16) * sizeof(RTMP_METHOD));
    VAR_4 = FUNC_0(VAR_2->av_len + 1);
    FUNC_1(VAR_4, VAR_2->av_val, VAR_2->av_len);
    VAR_4[VAR_2->av_len] = '\0';
    (*VAR_0)[*VAR_1].num = VAR_3;
    (*VAR_0)[*VAR_1].name.av_len = VAR_2->av_len;
    (*VAR_0)[(*VAR_1)++].name.av_val = VAR_4;
}
