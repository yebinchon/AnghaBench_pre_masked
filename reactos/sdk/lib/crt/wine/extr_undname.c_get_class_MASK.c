
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct array {unsigned int start; unsigned int num; } ;
struct parsed_symbol {char* current; char const* result; struct array stack; struct array names; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct parsed_symbol*) ;
 char* FUNC_1 (struct parsed_symbol*) ;
 char* FUNC_2 (struct parsed_symbol*) ;
 char* FUNC_3 (struct array*,int ) ;
 int FUNC_4 (struct array*) ;
 int FUNC_5 (struct parsed_symbol*,char const*,int,struct array*) ;
 char* FUNC_6 (struct parsed_symbol*,char*,char const*) ;
 int FUNC_7 (struct parsed_symbol*) ;

__attribute__((used)) static BOOL FUNC_8(struct parsed_symbol* VAR_2)
{
    const char* VAR_3 = ((void*)0);

    while (*VAR_2->current != '@')
    {
        switch (*VAR_2->current)
        {
        case '\0': return VAR_0;

        case '0': case '1': case '2': case '3':
        case '4': case '5': case '6': case '7':
        case '8': case '9':
            VAR_3 = FUNC_3(&VAR_2->names, *VAR_2->current++ - '0');
            break;
        case '?':
            switch (*++VAR_2->current)
            {
            case '$':
                VAR_2->current++;
                if ((VAR_3 = FUNC_2(VAR_2)) &&
                    !FUNC_5(VAR_2, VAR_3, -1, &VAR_2->names))
                    return VAR_0;
                break;
            case '?':
                {
                    struct array VAR_4 = VAR_2->stack;
                    unsigned int VAR_5 = VAR_2->names.start;
                    unsigned int VAR_6 = VAR_2->names.num;

                    FUNC_4( &VAR_2->stack );
                    if (FUNC_7( VAR_2 )) VAR_3 = FUNC_6( VAR_2, "`%s'", VAR_2->result );
                    VAR_2->names.start = VAR_5;
                    VAR_2->names.num = VAR_6;
                    VAR_2->stack = VAR_4;
                }
                break;
            default:
                if (!(VAR_3 = FUNC_1( VAR_2 ))) return VAR_0;
                VAR_3 = FUNC_6( VAR_2, "`%s'", VAR_3 );
                break;
            }
            break;
        default:
            VAR_3 = FUNC_0(VAR_2);
            break;
        }
        if (!VAR_3 || !FUNC_5(VAR_2, VAR_3, -1, &VAR_2->stack))
            return VAR_0;
    }
    VAR_2->current++;
    return VAR_1;
}
