
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* av_val; int av_len; } ;
typedef TYPE_1__ AVal ;


 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static inline AVal *FUNC_1(AVal *VAR_0, const char *VAR_1)
{
 VAR_0->av_val = (char *)VAR_1;
 VAR_0->av_len = (int)FUNC_0(VAR_1);
 return VAR_0;
}
