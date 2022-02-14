
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlURIPtr ;
struct TYPE_3__ {int cleanup; int * server; int * authority; } ;


 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 int * FUNC_5 (char const*,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char const**) ;
 int * FUNC_8 (char const*,int,int *) ;

__attribute__((used)) static int
FUNC_9(xmlURIPtr VAR_0, const char **VAR_1)
{
    const char *VAR_2 = *VAR_1;
    const char *VAR_3;

    VAR_3 = VAR_2;



    if (*VAR_2 == '[') {
        VAR_2++;
 while ((*VAR_2 != ']') && (*VAR_2 != 0))
     VAR_2++;
 if (*VAR_2 != ']')
     return(1);
 VAR_2++;
 goto found;
    }



    if (FUNC_0(VAR_2)) {
        if (FUNC_7(&VAR_2) != 0)
     goto not_ipv4;
 if (*VAR_2 != '.')
     goto not_ipv4;
 VAR_2++;
        if (FUNC_7(&VAR_2) != 0)
     goto not_ipv4;
 if (*VAR_2 != '.')
     goto not_ipv4;
        if (FUNC_7(&VAR_2) != 0)
     goto not_ipv4;
 if (*VAR_2 != '.')
     goto not_ipv4;
        if (FUNC_7(&VAR_2) != 0)
     goto not_ipv4;
 goto found;
not_ipv4:
        VAR_2 = *VAR_1;
    }



    while (FUNC_3(VAR_2) || FUNC_1(VAR_2) || FUNC_2(VAR_2))
        FUNC_4(VAR_2);
found:
    if (VAR_0 != ((void*)0)) {
 if (VAR_0->authority != ((void*)0)) FUNC_6(VAR_0->authority);
 VAR_0->authority = ((void*)0);
 if (VAR_0->server != ((void*)0)) FUNC_6(VAR_0->server);
 if (VAR_2 != VAR_3) {
     if (VAR_0->cleanup & 2)
  VAR_0->server = FUNC_5(VAR_3, VAR_2 - VAR_3);
     else
  VAR_0->server = FUNC_8(VAR_3, VAR_2 - VAR_3, ((void*)0));
 } else
     VAR_0->server = ((void*)0);
    }
    *VAR_1 = VAR_2;
    return(0);
}
