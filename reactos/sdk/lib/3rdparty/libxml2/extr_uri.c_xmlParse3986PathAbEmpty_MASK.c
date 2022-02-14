
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlURIPtr ;
struct TYPE_3__ {int cleanup; int * path; } ;


 int * FUNC_0 (char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const**,int ,int) ;
 int * FUNC_3 (char const*,int,int *) ;

__attribute__((used)) static int
FUNC_4(xmlURIPtr VAR_0, const char **VAR_1)
{
    const char *VAR_2;
    int VAR_3;

    VAR_2 = *VAR_1;

    while (*VAR_2 == '/') {
        VAR_2++;
 VAR_3 = FUNC_2(&VAR_2, 0, 1);
 if (VAR_3 != 0) return(VAR_3);
    }
    if (VAR_0 != ((void*)0)) {
 if (VAR_0->path != ((void*)0)) FUNC_1(VAR_0->path);
        if (*VAR_1 != VAR_2) {
            if (VAR_0->cleanup & 2)
                VAR_0->path = FUNC_0(*VAR_1, VAR_2 - *VAR_1);
            else
                VAR_0->path = FUNC_3(*VAR_1, VAR_2 - *VAR_1, ((void*)0));
        } else {
            VAR_0->path = ((void*)0);
        }
    }
    *VAR_1 = VAR_2;
    return (0);
}
