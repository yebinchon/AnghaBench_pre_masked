
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * xmlURIPtr ;
struct TYPE_4__ {char* path; } ;
typedef TYPE_1__ xmlURI ;
typedef char xmlChar ;
typedef int temp ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*) ;
 char* FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (char const*) ;

xmlChar *
FUNC_7(const xmlChar *VAR_0)
{
    xmlURIPtr VAR_1;
    xmlURI VAR_2;
    xmlChar *VAR_3, *VAR_4;

    if (VAR_0 == ((void*)0))
        return(((void*)0));

    if ((VAR_1 = FUNC_4((const char *) VAR_0)) != ((void*)0)) {
 FUNC_3(VAR_1);
 return FUNC_6(VAR_0);
    }
    VAR_4 = FUNC_1(VAR_0);
    if (VAR_4 == ((void*)0))
        return(((void*)0));
    FUNC_0(&VAR_2, 0, sizeof(VAR_2));
    VAR_2.path = (char *) VAR_4;
    VAR_3 = FUNC_5(&VAR_2);
    FUNC_2(VAR_4);
    return(VAR_3);
}
