
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int * FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,char*,int ) ;
 scalar_t__ FUNC_7 (int *,char*,int *) ;
 int * FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9()
{
    json_t *VAR_0, *VAR_1;

    VAR_0 = FUNC_4();
    VAR_1 = FUNC_8("bar");

    if(!VAR_0)
        FUNC_0("unable to create object");
    if(!VAR_1)
        FUNC_0("unable to create string");

    if(FUNC_7(VAR_0, "foo", VAR_1))
        FUNC_0("json_object_set_nocheck failed");
    if(FUNC_5(VAR_0, "foo") != VAR_1)
        FUNC_0("json_object_get after json_object_set_nocheck failed");


    if(FUNC_7(VAR_0, "a\xefz", VAR_1))
        FUNC_0("json_object_set_nocheck failed for invalid UTF-8");
    if(FUNC_5(VAR_0, "a\xefz") != VAR_1)
        FUNC_0("json_object_get after json_object_set_nocheck failed");

    if(FUNC_6(VAR_0, "bax", FUNC_2(123)))
        FUNC_0("json_object_set_new_nocheck failed");
    if(FUNC_3(FUNC_5(VAR_0, "bax")) != 123)
        FUNC_0("json_object_get after json_object_set_new_nocheck failed");


    if(FUNC_6(VAR_0, "asdf\xfe", FUNC_2(321)))
        FUNC_0("json_object_set_new_nocheck failed for invalid UTF-8");
    if(FUNC_3(FUNC_5(VAR_0, "asdf\xfe")) != 321)
        FUNC_0("json_object_get after json_object_set_new_nocheck failed");

    FUNC_1(VAR_1);
    FUNC_1(VAR_0);
}
