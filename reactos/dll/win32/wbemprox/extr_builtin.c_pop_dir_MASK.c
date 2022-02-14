
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirstack {size_t num_dirs; int ** dirs; scalar_t__* len_dirs; } ;
typedef int WCHAR ;
typedef scalar_t__ UINT ;



__attribute__((used)) static WCHAR *FUNC_0( struct dirstack *VAR_0, UINT *VAR_1 )
{
    if (!VAR_0->num_dirs)
    {
        *VAR_1 = 0;
        return ((void*)0);
    }
    VAR_0->num_dirs--;
    *VAR_1 = VAR_0->len_dirs[VAR_0->num_dirs];
    return VAR_0->dirs[VAR_0->num_dirs];
}
