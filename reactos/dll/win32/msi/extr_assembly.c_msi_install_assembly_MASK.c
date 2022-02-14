
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_15__ {int * TargetPath; } ;
struct TYPE_14__ {scalar_t__ attributes; int installed; int manifest; scalar_t__ application; scalar_t__ feature; } ;
struct TYPE_13__ {int KeyPath; TYPE_4__* assembly; } ;
struct TYPE_12__ {void* Action; } ;
struct TYPE_11__ {int ** cache_net; int * cache_sxs; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef TYPE_2__ MSIFEATURE ;
typedef TYPE_3__ MSICOMPONENT ;
typedef TYPE_4__ MSIASSEMBLY ;
typedef int IAssemblyCache ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ,int const*,int *) ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,int ) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int const*) ;
 size_t FUNC_5 (int const*) ;
 TYPE_2__* FUNC_6 (TYPE_1__*,scalar_t__) ;
 TYPE_7__* FUNC_7 (TYPE_1__*,int ) ;
 scalar_t__ VAR_5 ;

UINT FUNC_8( MSIPACKAGE *VAR_6, MSICOMPONENT *VAR_7 )
{
    HRESULT VAR_8;
    const WCHAR *VAR_9;
    IAssemblyCache *VAR_10;
    MSIASSEMBLY *VAR_11 = VAR_7->assembly;
    MSIFEATURE *VAR_12 = ((void*)0);

    if (VAR_7->assembly->feature)
        VAR_12 = FUNC_6( VAR_6, VAR_7->assembly->feature );

    if (VAR_11->application)
    {
        if (VAR_12) VAR_12->Action = VAR_2;
        return VAR_1;
    }
    if (VAR_11->attributes == VAR_5)
    {
        if (!VAR_11->manifest)
        {
            FUNC_3("no manifest\n");
            return VAR_0;
        }
        VAR_9 = FUNC_7( VAR_6, VAR_11->manifest )->TargetPath;
        VAR_10 = VAR_6->cache_sxs;
    }
    else
    {
        VAR_9 = FUNC_7( VAR_6, VAR_7->KeyPath )->TargetPath;
        VAR_10 = VAR_6->cache_net[FUNC_5( VAR_9 )];
        if (!VAR_10) return VAR_1;
    }
    FUNC_2("installing assembly %s\n", FUNC_4(VAR_9));

    VAR_8 = FUNC_1( VAR_10, 0, VAR_9, ((void*)0) );
    if (VAR_8 != VAR_3)
    {
        FUNC_0("Failed to install assembly %s (0x%08x)\n", FUNC_4(VAR_9), VAR_8);
        return VAR_0;
    }
    if (VAR_12) VAR_12->Action = VAR_2;
    VAR_11->installed = VAR_4;
    return VAR_1;
}
