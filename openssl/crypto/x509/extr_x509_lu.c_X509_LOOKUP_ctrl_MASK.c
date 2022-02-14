
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* method; } ;
typedef TYPE_2__ X509_LOOKUP ;
struct TYPE_5__ {int (* ctrl ) (TYPE_2__*,int,char const*,long,char**) ;} ;


 int FUNC_0 (TYPE_2__*,int,char const*,long,char**) ;

int FUNC_1(X509_LOOKUP *VAR_0, int VAR_1, const char *VAR_2, long VAR_3,
                     char **VAR_4)
{
    if (VAR_0->method == ((void*)0))
        return -1;
    if (VAR_0->method->ctrl != ((void*)0))
        return VAR_0->method->ctrl(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
    else
        return 1;
}
