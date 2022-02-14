
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount_point {struct mount_point* name; int st_inodes; int st_space; } ;


 int FUNC_0 (struct mount_point*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mount_point *VAR_1) {
    if (FUNC_1(VAR_1->st_space))
        FUNC_2(VAR_1->st_space);
    if (FUNC_1(VAR_1->st_inodes))
        FUNC_2(VAR_1->st_inodes);

    VAR_0--;
    FUNC_0(VAR_1->name);
    FUNC_0(VAR_1);
}
