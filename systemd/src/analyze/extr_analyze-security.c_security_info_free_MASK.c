
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct security_info {int system_call_filter; int system_call_architectures; int supplementary_groups; int device_policy; int notify_access; int keyring_mode; int root_image; int root_directory; int protect_system; int protect_home; int user; int fragment_path; int load_state; int type; int id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct security_info *VAR_0) {
        if (!VAR_0)
                return;

        FUNC_0(VAR_0->id);
        FUNC_0(VAR_0->type);
        FUNC_0(VAR_0->load_state);
        FUNC_0(VAR_0->fragment_path);

        FUNC_0(VAR_0->user);

        FUNC_0(VAR_0->protect_home);
        FUNC_0(VAR_0->protect_system);

        FUNC_0(VAR_0->root_directory);
        FUNC_0(VAR_0->root_image);

        FUNC_0(VAR_0->keyring_mode);
        FUNC_0(VAR_0->notify_access);

        FUNC_0(VAR_0->device_policy);

        FUNC_2(VAR_0->supplementary_groups);
        FUNC_2(VAR_0->system_call_architectures);

        FUNC_1(VAR_0->system_call_filter);
}
