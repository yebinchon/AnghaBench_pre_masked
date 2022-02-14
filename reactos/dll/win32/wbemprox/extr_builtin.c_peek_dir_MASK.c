
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirstack {int num_dirs; int const** dirs; } ;
typedef int WCHAR ;



__attribute__((used)) static const WCHAR *FUNC_0( struct dirstack *VAR_0 )
{
    if (!VAR_0->num_dirs) return ((void*)0);
    return VAR_0->dirs[VAR_0->num_dirs - 1];
}
