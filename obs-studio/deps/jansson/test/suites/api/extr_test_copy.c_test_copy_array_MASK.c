
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 size_t FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (char const*,int ,int *) ;

__attribute__((used)) static void FUNC_7(void)
{
    const char *VAR_0 = "[1, \"foo\", 3.141592, {\"foo\": \"bar\"}]";

    json_t *VAR_1, *VAR_2;
    size_t VAR_3;

    VAR_1 = FUNC_6(VAR_0, 0, ((void*)0));
    if(!VAR_1)
        FUNC_0("unable to parse an array");

    VAR_2 = FUNC_3(VAR_1);
    if(!VAR_2)
        FUNC_0("unable to copy an array");
    if(VAR_2 == VAR_1)
        FUNC_0("copying an array doesn't copy");
    if(!FUNC_5(VAR_2, VAR_1))
        FUNC_0("copying an array produces an inequal copy");

    for(VAR_3 = 0; VAR_3 < FUNC_2(VAR_2); VAR_3++)
    {
        if(FUNC_1(VAR_1, VAR_3) != FUNC_1(VAR_2, VAR_3))
            FUNC_0("copying an array modifies its elements");
    }

    FUNC_4(VAR_1);
    FUNC_4(VAR_2);
}
