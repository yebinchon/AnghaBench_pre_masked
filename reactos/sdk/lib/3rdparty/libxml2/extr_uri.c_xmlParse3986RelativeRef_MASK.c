
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* xmlURIPtr ;
struct TYPE_10__ {int * path; } ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,char const**) ;
 int FUNC_4 (TYPE_1__*,char const**) ;
 int FUNC_5 (TYPE_1__*,char const**) ;
 int FUNC_6 (TYPE_1__*,char const**) ;
 int FUNC_7 (TYPE_1__*,char const**) ;
 int FUNC_8 (TYPE_1__*,char const**) ;

__attribute__((used)) static int
FUNC_9(xmlURIPtr VAR_0, const char *VAR_1) {
    int VAR_2;

    if ((*VAR_1 == '/') && (*(VAR_1 + 1) == '/')) {
        VAR_1 += 2;
 VAR_2 = FUNC_3(VAR_0, &VAR_1);
 if (VAR_2 != 0) return(VAR_2);
 VAR_2 = FUNC_5(VAR_0, &VAR_1);
 if (VAR_2 != 0) return(VAR_2);
    } else if (*VAR_1 == '/') {
 VAR_2 = FUNC_6(VAR_0, &VAR_1);
 if (VAR_2 != 0) return(VAR_2);
    } else if (FUNC_0(VAR_1)) {
        VAR_2 = FUNC_7(VAR_0, &VAR_1);
 if (VAR_2 != 0) return(VAR_2);
    } else {

 if (VAR_0 != ((void*)0)) {
     if (VAR_0->path != ((void*)0)) FUNC_2(VAR_0->path);
     VAR_0->path = ((void*)0);
 }
    }

    if (*VAR_1 == '?') {
 VAR_1++;
 VAR_2 = FUNC_8(VAR_0, &VAR_1);
 if (VAR_2 != 0) return(VAR_2);
    }
    if (*VAR_1 == '#') {
 VAR_1++;
 VAR_2 = FUNC_4(VAR_0, &VAR_1);
 if (VAR_2 != 0) return(VAR_2);
    }
    if (*VAR_1 != 0) {
 FUNC_1(VAR_0);
 return(1);
    }
    return(0);
}
