
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_16__ {int storage; } ;
struct TYPE_15__ {int patches; int db; } ;
struct TYPE_14__ {int entry; int state; int uninstallable; int transforms; } ;
typedef TYPE_1__ MSIPATCHINFO ;
typedef TYPE_2__ MSIPACKAGE ;
typedef TYPE_3__ MSIDATABASE ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int **) ;
 int ** FUNC_4 (int ,char) ;
 size_t FUNC_5 (TYPE_2__*,int ,TYPE_1__*) ;
 size_t FUNC_6 (TYPE_2__*) ;
 size_t FUNC_7 (int ,TYPE_1__*) ;

__attribute__((used)) static UINT FUNC_8( MSIPACKAGE *VAR_2, MSIDATABASE *VAR_3, MSIPATCHINFO *VAR_4 )
{
    UINT VAR_5, VAR_6 = VAR_0;
    WCHAR **VAR_7;


    VAR_7 = FUNC_4( VAR_4->transforms, ';' );
    for (VAR_5 = 0; VAR_7 && VAR_7[VAR_5] && VAR_6 == VAR_0; VAR_5++)
    {
        VAR_6 = FUNC_0( VAR_2, VAR_3, VAR_7[VAR_5] );
        if (VAR_6 == VAR_0)
        {
            VAR_6 = FUNC_7( VAR_2->db, VAR_4 );
            if (VAR_6 == VAR_0)
                VAR_6 = FUNC_5( VAR_2, VAR_3->storage, VAR_4 );
        }
    }
    FUNC_3( VAR_7 );
    if (VAR_6 != VAR_0)
        return VAR_6;

    VAR_6 = FUNC_6( VAR_2 );
    if (VAR_6 != VAR_0)
        return VAR_6;

    VAR_4->uninstallable = FUNC_1( VAR_3 );
    VAR_4->state = VAR_1;
    FUNC_2( &VAR_2->patches, &VAR_4->entry );
    return VAR_0;
}
