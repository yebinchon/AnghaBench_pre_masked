
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (char const*,char*) ;

__attribute__((used)) static void FUNC_10()
{
    json_t *VAR_2;
    char *VAR_3;

    const char *VAR_4 = "{\"foobar\": 1, \"bazquux\": 6, \"lorem ipsum\": 3, \"sit amet\": 5, \"helicopter\": 7}";

    VAR_2 = FUNC_6();

    FUNC_8(VAR_2, "foobar", FUNC_5(1));
    FUNC_8(VAR_2, "bazquux", FUNC_5(2));
    FUNC_8(VAR_2, "lorem ipsum", FUNC_5(3));
    FUNC_8(VAR_2, "dolor", FUNC_5(4));
    FUNC_8(VAR_2, "sit amet", FUNC_5(5));


    FUNC_8(VAR_2, "bazquux", FUNC_5(6));


    FUNC_7(VAR_2, "dolor");


    FUNC_8(VAR_2, "helicopter", FUNC_5(7));

    VAR_3 = FUNC_4(VAR_2, VAR_0);

    if(FUNC_9(VAR_4, VAR_3) != 0) {
        FUNC_1(VAR_1, "%s != %s", VAR_4, VAR_3);
        FUNC_0("JSON_PRESERVE_ORDER doesn't work");
    }

    FUNC_2(VAR_3);
    FUNC_3(VAR_2);
}
