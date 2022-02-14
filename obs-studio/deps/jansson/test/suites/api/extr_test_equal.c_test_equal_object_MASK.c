
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8()
{
    json_t *VAR_0, *VAR_1;

    VAR_0 = FUNC_4();
    VAR_1 = FUNC_4();
    if(!VAR_0 || !VAR_1)
        FUNC_0("unable to create objects");

    if(!FUNC_2(VAR_0, VAR_1))
        FUNC_0("json_equal fails for two empty objects");

    FUNC_6(VAR_0, "a", FUNC_3(1));
    FUNC_6(VAR_1, "a", FUNC_3(1));
    FUNC_6(VAR_0, "b", FUNC_7("foo"));
    FUNC_6(VAR_1, "b", FUNC_7("foo"));
    FUNC_6(VAR_0, "c", FUNC_3(2));
    FUNC_6(VAR_1, "c", FUNC_3(2));
    if(!FUNC_2(VAR_0, VAR_1))
        FUNC_0("json_equal fails for two equal objects");

    FUNC_5(VAR_1, "c");
    if(FUNC_2(VAR_0, VAR_1))
        FUNC_0("json_equal fails for two inequal objects");

    FUNC_6(VAR_1, "c", FUNC_3(3));
    if(FUNC_2(VAR_0, VAR_1))
        FUNC_0("json_equal fails for two inequal objects");

    FUNC_5(VAR_1, "c");
    FUNC_6(VAR_1, "d", FUNC_3(2));
    if(FUNC_2(VAR_0, VAR_1))
        FUNC_0("json_equal fails for two inequal objects");

    FUNC_1(VAR_0);
    FUNC_1(VAR_1);
}
