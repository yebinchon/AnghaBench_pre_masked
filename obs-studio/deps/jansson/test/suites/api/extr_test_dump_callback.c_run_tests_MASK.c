
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct my_sink {int off; char* buf; int cap; } ;
typedef int json_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,struct my_sink*,int ) ;
 char* FUNC_4 (int *,int ) ;
 int * FUNC_5 (char const*,int ,int *) ;
 char* FUNC_6 (int ) ;
 int VAR_0 ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

__attribute__((used)) static void FUNC_9()
{
    struct my_sink VAR_1;
    json_t *VAR_2;
    const char VAR_3[] = "[\"A\", {\"B\": \"C\", \"e\": false}, 1, null, \"foo\"]";
    char *VAR_4;

    VAR_2 = FUNC_5(VAR_3, 0, ((void*)0));
    if(!VAR_2) {
        FUNC_0("json_loads failed");
    }

    VAR_4 = FUNC_4(VAR_2, 0);
    if (!VAR_4) {
        FUNC_2(VAR_2);
        FUNC_0("json_dumps failed");
    }

    VAR_1.off = 0;
    VAR_1.cap = FUNC_7(VAR_4);
    VAR_1.buf = FUNC_6(VAR_1.cap);
    if (!VAR_1.buf) {
        FUNC_2(VAR_2);
        FUNC_1(VAR_4);
        FUNC_0("malloc failed");
    }

    if (FUNC_3(VAR_2, VAR_0, &VAR_1, 0) == -1) {
        FUNC_2(VAR_2);
        FUNC_1(VAR_4);
        FUNC_1(VAR_1.buf);
        FUNC_0("json_dump_callback failed on an exact-length sink buffer");
    }

    if (FUNC_8(VAR_4, VAR_1.buf, VAR_1.off) != 0) {
        FUNC_2(VAR_2);
        FUNC_1(VAR_4);
        FUNC_1(VAR_1.buf);
        FUNC_0("json_dump_callback and json_dumps did not produce identical output");
    }

    VAR_1.off = 1;
    if (FUNC_3(VAR_2, VAR_0, &VAR_1, 0) != -1) {
        FUNC_2(VAR_2);
        FUNC_1(VAR_4);
        FUNC_1(VAR_1.buf);
        FUNC_0("json_dump_callback succeeded on a short buffer when it should have failed");
    }

    FUNC_2(VAR_2);
    FUNC_1(VAR_4);
    FUNC_1(VAR_1.buf);
}
