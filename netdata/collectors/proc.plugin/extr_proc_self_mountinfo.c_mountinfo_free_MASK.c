
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mountinfo {struct mountinfo* super_options; struct mountinfo* mount_source; struct mountinfo* filesystem; struct mountinfo* persistent_id; struct mountinfo* mount_options; struct mountinfo* mount_point; struct mountinfo* root; } ;


 int FUNC_0 (struct mountinfo*) ;

__attribute__((used)) static void FUNC_1(struct mountinfo *VAR_0) {
    FUNC_0(VAR_0->root);
    FUNC_0(VAR_0->mount_point);
    FUNC_0(VAR_0->mount_options);
    FUNC_0(VAR_0->persistent_id);
    FUNC_0(VAR_0->filesystem);
    FUNC_0(VAR_0->mount_source);
    FUNC_0(VAR_0->super_options);
    FUNC_0(VAR_0);
}
