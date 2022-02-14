
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int start; int num; } ;
struct TYPE_4__ {int num; void** elts; } ;
struct parsed_symbol {int flags; char* result; char* current; TYPE_1__ names; TYPE_2__ stack; } ;
struct datatype_t {int right; int left; } ;
struct array {int dummy; } ;
typedef char const CHAR ;
typedef int BOOL ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct parsed_symbol*,struct datatype_t*,struct array*,int) ;
 char* FUNC_5 (struct parsed_symbol*,struct array*,int,char,char) ;
 int FUNC_6 (struct parsed_symbol*) ;
 char* FUNC_7 (struct parsed_symbol*) ;
 char* FUNC_8 (struct parsed_symbol*) ;
 int FUNC_9 (struct parsed_symbol*) ;
 int FUNC_10 (struct parsed_symbol*,int) ;
 int FUNC_11 (struct array*) ;
 int FUNC_12 (struct parsed_symbol*,char const*,int,TYPE_2__*) ;
 void* FUNC_13 (struct parsed_symbol*,char*,char const*,...) ;

__attribute__((used)) static BOOL FUNC_14(struct parsed_symbol* VAR_4)
{
    BOOL VAR_5 = VAR_0;
    unsigned VAR_6 = 0;
    static CHAR VAR_7[] = "--null--";


    if (VAR_4->flags & VAR_2)
    {
        struct datatype_t VAR_8;

        if (FUNC_4(VAR_4, &VAR_8, ((void*)0), VAR_0))
        {
            VAR_4->result = FUNC_13(VAR_4, "%s%s", VAR_8.left, VAR_8.right);
            VAR_5 = VAR_1;
        }
        goto done;
    }


    if (*VAR_4->current != '?') return VAR_0;
    VAR_4->current++;


    if (*VAR_4->current == '?' && (VAR_4->current[1] != '$' || VAR_4->current[2] == '?'))
    {
        const char* VAR_9 = ((void*)0);

        if (VAR_4->current[1] == '$')
        {
            VAR_6 = 6;
            VAR_4->current += 2;
        }


        switch (*++VAR_4->current)
        {
        case '0': VAR_6 = 1; break;
        case '1': VAR_6 = 2; break;
        case '2': VAR_9 = "operator new"; break;
        case '3': VAR_9 = "operator delete"; break;
        case '4': VAR_9 = "operator="; break;
        case '5': VAR_9 = "operator>>"; break;
        case '6': VAR_9 = "operator<<"; break;
        case '7': VAR_9 = "operator!"; break;
        case '8': VAR_9 = "operator=="; break;
        case '9': VAR_9 = "operator!="; break;
        case 'A': VAR_9 = "operator[]"; break;
        case 'B': VAR_9 = "operator "; VAR_6 = 3; break;
        case 'C': VAR_9 = "operator->"; break;
        case 'D': VAR_9 = "operator*"; break;
        case 'E': VAR_9 = "operator++"; break;
        case 'F': VAR_9 = "operator--"; break;
        case 'G': VAR_9 = "operator-"; break;
        case 'H': VAR_9 = "operator+"; break;
        case 'I': VAR_9 = "operator&"; break;
        case 'J': VAR_9 = "operator->*"; break;
        case 'K': VAR_9 = "operator/"; break;
        case 'L': VAR_9 = "operator%"; break;
        case 'M': VAR_9 = "operator<"; break;
        case 'N': VAR_9 = "operator<="; break;
        case 'O': VAR_9 = "operator>"; break;
        case 'P': VAR_9 = "operator>="; break;
        case 'Q': VAR_9 = "operator,"; break;
        case 'R': VAR_9 = "operator()"; break;
        case 'S': VAR_9 = "operator~"; break;
        case 'T': VAR_9 = "operator^"; break;
        case 'U': VAR_9 = "operator|"; break;
        case 'V': VAR_9 = "operator&&"; break;
        case 'W': VAR_9 = "operator||"; break;
        case 'X': VAR_9 = "operator*="; break;
        case 'Y': VAR_9 = "operator+="; break;
        case 'Z': VAR_9 = "operator-="; break;
        case '_':
            switch (*++VAR_4->current)
            {
            case '0': VAR_9 = "operator/="; break;
            case '1': VAR_9 = "operator%="; break;
            case '2': VAR_9 = "operator>>="; break;
            case '3': VAR_9 = "operator<<="; break;
            case '4': VAR_9 = "operator&="; break;
            case '5': VAR_9 = "operator|="; break;
            case '6': VAR_9 = "operator^="; break;
            case '7': VAR_9 = "`vftable'"; break;
            case '8': VAR_9 = "`vbtable'"; break;
            case '9': VAR_9 = "`vcall'"; break;
            case 'A': VAR_9 = "`typeof'"; break;
            case 'B': VAR_9 = "`local static guard'"; break;
            case 'C': VAR_9 = "`string'"; VAR_6 = 4; break;
            case 'D': VAR_9 = "`vbase destructor'"; break;
            case 'E': VAR_9 = "`vector deleting destructor'"; break;
            case 'F': VAR_9 = "`default constructor closure'"; break;
            case 'G': VAR_9 = "`scalar deleting destructor'"; break;
            case 'H': VAR_9 = "`vector constructor iterator'"; break;
            case 'I': VAR_9 = "`vector destructor iterator'"; break;
            case 'J': VAR_9 = "`vector vbase constructor iterator'"; break;
            case 'K': VAR_9 = "`virtual displacement map'"; break;
            case 'L': VAR_9 = "`eh vector constructor iterator'"; break;
            case 'M': VAR_9 = "`eh vector destructor iterator'"; break;
            case 'N': VAR_9 = "`eh vector vbase constructor iterator'"; break;
            case 'O': VAR_9 = "`copy constructor closure'"; break;
            case 'R':
                VAR_4->flags |= VAR_3;
                switch (*++VAR_4->current)
                {
                case '0':
                    {
                        struct datatype_t VAR_10;
                        struct array VAR_11;

                        VAR_4->current++;
                        FUNC_11(&VAR_11);
                        FUNC_4(VAR_4, &VAR_10, &VAR_11, VAR_0);
                        if (!FUNC_4(VAR_4, &VAR_10, ((void*)0), VAR_0))
                            goto done;
                        VAR_9 = FUNC_13(VAR_4, "%s%s `RTTI Type Descriptor'",
                                                   VAR_10.left, VAR_10.right);
                        VAR_4->current--;
                    }
                    break;
                case '1':
                    {
                        const char* VAR_12, *VAR_13, *VAR_14, *VAR_15;
                        VAR_4->current++;
                        VAR_12 = FUNC_7(VAR_4);
                        VAR_13 = FUNC_7(VAR_4);
                        VAR_14 = FUNC_7(VAR_4);
                        VAR_15 = FUNC_7(VAR_4);
                        VAR_4->current--;
                        VAR_9 = FUNC_13(VAR_4, "`RTTI Base Class Descriptor at (%s,%s,%s,%s)'",
                                                   VAR_12, VAR_13, VAR_14, VAR_15);
                    }
                    break;
                case '2': VAR_9 = "`RTTI Base Class Array'"; break;
                case '3': VAR_9 = "`RTTI Class Hierarchy Descriptor'"; break;
                case '4': VAR_9 = "`RTTI Complete Object Locator'"; break;
                default:
                    FUNC_0("Unknown RTTI operator: _R%c\n", *VAR_4->current);
                    break;
                }
                break;
            case 'S': VAR_9 = "`local vftable'"; break;
            case 'T': VAR_9 = "`local vftable constructor closure'"; break;
            case 'U': VAR_9 = "operator new[]"; break;
            case 'V': VAR_9 = "operator delete[]"; break;
            case 'X': VAR_9 = "`placement delete closure'"; break;
            case 'Y': VAR_9 = "`placement delete[] closure'"; break;
            default:
                FUNC_0("Unknown operator: _%c\n", *VAR_4->current);
                return VAR_0;
            }
            break;
        default:

            FUNC_0("Unknown operator: %c\n", *VAR_4->current);
            return VAR_0;
        }
        VAR_4->current++;
        switch (VAR_6)
        {
        case 1: case 2:
            if (!FUNC_12(VAR_4, VAR_7, -1, &VAR_4->stack))
                return VAR_0;
            break;
        case 4:
            VAR_4->result = (char*)VAR_9;
            VAR_5 = VAR_1;
            goto done;
        case 6:
            {
                char *VAR_16;
                struct array VAR_17;

                FUNC_11(&VAR_17);
                VAR_16 = FUNC_5(VAR_4, &VAR_17, VAR_0, '<', '>');
                if (VAR_16 != ((void*)0)) VAR_9 = FUNC_13(VAR_4, "%s%s", VAR_9, VAR_16);
                VAR_4->names.num = 0;
            }

        default:
            if (!FUNC_12(VAR_4, VAR_9, -1, &VAR_4->stack))
                return VAR_0;
            break;
        }
    }
    else if (*VAR_4->current == '$')
    {


        VAR_4->current++;
        VAR_5 = (VAR_4->result = FUNC_8(VAR_4)) != ((void*)0);
        goto done;
    }
    else if (*VAR_4->current == '?' && VAR_4->current[1] == '$')
        VAR_6 = 5;


    switch (*VAR_4->current)
    {
    case '@': VAR_4->current++; break;
    case '$': break;
    default:

        if (!FUNC_6(VAR_4)) goto done;
        break;
    }

    switch (VAR_6)
    {
    case 0: default: break;
    case 1: case 2:

        if (VAR_4->stack.num <= 1) goto done;
        if (VAR_6 == 1)
            VAR_4->stack.elts[0] = VAR_4->stack.elts[1];
        else
            VAR_4->stack.elts[0] = FUNC_13(VAR_4, "~%s", VAR_4->stack.elts[1]);

        VAR_4->flags |= VAR_3;
        break;
    case 3:
        VAR_4->flags &= ~VAR_3;
        break;
    case 5:
        VAR_4->names.start++;
        break;
    }


    if (*VAR_4->current >= '0' && *VAR_4->current <= '9')
        VAR_5 = FUNC_9(VAR_4);
    else if ((*VAR_4->current >= 'A' && *VAR_4->current <= 'Z') || *VAR_4->current == '$')
        VAR_5 = FUNC_10(VAR_4, VAR_6 == 3);
    else VAR_5 = VAR_0;
done:
    if (VAR_5) FUNC_2(VAR_4->result);
    else FUNC_1("Failed at %s\n", FUNC_3(VAR_4->current));

    return VAR_5;
}
