
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lfs2_t ;
typedef scalar_t__ lfs2_soff_t ;
typedef int lfs2_file_t ;


 int VAR_0 ;
 int FUNC_0 (char*,void*,...) ;
 scalar_t__ FUNC_1 (int *,int *,int ,int ) ;

int FUNC_2(lfs2_t *VAR_1, lfs2_file_t *VAR_2) {
    FUNC_0("lfs2_file_rewind(%p, %p)", (void*)VAR_1, (void*)VAR_2);
    lfs2_soff_t VAR_3 = FUNC_1(VAR_1, VAR_2, 0, VAR_0);
    if (VAR_3 < 0) {
        FUNC_0("lfs2_file_rewind -> %d", VAR_3);
        return (int)VAR_3;
    }

    FUNC_0("lfs2_file_rewind -> %d", 0);
    return 0;
}
