
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lex_data {int cache_used; int * cache_string; int window; int macroptr; } ;
typedef int WINHELP_WINDOW ;
struct TYPE_2__ {int proto; int function; } ;
typedef int LPCSTR ;
typedef int BOOL ;




 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;
 struct lex_data* VAR_3 ;
 int FUNC_8 (struct lex_data*,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 TYPE_1__ VAR_4 ;

BOOL FUNC_11(WINHELP_WINDOW* VAR_5, LPCSTR VAR_6)
{
    struct lex_data VAR_7, *VAR_8;
    BOOL VAR_9 = VAR_1;
    int VAR_10;

    FUNC_3("%s\n", FUNC_7(VAR_6));

    VAR_8 = VAR_3;
    VAR_3 = &VAR_7;

    FUNC_8(VAR_3, 0, sizeof(*VAR_3));
    VAR_3->macroptr = VAR_6;
    VAR_3->window = FUNC_5(VAR_5);

    while ((VAR_10 = FUNC_10()) != 129)
    {
        switch (VAR_10)
        {
        case 128:
            FUNC_3("got type void func(%s)\n", FUNC_7(VAR_4.proto));
            FUNC_2(VAR_4.function, VAR_4.proto);
            break;
        case 130:
            FUNC_4("got type bool func(%s)\n", FUNC_7(VAR_4.proto));
            break;
        default:
            FUNC_4("got unexpected type %s\n", FUNC_7(FUNC_9(VAR_10)));
            VAR_2;
            VAR_9 = VAR_0;
            goto done;
        }
        switch (VAR_10 = FUNC_10())
        {
        case 129: goto done;
        case ';': break;
        default: VAR_9 = VAR_0; VAR_2; goto done;
        }
    }

done:
    for (VAR_10 = 0; VAR_10 < VAR_3->cache_used; VAR_10++)
        FUNC_1(FUNC_0(), 0, VAR_3->cache_string[VAR_10]);
    VAR_3 = VAR_8;
    FUNC_6(VAR_5);

    return VAR_9;
}
