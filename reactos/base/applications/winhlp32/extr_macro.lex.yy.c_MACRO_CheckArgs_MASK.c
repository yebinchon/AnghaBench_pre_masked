
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int proto; int function; int integer; scalar_t__ string; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,void**) ;
 int VAR_2 ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char const*) ;
 unsigned int FUNC_6 (char const*) ;
 char const* FUNC_7 (int) ;
 char FUNC_8 () ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_9(void* VAR_4[], unsigned VAR_5, const char* VAR_6)
{
    int VAR_7;
    unsigned int VAR_8 = 0, VAR_9 = 0;

    FUNC_3("Checking %s\n", FUNC_5(VAR_6));

    if (FUNC_8() != '(') {FUNC_4("missing (\n");return -1;}

    if (*VAR_6)
    {
        VAR_8 = FUNC_6(VAR_6);
        for (;;)
        {
            VAR_7 = FUNC_8();
            FUNC_3("Got %s <=> %c\n", FUNC_5(FUNC_7(VAR_7)), *VAR_6);

            switch (*VAR_6)
            {
            case 'S':
                if (VAR_7 != VAR_2)
                {FUNC_4("missing S\n");return -1;}
                VAR_4[VAR_9] = (void*)VAR_3.string;
                break;
            case 'U':
            case 'I':
                if (VAR_7 != VAR_1)
                {FUNC_4("missing U\n");return -1;}
                VAR_4[VAR_9] = FUNC_0(VAR_3.integer);
                break;
            case 'B':
                if (VAR_7 != VAR_0)
                {FUNC_4("missing B\n");return -1;}
                if (FUNC_1(VAR_3.function, VAR_3.proto, &VAR_4[VAR_9]) == 0)
                    return -1;
                break;
            default:
                FUNC_4("unexpected %s while args is %c\n", FUNC_5(FUNC_7(VAR_7)), *VAR_6);
                return -1;
            }
            VAR_9++;
            if (*++VAR_6 == '\0') break;
            VAR_7 = FUNC_8();
            if (VAR_7 == ')') goto CheckArgs_end;
            if (VAR_7 != ',') {FUNC_4("missing ,\n");return -1;}
            if (VAR_9 >= VAR_5) {FUNC_2("stack overflow (%d)\n", VAR_5);return -1;}
        }
    }
    if (FUNC_8() != ')') {FUNC_4("missing )\n");return -1;}

CheckArgs_end:
    while (VAR_8 > VAR_9) VAR_4[--VAR_8] = ((void*)0);
    return VAR_9;
}
