
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_multi {TYPE_1__* session; } ;
struct TYPE_2__ {char* common_name; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;

const char *
FUNC_1(const struct tls_multi *VAR_1, const bool VAR_2)
{
    const char *VAR_3 = ((void*)0);
    if (VAR_1)
    {
        VAR_3 = VAR_1->session[VAR_0].common_name;
    }
    if (VAR_3 && FUNC_0(VAR_3))
    {
        return VAR_3;
    }
    else if (VAR_2)
    {
        return ((void*)0);
    }
    else
    {
        return "UNDEF";
    }
}
