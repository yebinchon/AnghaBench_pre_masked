
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* package; } ;
typedef TYPE_1__ msi_dialog ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_11__ {int db; } ;
struct TYPE_10__ {int hdr; } ;
typedef TYPE_2__ MSIRECORD ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int,int *) ;
 int FUNC_2 (TYPE_3__*,int const*,int *) ;
 int * FUNC_3 (int ,int const*) ;
 int FUNC_4 (TYPE_3__*,int ,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

__attribute__((used)) static UINT FUNC_6( msi_dialog *VAR_2, const WCHAR *VAR_3 )
{
    WCHAR *VAR_4 = FUNC_3( VAR_2->package->db, VAR_3 );
    MSIRECORD *VAR_5 = FUNC_0( 1 );
    UINT VAR_6 = VAR_0;

    FUNC_1( VAR_5, 1, VAR_4 );
    FUNC_4( VAR_2->package, VAR_1, VAR_5 );
    if (VAR_4)
    {

        VAR_6 = FUNC_2( VAR_2->package, VAR_3, VAR_4 );
        FUNC_5( VAR_4 );
    }
    FUNC_5( &VAR_5->hdr );
    return VAR_6;
}
