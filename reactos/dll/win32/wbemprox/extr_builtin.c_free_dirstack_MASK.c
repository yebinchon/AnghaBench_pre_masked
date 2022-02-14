
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirstack {struct dirstack* len_dirs; struct dirstack* dirs; } ;


 int FUNC_0 (struct dirstack*) ;
 int FUNC_1 (struct dirstack*) ;

__attribute__((used)) static void FUNC_2( struct dirstack *VAR_0 )
{
    FUNC_0( VAR_0 );
    FUNC_1( VAR_0->dirs );
    FUNC_1( VAR_0->len_dirs );
    FUNC_1( VAR_0 );
}
