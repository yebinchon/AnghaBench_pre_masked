
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; int entry; int value; } ;
typedef TYPE_1__ param_t ;
struct TYPE_5__ {int params; } ;
typedef TYPE_2__ header_t ;


 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,char const*,int) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(header_t *VAR_0, const char *VAR_1)
{
    const char *VAR_2 = VAR_1, *VAR_3, *VAR_4 = VAR_1;
    param_t *VAR_5;
    char *VAR_6;

    FUNC_2("got param %s\n", VAR_1);

    while (*VAR_2 == ' ' || *VAR_2 == '\t' ) VAR_2++;

    VAR_4 = FUNC_6(VAR_2, '=');
    if(!VAR_4)
    {
        FUNC_3("malformed parameter - skipping\n");
        return;
    }

    VAR_6 = FUNC_1(FUNC_0(), 0, VAR_4 - VAR_2 + 1);
    FUNC_5(VAR_6, VAR_2, VAR_4 - VAR_2);
    VAR_6[VAR_4 - VAR_2] = '\0';

    VAR_3 = VAR_4 + 1;

    VAR_5 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_5));
    VAR_5->name = VAR_6;
    VAR_5->value = FUNC_7(VAR_3);
    FUNC_4(&VAR_0->params, &VAR_5->entry);
}
