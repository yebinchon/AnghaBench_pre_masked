
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlURIPtr ;
struct TYPE_3__ {unsigned int port; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1(xmlURIPtr VAR_1, const char **VAR_2)
{
    const char *VAR_3 = *VAR_2;
    unsigned VAR_4 = 0;

    if (FUNC_0(VAR_3)) {
 while (FUNC_0(VAR_3)) {
     VAR_4 = VAR_4 * 10 + (*VAR_3 - '0');

     VAR_3++;
 }
 if (VAR_1 != ((void*)0))
     VAR_1->port = VAR_4 & VAR_0;
 *VAR_2 = VAR_3;
 return(0);
    }
    return(1);
}
