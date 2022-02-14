
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct inf_file {int dummy; } ;
struct TYPE_4__ {int * lpVtbl; } ;
struct ciffile {int ref; TYPE_1__ ICifFile_iface; int groups; int components; } ;
typedef TYPE_1__ ICifFile ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ciffile* FUNC_2 (int) ;
 int FUNC_3 (struct inf_file*) ;
 int FUNC_4 (char const*,struct inf_file**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ciffile*,struct inf_file*) ;

__attribute__((used)) static HRESULT FUNC_7(const char *VAR_4, ICifFile **VAR_5)
{
    struct inf_file *VAR_6 = ((void*)0);
    struct ciffile *VAR_7;
    HRESULT VAR_8 = VAR_0;

    VAR_7 = FUNC_2(sizeof(*VAR_7));
    if(!VAR_7) return VAR_1;

    VAR_7->ICifFile_iface.lpVtbl = &VAR_3;
    VAR_7->ref = 1;

    FUNC_5(&VAR_7->components);
    FUNC_5(&VAR_7->groups);

    VAR_8 = FUNC_4(VAR_4, &VAR_6);
    if (FUNC_0(VAR_8)) goto error;

    VAR_8 = FUNC_6(VAR_7, VAR_6);
    if (FUNC_0(VAR_8)) goto error;

    *VAR_5 = &VAR_7->ICifFile_iface;
    return VAR_2;

error:
    if (VAR_6) FUNC_3(VAR_6);
    FUNC_1(&VAR_7->ICifFile_iface);
    return VAR_8;
}
