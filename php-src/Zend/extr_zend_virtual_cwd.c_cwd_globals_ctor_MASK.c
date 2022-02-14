
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int realpath_cache; int realpath_cache_ttl; int realpath_cache_size_limit; scalar_t__ realpath_cache_size; int cwd; } ;
typedef TYPE_1__ virtual_cwd_globals ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(virtual_cwd_globals *VAR_3)
{
 FUNC_0(&VAR_3->cwd, &VAR_2);
 VAR_3->realpath_cache_size = 0;
 VAR_3->realpath_cache_size_limit = VAR_0;
 VAR_3->realpath_cache_ttl = VAR_1;
 FUNC_1(VAR_3->realpath_cache, 0, sizeof(VAR_3->realpath_cache));
}
