
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num; } ;
struct parsed_symbol {char* current; int flags; void* result; TYPE_1__ stack; } ;
struct datatype_t {char* left; int * right; } ;
struct array {int dummy; } ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct parsed_symbol*,struct datatype_t*,struct array*,scalar_t__) ;
 char* FUNC_1 (struct parsed_symbol*,struct array*,scalar_t__,char,char) ;
 int FUNC_2 (int ,char const**,char const**,int) ;
 char* FUNC_3 (struct parsed_symbol*,int ) ;
 int FUNC_4 (struct parsed_symbol*,char const**,char const**) ;
 char* FUNC_5 (struct parsed_symbol*) ;
 int FUNC_6 (struct array*) ;
 void* FUNC_7 (struct parsed_symbol*,char*,char const*,...) ;

__attribute__((used)) static BOOL FUNC_8(struct parsed_symbol* VAR_7, BOOL VAR_8)
{
    char VAR_9;
    const char* VAR_10 = ((void*)0);
    int VAR_11 = -1;
    const char* VAR_12 = ((void*)0);
    struct datatype_t VAR_13;
    const char* VAR_14;
    const char* VAR_15 = ((void*)0);
    const char* VAR_16;
    const char* VAR_17 = ((void*)0);
    const char* VAR_18 = ((void*)0);
    BOOL VAR_19 = VAR_0, VAR_20 = VAR_1, VAR_21 = VAR_1;
    unsigned VAR_22;
    struct array VAR_23;
    VAR_9 = *VAR_7->current++;
    if (VAR_9 == '$')
    {
        if (*VAR_7->current >= '0' && *VAR_7->current <= '5')
            VAR_11 = (*VAR_7->current - '0') / 2;
        else if (*VAR_7->current == 'R')
            VAR_11 = (VAR_7->current[1] - '0') / 2;
        else if (*VAR_7->current != 'B')
            goto done;
    }
    else if (VAR_9 >= 'A' && VAR_9 <= 'Z')
        VAR_11 = (VAR_9 - 'A') / 8;
    else
        goto done;

    switch (VAR_11)
    {
    case 0: VAR_10 = "private: "; break;
    case 1: VAR_10 = "protected: "; break;
    case 2: VAR_10 = "public: "; break;
    }
    if (VAR_9 == '$' || (VAR_9 - 'A') % 8 == 6 || (VAR_9 - 'A') % 8 == 7)
        VAR_10 = FUNC_7(VAR_7, "[thunk]:%s", VAR_10 ? VAR_10 : " ");

    if (VAR_9 == '$' && *VAR_7->current != 'B')
        VAR_12 = "virtual ";
    else if (VAR_9 <= 'X')
    {
        switch ((VAR_9 - 'A') % 8)
        {
        case 2: case 3: VAR_12 = "static "; break;
        case 4: case 5: case 6: case 7: VAR_12 = "virtual "; break;
        }
    }

    if (VAR_7->flags & VAR_3)
        VAR_10 = ((void*)0);
    if (VAR_7->flags & VAR_5)
        VAR_12 = ((void*)0);

    VAR_18 = FUNC_3(VAR_7, 0);

    if (VAR_9 == '$' && *VAR_7->current == 'B')
    {
        const char *VAR_24;

        VAR_7->current++;
        VAR_24 = FUNC_5(VAR_7);

        if(!VAR_24 || *VAR_7->current++ != 'A') goto done;
        VAR_18 = FUNC_7(VAR_7, "%s{%s,{flat}}' }'", VAR_18, VAR_24);
        VAR_20 = VAR_0;
        VAR_21 = VAR_0;
    }
    else if (VAR_9 == '$' && *VAR_7->current == 'R')
    {
        const char *VAR_25, *VAR_26, *VAR_27, *VAR_28;

        VAR_7->current += 2;
        VAR_25 = FUNC_5(VAR_7);
        VAR_26 = FUNC_5(VAR_7);
        VAR_27 = FUNC_5(VAR_7);
        VAR_28 = FUNC_5(VAR_7);

        if(!VAR_25 || !VAR_26 || !VAR_27 || !VAR_28) goto done;
        VAR_18 = FUNC_7(VAR_7, "%s`vtordispex{%s,%s,%s,%s}' ", VAR_18, VAR_25, VAR_26, VAR_27, VAR_28);
    }
    else if (VAR_9 == '$')
    {
        const char *VAR_29, *VAR_30;

        VAR_7->current++;
        VAR_29 = FUNC_5(VAR_7);
        VAR_30 = FUNC_5(VAR_7);

        if (!VAR_29 || !VAR_30) goto done;
        VAR_18 = FUNC_7(VAR_7, "%s`vtordisp{%s,%s}' ", VAR_18, VAR_29, VAR_30);
    }
    else if ((VAR_9 - 'A') % 8 == 6 || (VAR_9 - 'A') % 8 == 7)
        VAR_18 = FUNC_7(VAR_7, "%s`adjustor{%s}' ", VAR_18, FUNC_5(VAR_7));

    if (VAR_20 && (VAR_9 == '$' ||
                (VAR_9 <= 'X' && (VAR_9 - 'A') % 8 != 2 && (VAR_9 - 'A') % 8 != 3)))
    {
        const char *VAR_31;


        if (!FUNC_4(VAR_7, &VAR_15, &VAR_31)) goto done;
        if (VAR_15 || VAR_31) VAR_15 = FUNC_7(VAR_7, "%s %s", VAR_15, VAR_31);
    }

    if (!FUNC_2(*VAR_7->current++, &VAR_14, &VAR_16,
                                VAR_7->flags))
        goto done;

    FUNC_6(&VAR_23);


    if (VAR_21 && *VAR_7->current == '@')
    {
        VAR_13.left = "void";
        VAR_13.right = ((void*)0);
        VAR_7->current++;
    }
    else if (VAR_21)
    {
        if (!FUNC_0(VAR_7, &VAR_13, &VAR_23, VAR_0))
            goto done;
    }
    if (!VAR_21 || VAR_7->flags & VAR_4)
        VAR_13.left = VAR_13.right = ((void*)0);
    if (VAR_8)
    {
        VAR_18 = FUNC_7(VAR_7, "%s%s%s", VAR_18, VAR_13.left, VAR_13.right);
        VAR_13.left = VAR_13.right = ((void*)0);
    }

    VAR_22 = VAR_7->stack.num;
    if (VAR_20 && !(VAR_17 = FUNC_1(VAR_7, &VAR_23, VAR_1, '(', ')'))) goto done;
    if (VAR_7->flags & VAR_2) VAR_17 = VAR_15 = ((void*)0);
    if (VAR_7->flags & VAR_6) VAR_15 = ((void*)0);
    VAR_7->stack.num = VAR_22;




    VAR_7->result = FUNC_7(VAR_7, "%s%s%s%s%s%s%s%s%s%s%s",
                             VAR_10, VAR_12, VAR_13.left,
                             (VAR_13.left && !VAR_13.right) ? " " : ((void*)0),
                             VAR_14, VAR_14 ? " " : ((void*)0), VAR_16,
                             VAR_18, VAR_17, VAR_15, VAR_13.right);
    VAR_19 = VAR_1;
done:
    return VAR_19;
}
