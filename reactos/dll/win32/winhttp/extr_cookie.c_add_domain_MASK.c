
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cookie_cache; } ;
typedef TYPE_1__ session_t ;
struct TYPE_7__ {int name; int entry; int cookies; } ;
typedef TYPE_2__ domain_t ;
typedef int WCHAR ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static domain_t *FUNC_6( session_t *VAR_0, WCHAR *VAR_1 )
{
    domain_t *VAR_2;

    if (!(VAR_2 = FUNC_2( sizeof(domain_t) ))) return ((void*)0);

    FUNC_4( &VAR_2->entry );
    FUNC_4( &VAR_2->cookies );

    VAR_2->name = FUNC_5( VAR_1 );
    FUNC_3( &VAR_0->cookie_cache, &VAR_2->entry );

    FUNC_0("%s\n", FUNC_1(VAR_2->name));
    return VAR_2;
}
