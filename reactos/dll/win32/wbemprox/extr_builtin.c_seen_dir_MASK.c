
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirstack {size_t num_dirs; int * dirs; } ;
typedef int WCHAR ;
typedef size_t UINT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*) ;

__attribute__((used)) static BOOL FUNC_1( struct dirstack *VAR_2, const WCHAR *VAR_3 )
{
    UINT VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_2->num_dirs; VAR_4++) if (!FUNC_0( VAR_2->dirs[VAR_4], VAR_3 )) return VAR_1;
    return VAR_0;
}
