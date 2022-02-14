
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cabinet_streams; int binaries; int patches; int sourcelist_media; int sourcelist_info; int RunningActions; int progids; int extensions; int mimes; int classes; int appids; int subscriptions; int folders; int tempfiles; int filepatches; int files; int features; int components; } ;
typedef TYPE_1__ MSIPACKAGE ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static MSIPACKAGE *FUNC_2( void )
{
    MSIPACKAGE *VAR_2;

    VAR_2 = FUNC_0( VAR_0, sizeof (MSIPACKAGE),
                               VAR_1 );
    if( VAR_2 )
    {
        FUNC_1( &VAR_2->components );
        FUNC_1( &VAR_2->features );
        FUNC_1( &VAR_2->files );
        FUNC_1( &VAR_2->filepatches );
        FUNC_1( &VAR_2->tempfiles );
        FUNC_1( &VAR_2->folders );
        FUNC_1( &VAR_2->subscriptions );
        FUNC_1( &VAR_2->appids );
        FUNC_1( &VAR_2->classes );
        FUNC_1( &VAR_2->mimes );
        FUNC_1( &VAR_2->extensions );
        FUNC_1( &VAR_2->progids );
        FUNC_1( &VAR_2->RunningActions );
        FUNC_1( &VAR_2->sourcelist_info );
        FUNC_1( &VAR_2->sourcelist_media );
        FUNC_1( &VAR_2->patches );
        FUNC_1( &VAR_2->binaries );
        FUNC_1( &VAR_2->cabinet_streams );
    }

    return VAR_2;
}
