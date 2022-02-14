
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_ctx {int dummy; } ;
struct mpv_node {int dummy; } ;
struct entry {char* src; int expect_fail; int out_data; int out_txt; } ;


 int VAR_0 ;
 int FUNC_0 (struct entry*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 struct entry* VAR_1 ;
 int FUNC_3 (int *,struct mpv_node*) ;
 scalar_t__ FUNC_4 (void*,struct mpv_node*,char**,int ) ;
 int FUNC_5 (char**) ;
 scalar_t__ FUNC_6 (char**,struct mpv_node*) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 (int *) ;
 char* FUNC_9 (void*,char*) ;

__attribute__((used)) static void FUNC_10(struct test_ctx *VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
        const struct entry *VAR_4 = &VAR_1[VAR_3];
        void *VAR_5 = FUNC_8(((void*)0));
        char *VAR_6 = FUNC_9(VAR_5, VAR_4->src);
        FUNC_5(&VAR_6);
        struct mpv_node VAR_7;
        bool VAR_8 = FUNC_4(VAR_5, &VAR_7, &VAR_6, VAR_0) >= 0;
        FUNC_2(VAR_8 != VAR_4->expect_fail);
        if (!VAR_8) {
            FUNC_7(VAR_5);
            continue;
        }
        char *VAR_9 = FUNC_9(VAR_5, "");
        FUNC_2(FUNC_6(&VAR_9, &VAR_7) >= 0);
        FUNC_1(VAR_4->out_txt, VAR_9);
        FUNC_2(FUNC_3(&VAR_4->out_data, &VAR_7));
        FUNC_7(VAR_5);
    }
}
