
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ av_len; int * av_val; } ;
struct TYPE_5__ {scalar_t__ num; TYPE_1__ name; } ;
typedef TYPE_2__ RTMP_METHOD ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(RTMP_METHOD *VAR_0, int *VAR_1, int VAR_2, int VAR_3)
{
    if (VAR_3)
        FUNC_0(VAR_0[VAR_2].name.av_val);
    (*VAR_1)--;
    for (; VAR_2 < *VAR_1; VAR_2++)
    {
        VAR_0[VAR_2] = VAR_0[VAR_2 + 1];
    }
    VAR_0[VAR_2].name.av_val = ((void*)0);
    VAR_0[VAR_2].name.av_len = 0;
    VAR_0[VAR_2].num = 0;
}
