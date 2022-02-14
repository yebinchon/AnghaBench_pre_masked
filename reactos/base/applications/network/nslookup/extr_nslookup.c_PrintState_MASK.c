
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port; int type; int Class; int root; int domain; int* srchlist; scalar_t__ ixfrver; int MSxfr; scalar_t__ retry; scalar_t__ timeout; int ignoretc; int vc; int d2; int recurse; int search; int defname; int debug; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;

void FUNC_2()
{
    FUNC_1( FUNC_0("Default Server:  (null)\n\n") );
    FUNC_1( FUNC_0("Set options:\n") );

    FUNC_1( FUNC_0("  ") );
    if( !VAR_0.debug ) FUNC_1( FUNC_0("no") );
    FUNC_1( FUNC_0("debug\n") );

    FUNC_1( FUNC_0("  ") );
    if( !VAR_0.defname ) FUNC_1( FUNC_0("no") );
    FUNC_1( FUNC_0("defname\n") );

    FUNC_1( FUNC_0("  ") );
    if( !VAR_0.search ) FUNC_1( FUNC_0("no") );
    FUNC_1( FUNC_0("search\n") );

    FUNC_1( FUNC_0("  ") );
    if( !VAR_0.recurse ) FUNC_1( FUNC_0("no") );
    FUNC_1( FUNC_0("recurse\n") );

    FUNC_1( FUNC_0("  ") );
    if( !VAR_0.d2 ) FUNC_1( FUNC_0("no") );
    FUNC_1( FUNC_0("d2\n") );

    FUNC_1( FUNC_0("  ") );
    if( !VAR_0.vc ) FUNC_1( FUNC_0("no") );
    FUNC_1( FUNC_0("vc\n") );

    FUNC_1( FUNC_0("  ") );
    if( !VAR_0.ignoretc ) FUNC_1( FUNC_0("no") );
    FUNC_1( FUNC_0("ignoretc\n") );

    FUNC_1( FUNC_0("  port=%d\n"), VAR_0.port );
    FUNC_1( FUNC_0("  type=%s\n"), VAR_0.type );
    FUNC_1( FUNC_0("  class=%s\n"), VAR_0.Class );
    FUNC_1( FUNC_0("  timeout=%d\n"), (int)VAR_0.timeout );
    FUNC_1( FUNC_0("  retry=%d\n"), (int)VAR_0.retry );
    FUNC_1( FUNC_0("  root=%s\n"), VAR_0.root );
    FUNC_1( FUNC_0("  domain=%s\n"), VAR_0.domain );

    FUNC_1( FUNC_0("  ") );
    if( !VAR_0.MSxfr ) FUNC_1( FUNC_0("no") );
    FUNC_1( FUNC_0("MSxfr\n") );

    FUNC_1( FUNC_0("  IXFRversion=%d\n"), (int)VAR_0.ixfrver );

    FUNC_1( FUNC_0("  srchlist=%s\n\n"), VAR_0.srchlist[0] );
}
