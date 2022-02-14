
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lfs2_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;

int FUNC_2(lfs2_t *VAR_0) {
    FUNC_0("lfs2_unmount(%p)", (void*)VAR_0);
    int VAR_1 = FUNC_1(VAR_0);
    FUNC_0("lfs2_unmount -> %d", VAR_1);
    return VAR_1;
}
