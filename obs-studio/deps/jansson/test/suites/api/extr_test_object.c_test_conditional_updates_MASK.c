
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int * FUNC_7 (char*,char*,int,char*,int) ;

__attribute__((used)) static void FUNC_8()
{
    json_t *VAR_0, *VAR_1;

    VAR_0 = FUNC_7("{sisi}", "foo", 1, "bar", 2);
    VAR_1 = FUNC_7("{sisi}", "foo", 3, "baz", 4);

    if(FUNC_5(VAR_0, VAR_1))
        FUNC_0("json_object_update_existing failed");

    if(FUNC_4(VAR_0) != 2)
        FUNC_0("json_object_update_existing added new items");

    if(FUNC_2(FUNC_3(VAR_0, "foo")) != 3)
        FUNC_0("json_object_update_existing failed to update existing key");

    if(FUNC_2(FUNC_3(VAR_0, "bar")) != 2)
        FUNC_0("json_object_update_existing updated wrong key");

    FUNC_1(VAR_0);

    VAR_0 = FUNC_7("{sisi}", "foo", 1, "bar", 2);

    if(FUNC_6(VAR_0, VAR_1))
        FUNC_0("json_object_update_missing failed");

    if(FUNC_4(VAR_0) != 3)
        FUNC_0("json_object_update_missing didn't add new items");

    if(FUNC_2(FUNC_3(VAR_0, "foo")) != 1)
        FUNC_0("json_object_update_missing updated existing key");

    if(FUNC_2(FUNC_3(VAR_0, "bar")) != 2)
        FUNC_0("json_object_update_missing updated wrong key");

    if(FUNC_2(FUNC_3(VAR_0, "baz")) != 4)
        FUNC_0("json_object_update_missing didn't add new items");

    FUNC_1(VAR_0);
    FUNC_1(VAR_1);
}
