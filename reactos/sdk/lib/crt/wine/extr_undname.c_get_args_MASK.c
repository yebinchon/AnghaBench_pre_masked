
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parsed_symbol {char* current; } ;
struct datatype_t {char* left; int right; } ;
struct array {int num; char** elts; } ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (struct parsed_symbol*,struct datatype_t*,struct array*,int ) ;
 int FUNC_1 (struct array*) ;
 int FUNC_2 (struct parsed_symbol*,char*,int,struct array*) ;
 char* FUNC_3 (struct parsed_symbol*,char*,...) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static char* FUNC_6(struct parsed_symbol* VAR_1, struct array* VAR_2, BOOL VAR_3,
                      char VAR_4, char VAR_5)

{
    struct datatype_t VAR_6;
    struct array VAR_7;
    char* VAR_8 = ((void*)0);
    char* VAR_9;
    unsigned int VAR_10;

    FUNC_1(&VAR_7);


    while (*VAR_1->current)
    {

        if (*VAR_1->current == '@')
        {
            VAR_1->current++;
            break;
        }
        if (!FUNC_0(VAR_1, &VAR_6, VAR_2, VAR_0))
            return ((void*)0);

        if (VAR_3 && !FUNC_4(VAR_6.left, "void")) break;
        if (!FUNC_2(VAR_1, FUNC_3(VAR_1, "%s%s", VAR_6.left, VAR_6.right), -1,
                            &VAR_7))
            return ((void*)0);
        if (!FUNC_4(VAR_6.left, "...")) break;
    }



    if (VAR_3 && *VAR_1->current++ != 'Z') return ((void*)0);

    if (VAR_7.num == 0 ||
        (VAR_7.num == 1 && !FUNC_4(VAR_7.elts[0], "void")))
        return FUNC_3(VAR_1, "%cvoid%c", VAR_4, VAR_5);
    for (VAR_10 = 1; VAR_10 < VAR_7.num; VAR_10++)
    {
        VAR_8 = FUNC_3(VAR_1, "%s,%s", VAR_8, VAR_7.elts[VAR_10]);
    }

    VAR_9 = VAR_8 ? VAR_8 : VAR_7.elts[0];
    if (VAR_5 == '>' && VAR_9[FUNC_5(VAR_9) - 1] == '>')
        VAR_8 = FUNC_3(VAR_1, "%c%s%s %c",
                              VAR_4, VAR_7.elts[0], VAR_8, VAR_5);
    else
        VAR_8 = FUNC_3(VAR_1, "%c%s%s%c",
                              VAR_4, VAR_7.elts[0], VAR_8, VAR_5);

    return VAR_8;
}
