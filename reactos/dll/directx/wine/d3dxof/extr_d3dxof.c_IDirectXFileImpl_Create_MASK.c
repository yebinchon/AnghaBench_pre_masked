
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_11__ {int ref; int nb_xtemplates; TYPE_3__ IDirectXFile_iface; TYPE_2__* xtemplates; } ;
struct TYPE_9__ {int nb_members; TYPE_1__* members; int name; } ;
struct TYPE_8__ {int nb_dims; int* dim_value; int * dim_fixed; int type; } ;
typedef TYPE_3__* LPVOID ;
typedef int IUnknown ;
typedef TYPE_4__ IDirectXFileImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int *,TYPE_3__**) ;
 int VAR_6 ;
 int FUNC_3 (int ,char*) ;

HRESULT FUNC_4(IUnknown* VAR_7, LPVOID* VAR_8)
{
    IDirectXFileImpl* VAR_9;

    FUNC_2("(%p,%p)\n", VAR_7, VAR_8);

    VAR_9 = FUNC_1(FUNC_0(), VAR_1, sizeof(IDirectXFileImpl));
    if (!VAR_9)
        return VAR_0;

    VAR_9->IDirectXFile_iface.lpVtbl = &VAR_2;
    VAR_9->ref = 1;


    VAR_9->nb_xtemplates = 1;
    FUNC_3(VAR_9->xtemplates[0].name, "indexColor");
    VAR_9->xtemplates[0].nb_members = 2;
    VAR_9->xtemplates[0].members[0].type = VAR_4;
    VAR_9->xtemplates[0].members[0].nb_dims = 0;
    VAR_9->xtemplates[0].members[1].type = VAR_5;
    VAR_9->xtemplates[0].members[1].nb_dims = 1;
    VAR_9->xtemplates[0].members[1].dim_fixed[0] = VAR_6;
    VAR_9->xtemplates[0].members[1].dim_value[0] = 4;

    *VAR_8 = &VAR_9->IDirectXFile_iface;

    return VAR_3;
}
