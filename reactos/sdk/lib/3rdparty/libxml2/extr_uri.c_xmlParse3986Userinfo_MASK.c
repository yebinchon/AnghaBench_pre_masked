
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlURIPtr ;
struct TYPE_3__ {int cleanup; int * user; } ;


 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (char const*,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char const*,int,int *) ;

__attribute__((used)) static int
FUNC_7(xmlURIPtr VAR_0, const char **VAR_1)
{
    const char *VAR_2;

    VAR_2 = *VAR_1;
    while (FUNC_2(VAR_2) || FUNC_0(VAR_2) ||
           FUNC_1(VAR_2) || (*VAR_2 == ':'))
 FUNC_3(VAR_2);
    if (*VAR_2 == '@') {
 if (VAR_0 != ((void*)0)) {
     if (VAR_0->user != ((void*)0)) FUNC_5(VAR_0->user);
     if (VAR_0->cleanup & 2)
  VAR_0->user = FUNC_4(*VAR_1, VAR_2 - *VAR_1);
     else
  VAR_0->user = FUNC_6(*VAR_1, VAR_2 - *VAR_1, ((void*)0));
 }
 *VAR_1 = VAR_2;
 return(0);
    }
    return(1);
}
