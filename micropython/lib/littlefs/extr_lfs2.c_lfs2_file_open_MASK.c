
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lfs2_file_config {int member_0; } ;
typedef int lfs2_t ;
typedef int lfs2_file_t ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int *,int *,char const*,int,struct lfs2_file_config const*) ;

int FUNC_2(lfs2_t *VAR_0, lfs2_file_t *VAR_1,
        const char *VAR_2, int VAR_3) {
    FUNC_0("lfs2_file_open(%p, %p, \"%s\", %x)",
            (void*)VAR_0, (void*)VAR_1, VAR_2, VAR_3);
    static const struct lfs2_file_config VAR_4 = {0};
    int VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, &VAR_4);
    FUNC_0("lfs2_file_open -> %d", VAR_5);
    return VAR_5;
}
