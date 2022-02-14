
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xmlURIPtr ;
struct TYPE_7__ {int port; int * path; int * server; } ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char const**) ;
 int FUNC_3 (TYPE_1__*,char const**) ;
 int FUNC_4 (TYPE_1__*,char const**) ;
 int FUNC_5 (TYPE_1__*,char const**) ;

__attribute__((used)) static int
FUNC_6(xmlURIPtr VAR_0, const char **VAR_1)
{
    const char *VAR_2;
    int VAR_3;

    VAR_2 = *VAR_1;

    if ((*VAR_2 == '/') && (*(VAR_2 + 1) == '/')) {
        VAR_2 += 2;
 VAR_3 = FUNC_2(VAR_0, &VAR_2);
 if (VAR_3 != 0) return(VAR_3);
 if (VAR_0->server == ((void*)0))
     VAR_0->port = -1;
 VAR_3 = FUNC_3(VAR_0, &VAR_2);
 if (VAR_3 != 0) return(VAR_3);
 *VAR_1 = VAR_2;
 return(0);
    } else if (*VAR_2 == '/') {
        VAR_3 = FUNC_4(VAR_0, &VAR_2);
 if (VAR_3 != 0) return(VAR_3);
    } else if (FUNC_0(VAR_2)) {
        VAR_3 = FUNC_5(VAR_0, &VAR_2);
 if (VAR_3 != 0) return(VAR_3);
    } else {

 if (VAR_0 != ((void*)0)) {
     if (VAR_0->path != ((void*)0)) FUNC_1(VAR_0->path);
     VAR_0->path = ((void*)0);
 }
    }
    *VAR_1 = VAR_2;
    return (0);
}
