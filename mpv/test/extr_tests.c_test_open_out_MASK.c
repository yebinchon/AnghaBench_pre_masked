
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_ctx {int out_path; } ;
typedef int FILE ;


 int FUNC_0 (struct test_ctx*,char*,char*) ;
 int FUNC_1 () ;
 int * FUNC_2 (char*,char*) ;
 char* FUNC_3 (int,char*,int ,char const*) ;

FILE *FUNC_4(struct test_ctx *VAR_0, const char *VAR_1)
{
    char *VAR_2 = FUNC_3(4096, "%s/%s", VAR_0->out_path, VAR_1);
    FILE *VAR_3 = FUNC_2(VAR_2, "wb");
    if (!VAR_3) {
        FUNC_0(VAR_0, "Could not open '%s' for writing.\n", VAR_2);
        FUNC_1();
    }
    return VAR_3;
}
