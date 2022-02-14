
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirstack {size_t num_dirs; int * dirs; } ;
typedef size_t UINT ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( struct dirstack *VAR_0 )
{
    UINT VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->num_dirs; VAR_1++) FUNC_0( VAR_0->dirs[VAR_1] );
    VAR_0->num_dirs = 0;
}
