
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num; } ;
struct parsed_symbol {char* current; int flags; TYPE_1__ stack; } ;
struct datatype_t {char* left; int right; } ;
struct array {int dummy; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct parsed_symbol*,struct datatype_t*,struct array*,int ) ;
 scalar_t__ FUNC_2 (struct parsed_symbol*,char const**,char const**) ;
 char const* FUNC_3 (struct parsed_symbol*) ;
 void* FUNC_4 (struct parsed_symbol*,char*,char const*,...) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static BOOL FUNC_6(struct datatype_t *VAR_4, struct parsed_symbol* VAR_5,
                              struct array *VAR_6, char VAR_7, BOOL VAR_8)
{
    const char* VAR_9;
    const char* VAR_10;
    const char *VAR_11 = "";

    if (*VAR_5->current == 'E')
    {
        if (!(VAR_5->flags & VAR_3))
        {
            if (VAR_5->flags & VAR_2)
                VAR_11 = " ptr64";
            else
                VAR_11 = " __ptr64";
        }
        VAR_5->current++;
    }

    switch (VAR_7)
    {
    case 'A': VAR_10 = FUNC_4(VAR_5, " &%s", VAR_11); break;
    case 'B': VAR_10 = FUNC_4(VAR_5, " &%s volatile", VAR_11); break;
    case 'P': VAR_10 = FUNC_4(VAR_5, " *%s", VAR_11); break;
    case 'Q': VAR_10 = FUNC_4(VAR_5, " *%s const", VAR_11); break;
    case 'R': VAR_10 = FUNC_4(VAR_5, " *%s volatile", VAR_11); break;
    case 'S': VAR_10 = FUNC_4(VAR_5, " *%s const volatile", VAR_11); break;
    case '?': VAR_10 = ""; break;
    default: return VAR_0;
    }

    if (FUNC_2(VAR_5, &VAR_9, &VAR_11))
    {
        unsigned VAR_12 = VAR_5->stack.num;
        struct datatype_t VAR_13;


        if (*VAR_5->current == 'Y')
        {
            const char* VAR_14;
            int VAR_15;

            VAR_5->current++;
            if (!(VAR_14 = FUNC_3(VAR_5))) return VAR_0;
            VAR_15 = FUNC_0(VAR_14);

            if (VAR_10[0] == ' ' && !VAR_9)
                VAR_10++;

            if (VAR_9)
            {
                VAR_10 = FUNC_4(VAR_5, " (%s%s)", VAR_9, VAR_10);
                VAR_9 = ((void*)0);
            }
            else
                VAR_10 = FUNC_4(VAR_5, " (%s)", VAR_10);

            while (VAR_15--)
                VAR_10 = FUNC_4(VAR_5, "%s[%s]", VAR_10, FUNC_3(VAR_5));
        }


        if (!FUNC_1(VAR_5, &VAR_13, VAR_6, VAR_0))
            return VAR_0;
        if (VAR_9)
            VAR_4->left = FUNC_4(VAR_5, "%s %s%s", VAR_13.left, VAR_9, VAR_10 );
        else
        {

            if (!VAR_8 && VAR_10[0] && VAR_10[1] == '*' && VAR_13.left[FUNC_5(VAR_13.left)-1] == '*')
                VAR_10++;
            VAR_4->left = FUNC_4(VAR_5, "%s%s", VAR_13.left, VAR_10 );
        }
        VAR_4->right = VAR_13.right;
        VAR_5->stack.num = VAR_12;
    }
    return VAR_1;
}
