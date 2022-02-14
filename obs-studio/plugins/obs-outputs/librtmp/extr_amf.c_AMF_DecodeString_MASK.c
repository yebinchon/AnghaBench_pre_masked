
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ av_len; char* av_val; } ;
typedef TYPE_1__ AVal ;


 scalar_t__ FUNC_0 (char const*) ;

void
FUNC_1(const char *VAR_0, AVal *VAR_1)
{
    VAR_1->av_len = FUNC_0(VAR_0);
    VAR_1->av_val = (VAR_1->av_len > 0) ? (char *)VAR_0 + 2 : ((void*)0);
}
