
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lfs2_info {int dummy; } ;
typedef int lfs2_t ;
typedef int lfs2_stag_t ;
typedef int lfs2_mdir_t ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int *,int *,char const**,int *) ;
 int FUNC_2 (int *,int *,int ,struct lfs2_info*) ;
 int FUNC_3 (int) ;

int FUNC_4(lfs2_t *VAR_0, const char *VAR_1, struct lfs2_info *VAR_2) {
    FUNC_0("lfs2_stat(%p, \"%s\", %p)", (void*)VAR_0, VAR_1, (void*)VAR_2);
    lfs2_mdir_t VAR_3;
    lfs2_stag_t VAR_4 = FUNC_1(VAR_0, &VAR_3, &VAR_1, ((void*)0));
    if (VAR_4 < 0) {
        FUNC_0("lfs2_stat -> %d", VAR_4);
        return (int)VAR_4;
    }

    int VAR_5 = FUNC_2(VAR_0, &VAR_3, FUNC_3(VAR_4), VAR_2);
    FUNC_0("lfs2_stat -> %d", VAR_5);
    return VAR_5;
}
