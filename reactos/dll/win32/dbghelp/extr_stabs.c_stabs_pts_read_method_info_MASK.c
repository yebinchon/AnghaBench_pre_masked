
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symt {int dummy; } ;
struct ParseTypedefData {char* ptr; } ;


 int FUNC_0 (struct ParseTypedefData*,int) ;
 int FUNC_1 (struct ParseTypedefData*,long*) ;
 int FUNC_2 (struct ParseTypedefData*,int *,struct symt**) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static inline int FUNC_4(struct ParseTypedefData* VAR_0)
{
    struct symt* VAR_1;
    const char* VAR_2;
    char VAR_3;

    do
    {

        FUNC_0(VAR_0, FUNC_2(VAR_0, ((void*)0), &VAR_1) == -1);
        if (*VAR_0->ptr == ';') VAR_0->ptr++;


        if (*VAR_0->ptr == ':')
        {
            FUNC_0(VAR_0, !(VAR_2 = FUNC_3(VAR_0->ptr + 1, ';')));
            VAR_0->ptr = VAR_2 + 1;
        }
        FUNC_0(VAR_0, !(*VAR_0->ptr >= '0' && *VAR_0->ptr <= '9'));
        VAR_0->ptr++;
        FUNC_0(VAR_0, !(VAR_0->ptr[0] >= 'A' && *VAR_0->ptr <= 'D'));
        VAR_3 = *++VAR_0->ptr;
        FUNC_0(VAR_0, VAR_3 != '.' && VAR_3 != '?' && VAR_3 != '*');
        VAR_0->ptr++;
        if (VAR_3 == '*')
        {
            long int VAR_4;

            FUNC_0(VAR_0, FUNC_1(VAR_0, &VAR_4) == -1);
            FUNC_0(VAR_0, *VAR_0->ptr++ != ';');
            FUNC_0(VAR_0, FUNC_2(VAR_0, ((void*)0), &VAR_1) == -1);
            FUNC_0(VAR_0, *VAR_0->ptr++ != ';');
        }
    } while (*VAR_0->ptr != ';');
    VAR_0->ptr++;

    return 0;
}
