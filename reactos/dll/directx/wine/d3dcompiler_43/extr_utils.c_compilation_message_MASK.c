
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compilation_messages {int capacity; char* string; int size; } ;
typedef int __ms_va_list ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int,char const*,int ) ;

void FUNC_5(struct compilation_messages *VAR_1, const char *VAR_2, __ms_va_list VAR_3)
{
    char* VAR_4;
    int VAR_5, VAR_6;

    if (VAR_1->capacity == 0)
    {
        VAR_1->string = FUNC_2(VAR_0);
        if (VAR_1->string == ((void*)0))
        {
            FUNC_0("Error allocating memory for parser messages\n");
            return;
        }
        VAR_1->capacity = VAR_0;
    }

    while (1)
    {
        VAR_5 = FUNC_4(VAR_1->string + VAR_1->size,
                VAR_1->capacity - VAR_1->size, VAR_2, VAR_3);

        if (VAR_5 < 0 || VAR_5 >= VAR_1->capacity - VAR_1->size)
        {
            VAR_6 = VAR_1->capacity * 2;
            VAR_4 = FUNC_3(VAR_1->string, VAR_6);
            if (VAR_4 == ((void*)0))
            {
                FUNC_0("Error reallocating memory for parser messages\n");
                return;
            }
            VAR_1->string = VAR_4;
            VAR_1->capacity = VAR_6;
        }
        else
        {
            FUNC_1("%s", VAR_1->string + VAR_1->size);
            VAR_1->size += VAR_5;
            return;
        }
    }
}
