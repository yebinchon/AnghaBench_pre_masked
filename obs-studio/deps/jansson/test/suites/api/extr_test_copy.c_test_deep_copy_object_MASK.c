
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (char const*,int ,int *) ;
 int * FUNC_5 (int *,char const*) ;
 void* FUNC_6 (int *) ;
 char* FUNC_7 (void*) ;
 void* FUNC_8 (int *,void*) ;
 int * FUNC_9 (void*) ;
 scalar_t__ FUNC_10 (char const*,char const*) ;

__attribute__((used)) static void FUNC_11(void)
{
    const char *VAR_0 =
        "{\"foo\": \"bar\", \"a\": 1, \"b\": 3.141592, \"c\": [1,2,3,4]}";

    const char *VAR_1[] = {"foo", "a", "b", "c"};
    int VAR_2;

    json_t *VAR_3, *VAR_4;
    void *VAR_5;

    VAR_3 = FUNC_4(VAR_0, 0, ((void*)0));
    if(!VAR_3)
        FUNC_0("unable to parse an object");

    VAR_4 = FUNC_2(VAR_3);
    if(!VAR_4)
        FUNC_0("unable to deep copy an object");
    if(VAR_4 == VAR_3)
        FUNC_0("deep copying an object doesn't copy");
    if(!FUNC_3(VAR_4, VAR_3))
        FUNC_0("deep copying an object produces an inequal copy");

    VAR_2 = 0;
    VAR_5 = FUNC_6(VAR_3);
    while(VAR_5)
    {
        const char *VAR_6;
        json_t *VAR_7, *VAR_8;

        VAR_6 = FUNC_7(VAR_5);
        VAR_7 = FUNC_9(VAR_5);
        VAR_8 = FUNC_5(VAR_4, VAR_6);

        if(VAR_7 == VAR_8)
            FUNC_0("deep copying an object doesn't copy its items");

        if (FUNC_10(VAR_6, VAR_1[VAR_2]) != 0)
            FUNC_0("deep copying an object doesn't preserve key order");

        VAR_5 = FUNC_8(VAR_3, VAR_5);
        VAR_2++;
    }

    FUNC_1(VAR_3);
    FUNC_1(VAR_4);
}
