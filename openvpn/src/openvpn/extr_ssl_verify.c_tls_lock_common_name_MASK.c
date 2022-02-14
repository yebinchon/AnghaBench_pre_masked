
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_multi {scalar_t__ locked_cn; TYPE_1__* session; } ;
struct TYPE_2__ {char* common_name; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *) ;

void
FUNC_1(struct tls_multi *VAR_1)
{
    const char *VAR_2 = VAR_1->session[VAR_0].common_name;
    if (VAR_2 && !VAR_1->locked_cn)
    {
        VAR_1->locked_cn = FUNC_0(VAR_2, ((void*)0));
    }
}
