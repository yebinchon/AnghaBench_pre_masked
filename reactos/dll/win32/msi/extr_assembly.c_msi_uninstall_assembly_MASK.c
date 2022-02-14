
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_12__ {scalar_t__ attributes; int installed; int display_name; int * clr_version; scalar_t__ application; scalar_t__ feature; } ;
struct TYPE_11__ {TYPE_4__* assembly; } ;
struct TYPE_10__ {void* Action; } ;
struct TYPE_9__ {int ** cache_net; int * cache_sxs; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef TYPE_2__ MSIFEATURE ;
typedef TYPE_3__ MSICOMPONENT ;
typedef TYPE_4__ MSIASSEMBLY ;
typedef int IAssemblyCache ;
typedef int HRESULT ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ,int *,int *) ;
 void* VAR_3 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_4 ;

UINT FUNC_6( MSIPACKAGE *VAR_5, MSICOMPONENT *VAR_6 )
{
    HRESULT VAR_7;
    IAssemblyCache *VAR_8;
    MSIASSEMBLY *VAR_9 = VAR_6->assembly;
    MSIFEATURE *VAR_10 = ((void*)0);

    if (VAR_6->assembly->feature)
        VAR_10 = FUNC_5( VAR_5, VAR_6->assembly->feature );

    if (VAR_9->application)
    {
        if (VAR_10) VAR_10->Action = VAR_3;
        return VAR_1;
    }
    FUNC_2("removing %s\n", FUNC_4(VAR_9->display_name));

    if (VAR_9->attributes == VAR_4)
    {
        VAR_8 = VAR_5->cache_sxs;
        VAR_7 = FUNC_1( VAR_8, 0, VAR_9->display_name, ((void*)0), ((void*)0) );
        if (FUNC_0( VAR_7 )) FUNC_3("failed to uninstall assembly 0x%08x\n", VAR_7);
    }
    else
    {
        unsigned int VAR_11;
        for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
        {
            if (!VAR_9->clr_version[VAR_11]) continue;
            VAR_8 = VAR_5->cache_net[VAR_11];
            if (VAR_8)
            {
                VAR_7 = FUNC_1( VAR_8, 0, VAR_9->display_name, ((void*)0), ((void*)0) );
                if (FUNC_0( VAR_7 )) FUNC_3("failed to uninstall assembly 0x%08x\n", VAR_7);
            }
        }
    }
    if (VAR_10) VAR_10->Action = VAR_3;
    VAR_9->installed = VAR_2;
    return VAR_1;
}
