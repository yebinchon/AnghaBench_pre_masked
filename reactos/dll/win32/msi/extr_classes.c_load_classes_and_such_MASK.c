
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int progids; int extensions; int mimes; int classes; } ;
typedef TYPE_1__ MSIPACKAGE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static UINT FUNC_7( MSIPACKAGE *VAR_1 )
{
    UINT VAR_2;

    FUNC_0("Loading all the class info and related tables\n");


    if (!FUNC_1( &VAR_1->classes ) ||
        !FUNC_1( &VAR_1->mimes ) ||
        !FUNC_1( &VAR_1->extensions ) ||
        !FUNC_1( &VAR_1->progids )) return VAR_0;

    VAR_2 = FUNC_2( VAR_1 );
    if (VAR_2 != VAR_0) return VAR_2;

    VAR_2 = FUNC_3( VAR_1 );
    if (VAR_2 != VAR_0) return VAR_2;

    VAR_2 = FUNC_5( VAR_1 );
    if (VAR_2 != VAR_0) return VAR_2;


    VAR_2 = FUNC_6( VAR_1 );
    if (VAR_2 != VAR_0) return VAR_2;

    return FUNC_4( VAR_1 );
}
