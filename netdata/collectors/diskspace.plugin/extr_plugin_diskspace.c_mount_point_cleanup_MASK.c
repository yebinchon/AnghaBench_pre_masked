
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount_point_metadata {int updated; int st_inodes; int st_space; int * rd_inodes_reserved; int * rd_inodes_used; int * rd_inodes_avail; int * rd_space_reserved; int * rd_space_used; int * rd_space_avail; scalar_t__ shown_error; scalar_t__ collected; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;

int FUNC_2(void *VAR_1, void *VAR_2) {
    (void)VAR_2;

    struct mount_point_metadata *VAR_3 = (struct mount_point_metadata *)VAR_1;
    if(!VAR_3) return 0;

    if(FUNC_0(VAR_3->updated)) {
        VAR_3->updated = 0;
        return 0;
    }

    if(FUNC_0(VAR_0 && VAR_3->collected)) {
        VAR_3->collected = 0;
        VAR_3->updated = 0;
        VAR_3->shown_error = 0;

        VAR_3->rd_space_avail = ((void*)0);
        VAR_3->rd_space_used = ((void*)0);
        VAR_3->rd_space_reserved = ((void*)0);

        VAR_3->rd_inodes_avail = ((void*)0);
        VAR_3->rd_inodes_used = ((void*)0);
        VAR_3->rd_inodes_reserved = ((void*)0);

        FUNC_1(VAR_3->st_space);
        FUNC_1(VAR_3->st_inodes);
    }

    return 0;
}
