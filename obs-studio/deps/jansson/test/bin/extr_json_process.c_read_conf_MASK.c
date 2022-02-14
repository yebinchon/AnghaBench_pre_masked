
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int have_hashseed; void* hashseed; void* strip; void* precision; void* sort_keys; void* preserve_order; void* ensure_ascii; void* compact; void* indent; } ;
typedef int FILE ;


 void* FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8(FILE *VAR_1)
{
    char *VAR_2, *VAR_3, *VAR_4;

    VAR_2 = FUNC_2(VAR_1);
    for (VAR_3 = FUNC_7(VAR_2, "\r\n"); VAR_3; VAR_3 = FUNC_7(((void*)0), "\r\n")) {
        if (!FUNC_6(VAR_3, "export ", 7))
            continue;
        VAR_4 = FUNC_4(VAR_3, '=');
        if (!VAR_4) {
            FUNC_3("invalid configuration line\n");
            break;
        }
        *VAR_4++ = '\0';

        if (!FUNC_5(VAR_3, "JSON_INDENT"))
            VAR_0.indent = FUNC_0(VAR_4);
        if (!FUNC_5(VAR_3, "JSON_COMPACT"))
            VAR_0.compact = FUNC_0(VAR_4);
        if (!FUNC_5(VAR_3, "JSON_ENSURE_ASCII"))
            VAR_0.ensure_ascii = FUNC_0(VAR_4);
        if (!FUNC_5(VAR_3, "JSON_PRESERVE_ORDER"))
            VAR_0.preserve_order = FUNC_0(VAR_4);
        if (!FUNC_5(VAR_3, "JSON_SORT_KEYS"))
            VAR_0.sort_keys = FUNC_0(VAR_4);
        if (!FUNC_5(VAR_3, "JSON_REAL_PRECISION"))
            VAR_0.precision = FUNC_0(VAR_4);
        if (!FUNC_5(VAR_3, "STRIP"))
            VAR_0.strip = FUNC_0(VAR_4);
        if (!FUNC_5(VAR_3, "HASHSEED")) {
            VAR_0.have_hashseed = 1;
            VAR_0.hashseed = FUNC_0(VAR_4);
        } else {
            VAR_0.have_hashseed = 0;
        }
    }

    FUNC_1(VAR_2);
}
