
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirstack {int num_allocated; scalar_t__ num_dirs; struct dirstack* dirs; void* len_dirs; } ;
typedef int WCHAR ;
typedef int UINT ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct dirstack*) ;

__attribute__((used)) static struct dirstack *FUNC_2( UINT VAR_0 )
{
    struct dirstack *VAR_1;

    if (!(VAR_1 = FUNC_0( sizeof(*VAR_1) ))) return ((void*)0);
    if (!(VAR_1->dirs = FUNC_0( sizeof(WCHAR *) * VAR_0 )))
    {
        FUNC_1( VAR_1 );
        return ((void*)0);
    }
    if (!(VAR_1->len_dirs = FUNC_0( sizeof(UINT) * VAR_0 )))
    {
        FUNC_1( VAR_1->dirs );
        FUNC_1( VAR_1 );
        return ((void*)0);
    }
    VAR_1->num_dirs = 0;
    VAR_1->num_allocated = VAR_0;
    return VAR_1;
}
