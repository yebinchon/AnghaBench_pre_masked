
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlURIPtr ;
struct TYPE_3__ {int * scheme; } ;


 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int * FUNC_2 (char const*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(xmlURIPtr VAR_0, const char **VAR_1) {
    const char *VAR_2;

    if (VAR_1 == ((void*)0))
 return(-1);

    VAR_2 = *VAR_1;
    if (!FUNC_0(VAR_2))
 return(2);
    VAR_2++;
    while (FUNC_0(VAR_2) || FUNC_1(VAR_2) ||
           (*VAR_2 == '+') || (*VAR_2 == '-') || (*VAR_2 == '.')) VAR_2++;
    if (VAR_0 != ((void*)0)) {
 if (VAR_0->scheme != ((void*)0)) FUNC_3(VAR_0->scheme);
 VAR_0->scheme = FUNC_2(*VAR_1, VAR_2 - *VAR_1);
    }
    *VAR_1 = VAR_2;
    return(0);
}
