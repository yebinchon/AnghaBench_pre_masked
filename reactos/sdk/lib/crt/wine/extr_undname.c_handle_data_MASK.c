
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num; } ;
struct parsed_symbol {int flags; int* current; void* result; TYPE_1__ stack; } ;
struct datatype_t {char* left; char* right; } ;
struct array {int dummy; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct parsed_symbol*,struct datatype_t*,struct array*,int ) ;
 char* FUNC_1 (struct parsed_symbol*) ;
 char* FUNC_2 (struct parsed_symbol*,int ) ;
 int FUNC_3 (struct parsed_symbol*,char const**,char const**) ;
 int FUNC_4 (struct array*) ;
 void* FUNC_5 (struct parsed_symbol*,char*,char const*,...) ;

__attribute__((used)) static BOOL FUNC_6(struct parsed_symbol* VAR_5)
{
    const char* VAR_6 = ((void*)0);
    const char* VAR_7 = ((void*)0);
    const char* VAR_8 = ((void*)0);
    const char* VAR_9;
    struct datatype_t VAR_10;
    char* VAR_11 = ((void*)0);
    BOOL VAR_12 = VAR_0;
    if (!(VAR_5->flags & VAR_3))
    {

        switch (*VAR_5->current)
        {
        case '0': VAR_6 = "private: "; break;
        case '1': VAR_6 = "protected: "; break;
        case '2': VAR_6 = "public: "; break;
        }
    }

    if (!(VAR_5->flags & VAR_4))
    {
        if (*VAR_5->current >= '0' && *VAR_5->current <= '2')
            VAR_7 = "static ";
    }

    VAR_11 = FUNC_2(VAR_5, 0);

    switch (*VAR_5->current++)
    {
    case '0': case '1': case '2':
    case '3': case '4': case '5':
        {
            unsigned VAR_13 = VAR_5->stack.num;
            struct array VAR_14;

            FUNC_4(&VAR_14);

            if (!FUNC_0(VAR_5, &VAR_10, &VAR_14, VAR_0)) goto done;
            if (!FUNC_3(VAR_5, &VAR_8, &VAR_9)) goto done;
            if (VAR_8 && VAR_9) VAR_8 = FUNC_5(VAR_5, "%s %s", VAR_8, VAR_9);
            else if (!VAR_8) VAR_8 = VAR_9;
            VAR_5->stack.num = VAR_13;
        }
        break;
    case '6' :
    case '7' :
        VAR_10.left = VAR_10.right = ((void*)0);
        if (!FUNC_3(VAR_5, &VAR_8, &VAR_9)) goto done;
        if (*VAR_5->current != '@')
        {
            char* VAR_15 = ((void*)0);

            if (!(VAR_15 = FUNC_1(VAR_5)))
                goto done;
            VAR_10.right = FUNC_5(VAR_5, "{for `%s'}", VAR_15);
        }
        break;
    case '8':
    case '9':
        VAR_8 = VAR_10.left = VAR_10.right = ((void*)0);
        break;
    default: goto done;
    }
    if (VAR_5->flags & VAR_2) VAR_10.left = VAR_10.right = VAR_8 = ((void*)0);

    VAR_5->result = FUNC_5(VAR_5, "%s%s%s%s%s%s%s%s", VAR_6,
                             VAR_7, VAR_10.left,
                             VAR_8 && VAR_10.left ? " " : ((void*)0), VAR_8,
                             VAR_8 || VAR_10.left ? " " : ((void*)0), VAR_11, VAR_10.right);
    VAR_12 = VAR_1;
done:
    return VAR_12;
}
