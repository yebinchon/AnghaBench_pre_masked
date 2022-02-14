
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num; } ;
struct parsed_symbol {char* current; int flags; TYPE_1__ stack; } ;
struct datatype_t {char* left; char* right; } ;
struct array {int dummy; } ;
typedef void* BOOL ;


 int FUNC_0 (char*,char) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct datatype_t*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (struct parsed_symbol*,struct array*,void*,char,char) ;
 int FUNC_4 (int ,char const**,char const**,int) ;
 void* FUNC_5 (struct parsed_symbol*) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (struct datatype_t*,struct parsed_symbol*,struct array*,char,void*) ;
 int FUNC_8 (struct parsed_symbol*,char const**,char const**) ;
 char const* FUNC_9 (struct parsed_symbol*) ;
 char* FUNC_10 (char) ;
 int FUNC_11 (char) ;
 void* FUNC_12 (struct array*,char) ;
 int FUNC_13 (struct parsed_symbol*,char*,int,struct array*) ;
 void* FUNC_14 (struct parsed_symbol*,char*,char const*,...) ;

__attribute__((used)) static BOOL FUNC_15(struct parsed_symbol* VAR_4, struct datatype_t* VAR_5,
                              struct array* VAR_6, BOOL VAR_7)
{
    char VAR_8;
    BOOL VAR_9 = VAR_1;

    FUNC_1(VAR_5);
    VAR_5->left = VAR_5->right = ((void*)0);

    switch (VAR_8 = *VAR_4->current++)
    {
    case '_':

        VAR_5->left = FUNC_6(*VAR_4->current++);
        break;
    case 'C': case 'D': case 'E': case 'F': case 'G':
    case 'H': case 'I': case 'J': case 'K': case 'M':
    case 'N': case 'O': case 'X': case 'Z':

        VAR_5->left = FUNC_10(VAR_8);
        VAR_9 = VAR_0;
        break;
    case 'T':
    case 'U':
    case 'V':
    case 'Y':

        {
            const char* VAR_10 = ((void*)0);
            const char* VAR_11 = ((void*)0);

            if (!(VAR_10 = FUNC_5(VAR_4)))
                goto done;
            if (!(VAR_4->flags & VAR_3))
            {
                switch (VAR_8)
                {
                case 'T': VAR_11 = "union "; break;
                case 'U': VAR_11 = "struct "; break;
                case 'V': VAR_11 = "class "; break;
                case 'Y': VAR_11 = "cointerface "; break;
                }
            }
            VAR_5->left = FUNC_14(VAR_4, "%s%s", VAR_11, VAR_10);
        }
        break;
    case '?':

        if (VAR_7)
        {
            const char* VAR_12;
            if (!(VAR_12 = FUNC_9(VAR_4))) goto done;
            VAR_5->left = FUNC_14(VAR_4, "`template-parameter-%s'", VAR_12);
        }
        else
        {
            if (!FUNC_7(VAR_5, VAR_4, VAR_6, '?', VAR_7)) goto done;
        }
        break;
    case 'A':
    case 'B':
        if (!FUNC_7(VAR_5, VAR_4, VAR_6, VAR_8, VAR_7)) goto done;
        break;
    case 'Q':
    case 'R':
    case 'S':
        if (!FUNC_7(VAR_5, VAR_4, VAR_6, VAR_7 ? VAR_8 : 'P', VAR_7)) goto done;
        break;
    case 'P':
        if (FUNC_11(*VAR_4->current))
 {




            if (*VAR_4->current == '8')
            {
                char* VAR_13 = ((void*)0);
                const char* VAR_14;
                const char* VAR_15;
                struct datatype_t VAR_16;
                unsigned VAR_17 = VAR_4->stack.num;
                const char* VAR_18;
                const char* VAR_19;
                const char* VAR_20;

                VAR_4->current++;

                if (!(VAR_18 = FUNC_5(VAR_4)))
                    goto done;
                if (!FUNC_8(VAR_4, &VAR_19, &VAR_20))
                    goto done;
                if (VAR_19)
                    VAR_19 = FUNC_14(VAR_4, "%s %s", VAR_19, VAR_20);
                else if(VAR_20[0])
                    VAR_19 = FUNC_14(VAR_4, " %s", VAR_20);
                if (!FUNC_4(*VAR_4->current++,
                            &VAR_14, &VAR_15,
                            VAR_4->flags & ~VAR_2))
                    goto done;
                if (!FUNC_15(VAR_4, &VAR_16, VAR_6, VAR_0))
                    goto done;

                VAR_13 = FUNC_3(VAR_4, VAR_6, VAR_1, '(', ')');
                if (!VAR_13) goto done;
                VAR_4->stack.num = VAR_17;

                VAR_5->left = FUNC_14(VAR_4, "%s%s (%s %s::*",
                        VAR_16.left, VAR_16.right, VAR_14, VAR_18);
                VAR_5->right = FUNC_14(VAR_4, ")%s%s", VAR_13, VAR_19);
            }
            else if (*VAR_4->current == '6')
            {
                char* VAR_21 = ((void*)0);
                const char* VAR_22;
                const char* VAR_23;
                struct datatype_t VAR_24;
                unsigned VAR_25 = VAR_4->stack.num;

                VAR_4->current++;

                if (!FUNC_4(*VAR_4->current++,
                                            &VAR_22, &VAR_23,
                                            VAR_4->flags & ~VAR_2) ||
                    !FUNC_15(VAR_4, &VAR_24, VAR_6, VAR_0))
                    goto done;

                VAR_21 = FUNC_3(VAR_4, VAR_6, VAR_1, '(', ')');
                if (!VAR_21) goto done;
                VAR_4->stack.num = VAR_25;

                VAR_5->left = FUNC_14(VAR_4, "%s%s (%s*",
                                       VAR_24.left, VAR_24.right, VAR_22);
                VAR_5->right = FUNC_14(VAR_4, ")%s", VAR_21);
            }
            else goto done;
 }
 else if (!FUNC_7(VAR_5, VAR_4, VAR_6, 'P', VAR_7)) goto done;
        break;
    case 'W':
        if (*VAR_4->current == '4')
        {
            char* VAR_26;
            VAR_4->current++;
            if (!(VAR_26 = FUNC_5(VAR_4)))
                goto done;
            if (VAR_4->flags & VAR_3)
                VAR_5->left = VAR_26;
            else
                VAR_5->left = FUNC_14(VAR_4, "enum %s", VAR_26);
        }
        else goto done;
        break;
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':


        if (!VAR_6) goto done;
        VAR_5->left = FUNC_12(VAR_6, (VAR_8 - '0') * 2);
        VAR_5->right = FUNC_12(VAR_6, (VAR_8 - '0') * 2 + 1);
        if (!VAR_5->left) goto done;
        VAR_9 = VAR_0;
        break;
    case '$':
        switch (*VAR_4->current++)
        {
        case '0':
            if (!(VAR_5->left = FUNC_9(VAR_4))) goto done;
            break;
        case 'D':
            {
                const char* VAR_27;
                if (!(VAR_27 = FUNC_9(VAR_4))) goto done;
                VAR_5->left = FUNC_14(VAR_4, "`template-parameter%s'", VAR_27);
            }
            break;
        case 'F':
            {
                const char* VAR_28;
                const char* VAR_29;
                if (!(VAR_28 = FUNC_9(VAR_4))) goto done;
                if (!(VAR_29 = FUNC_9(VAR_4))) goto done;
                VAR_5->left = FUNC_14(VAR_4, "{%s,%s}", VAR_28, VAR_29);
            }
            break;
        case 'G':
            {
                const char* VAR_30;
                const char* VAR_31;
                const char* VAR_32;
                if (!(VAR_30 = FUNC_9(VAR_4))) goto done;
                if (!(VAR_31 = FUNC_9(VAR_4))) goto done;
                if (!(VAR_32 = FUNC_9(VAR_4))) goto done;
                VAR_5->left = FUNC_14(VAR_4, "{%s,%s,%s}", VAR_30, VAR_31, VAR_32);
            }
            break;
        case 'Q':
            {
                const char* VAR_33;
                if (!(VAR_33 = FUNC_9(VAR_4))) goto done;
                VAR_5->left = FUNC_14(VAR_4, "`non-type-template-parameter%s'", VAR_33);
            }
            break;
        case '$':
            if (*VAR_4->current == 'B')
            {
                unsigned VAR_34 = VAR_4->stack.num;
                struct datatype_t VAR_35;
                const char* VAR_36 = ((void*)0);
                VAR_4->current++;


                if (*VAR_4->current == 'Y')
                {
                    const char* VAR_37;
                    int VAR_38;

                    VAR_4->current++;
                    if (!(VAR_37 = FUNC_9(VAR_4))) goto done;
                    VAR_38 = FUNC_2(VAR_37);

                    while (VAR_38--)
                        VAR_36 = FUNC_14(VAR_4, "%s[%s]", VAR_36, FUNC_9(VAR_4));
                }

                if (!FUNC_15(VAR_4, &VAR_35, VAR_6, VAR_0)) goto done;

                if (VAR_36)
                    VAR_5->left = FUNC_14(VAR_4, "%s %s", VAR_35.left, VAR_36);
                else
                    VAR_5->left = VAR_35.left;
                VAR_5->right = VAR_35.right;
                VAR_4->stack.num = VAR_34;
            }
            else if (*VAR_4->current == 'C')
            {
                const char *VAR_39, *VAR_40;

                VAR_4->current++;
                if (!FUNC_8(VAR_4, &VAR_39, &VAR_40)) goto done;
                if (!FUNC_15(VAR_4, VAR_5, VAR_6, VAR_7)) goto done;
                VAR_5->left = FUNC_14(VAR_4, "%s %s", VAR_5->left, VAR_39);
            }
            break;
        }
        break;
    default :
        FUNC_0("Unknown type %c\n", VAR_8);
        break;
    }
    if (VAR_9 && VAR_6 && VAR_7)
    {

        if (!FUNC_13(VAR_4, VAR_5->left ? VAR_5->left : "", -1, VAR_6) ||
            !FUNC_13(VAR_4, VAR_5->right ? VAR_5->right : "", -1, VAR_6))
            return VAR_0;
    }
done:

    return VAR_5->left != ((void*)0);
}
