
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* av_val; int av_len; } ;
typedef TYPE_1__ AVal ;


 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static inline void FUNC_1(AVal *VAR_0, const char *VAR_1)
{
 bool VAR_2 = (VAR_1 && *VAR_1);
 VAR_0->av_val = VAR_2 ? (char *)VAR_1 : ((void*)0);
 VAR_0->av_len = VAR_2 ? (int)FUNC_0(VAR_1) : 0;
}
