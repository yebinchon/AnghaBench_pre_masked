
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int parse_type; unsigned int data_type; } ;
typedef char WCHAR ;
typedef unsigned int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;
 char FUNC_1 (char) ;
 unsigned int FUNC_2 (char*,char**,int) ;

__attribute__((used)) static BOOL FUNC_3(struct parser *VAR_4, WCHAR **VAR_5)
{
    struct data_type { const WCHAR *tag; int len; int type; int parse_type; };

    static const WCHAR VAR_6[] = {'"'};
    static const WCHAR VAR_7[] = {'h','e','x',':'};
    static const WCHAR VAR_8[] = {'d','w','o','r','d',':'};
    static const WCHAR VAR_9[] = {'h','e','x','('};

    static const struct data_type VAR_10[] = {

        { VAR_6, 1, 128, 128 },
        { VAR_7, 4, 130, 130 },
        { VAR_8, 6, 129, 129 },
        { VAR_9, 4, -1, 130 },
        { ((void*)0), 0, 0, 0 }
    };

    const struct data_type *VAR_11;

    for (VAR_11 = VAR_10; VAR_11->tag; VAR_11++)
    {
        if (FUNC_0(VAR_11->tag, *VAR_5, VAR_11->len))
            continue;

        VAR_4->parse_type = VAR_11->parse_type;
        VAR_4->data_type = VAR_11->parse_type;
        *VAR_5 += VAR_11->len;

        if (VAR_11->type == -1)
        {
            WCHAR *VAR_12;
            DWORD VAR_13;

            if (!**VAR_5 || FUNC_1((*VAR_5)[1]) == 'x')
                return VAR_1;


            VAR_13 = FUNC_2(*VAR_5, &VAR_12, 16);
            if (*VAR_12 != ')' || *(VAR_12 + 1) != ':' || (VAR_13 == ~0u && VAR_3 == VAR_0))
                return VAR_1;

            VAR_4->data_type = VAR_13;
            *VAR_5 = VAR_12 + 2;
        }
        return VAR_2;
    }
    return VAR_1;
}
