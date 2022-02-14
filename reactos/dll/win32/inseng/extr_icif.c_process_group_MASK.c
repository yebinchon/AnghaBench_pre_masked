
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inf_section {int dummy; } ;
struct TYPE_2__ {int * lpVtbl; } ;
struct cifgroup {int entry; int priority; int description; int id; int * parent; TYPE_1__ ICifGroup_iface; } ;
struct ciffile {int groups; int ICifFile_iface; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cifgroup*) ;
 struct cifgroup* FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct inf_section*,char*,int *,int ) ;
 int FUNC_4 (struct inf_section*,char*,int *,int *) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static HRESULT FUNC_6(struct ciffile *VAR_3, struct inf_section *VAR_4, const char *VAR_5)
{
    struct cifgroup *VAR_6;
    HRESULT VAR_7 = VAR_0;

    VAR_6 = FUNC_1(sizeof(*VAR_6));
    if (!VAR_6) return VAR_0;

    VAR_6->ICifGroup_iface.lpVtbl = &VAR_2;
    VAR_6->parent = &VAR_3->ICifFile_iface;

    VAR_6->id = FUNC_5(VAR_5);
    if (!VAR_6->id) goto error;

    if (!FUNC_4(VAR_4, "DisplayName", &VAR_6->description, ((void*)0)))
        goto error;
    if (!FUNC_3(VAR_4, "Priority", &VAR_6->priority, 0))
        goto error;

    FUNC_2(&VAR_3->groups, &VAR_6->entry);
    return VAR_1;

error:
    FUNC_0(VAR_6);
    return VAR_7;
}
