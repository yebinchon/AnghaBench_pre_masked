
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inf_section {int dummy; } ;
struct ciffile {int ICifFile_iface; } ;
struct TYPE_2__ {int * lpVtbl; } ;
struct cifcomponent {int priority; int current_priority; int platform; int build; int version; int as_aware; int visibleui; int admin; int reboot; int key_uninstall; int key_progress; int key_cancel; int key_success; int size_win; int size_app; int size_extracted; int size_download; int patchid; int locale; int group; int details; int guid; int description; int id; int queue_state; int dependencies; int urls; int * parent; TYPE_1__ ICifComponent_iface; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ciffile*,struct cifcomponent*) ;
 int VAR_3 ;
 int FUNC_1 (struct cifcomponent*) ;
 struct cifcomponent* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cifcomponent*,struct inf_section*) ;
 int FUNC_5 (struct inf_section*,int *) ;
 int FUNC_6 (struct cifcomponent*,struct inf_section*) ;
 int FUNC_7 (struct inf_section*,int *,int *) ;
 int FUNC_8 (struct inf_section*,char*,int *,int) ;
 int FUNC_9 (struct inf_section*,char*,int,int *,int ) ;
 int FUNC_10 (struct inf_section*,char*,int *,char*) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static HRESULT FUNC_12(struct ciffile *VAR_4, struct inf_section *VAR_5, const char *VAR_6)
{
    struct cifcomponent *VAR_7;
    HRESULT VAR_8 = VAR_1;

    VAR_7 = FUNC_2(sizeof(*VAR_7));
    if (!VAR_7) return VAR_1;

    VAR_7->ICifComponent_iface.lpVtbl = &VAR_3;
    VAR_7->parent = &VAR_4->ICifFile_iface;

    FUNC_3(&VAR_7->urls);
    FUNC_3(&VAR_7->dependencies);

    VAR_7->queue_state = VAR_0;

    VAR_7->id = FUNC_11(VAR_6);
    if (!VAR_7->id) goto error;

    if (!FUNC_10(VAR_5, "DisplayName", &VAR_7->description, ((void*)0)))
        goto error;
    if (!FUNC_10(VAR_5, "GUID", &VAR_7->guid, ((void*)0)))
        goto error;
    if (!FUNC_10(VAR_5, "Details", &VAR_7->details, ((void*)0)))
        goto error;
    if (!FUNC_10(VAR_5, "Group", &VAR_7->group, ((void*)0)))
        goto error;
    if (!FUNC_10(VAR_5, "Locale", &VAR_7->locale, "en"))
        goto error;
    if (!FUNC_10(VAR_5, "PatchID", &VAR_7->patchid, ((void*)0)))
        goto error;

    if (!FUNC_9(VAR_5, "Size", 1, &VAR_7->size_download, 0))
        goto error;
    if (!FUNC_9(VAR_5, "Size", 2, &VAR_7->size_extracted, 0))
        goto error;
    if (!FUNC_9(VAR_5, "InstalledSize", 1, &VAR_7->size_app, 0))
        goto error;
    if (!FUNC_9(VAR_5, "InstalledSize", 2, &VAR_7->size_win, 0))
        goto error;

    if (!FUNC_10(VAR_5, "SuccessKey", &VAR_7->key_success, ((void*)0)))
        goto error;
    if (!FUNC_10(VAR_5, "CancelKey", &VAR_7->key_cancel, ((void*)0)))
        goto error;
    if (!FUNC_10(VAR_5, "ProgressKey", &VAR_7->key_progress, ((void*)0)))
        goto error;
    if (!FUNC_10(VAR_5, "UninstallKey", &VAR_7->key_uninstall, ((void*)0)))
        goto error;
    if (!FUNC_8(VAR_5, "Reboot", &VAR_7->reboot, 0))
        goto error;
    if (!FUNC_8(VAR_5, "AdminCheck", &VAR_7->admin, 0))
        goto error;
    if (!FUNC_8(VAR_5, "UIVisible", &VAR_7->visibleui, 1))
        goto error;
    if (!FUNC_8(VAR_5, "ActiveSetupAware", &VAR_7->as_aware, 0))
        goto error;
    if (!FUNC_8(VAR_5, "Priority", &VAR_7->priority, 0))
        goto error;

    if (!FUNC_7(VAR_5, &VAR_7->version, &VAR_7->build))
        goto error;
    if (!FUNC_5(VAR_5, &VAR_7->platform))
        goto error;
    if (!FUNC_6(VAR_7, VAR_5))
        goto error;
    if (!FUNC_4(VAR_7, VAR_5))
        goto error;

    VAR_7->current_priority = VAR_7->priority;

    FUNC_0(VAR_4, VAR_7);
    return VAR_2;

error:
    FUNC_1(VAR_7);
    return VAR_8;
}
