
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_8__ {int * path; TYPE_1__* File; } ;
struct TYPE_7__ {int db; } ;
struct TYPE_6__ {int * TargetPath; } ;
typedef TYPE_2__ MSIPACKAGE ;
typedef TYPE_3__ MSIFILEPATCH ;


 scalar_t__ FUNC_0 (int *,int *,int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static UINT FUNC_8( MSIPACKAGE *VAR_2, MSIFILEPATCH *VAR_3 )
{
    UINT VAR_4 = VAR_1;
    WCHAR *VAR_5 = FUNC_6( VAR_2->db );

    if (!VAR_5) return VAR_0;
    if (FUNC_0( VAR_3->path, VAR_3->File->TargetPath, VAR_5, 0 ))
    {
        FUNC_1( VAR_3->File->TargetPath );
        FUNC_3( VAR_5, VAR_3->File->TargetPath );
    }
    else
    {
        FUNC_4("failed to patch %s: %08x\n", FUNC_5(VAR_3->File->TargetPath), FUNC_2());
        VAR_4 = VAR_0;
    }
    FUNC_1( VAR_3->path );
    FUNC_1( VAR_5 );
    FUNC_7( VAR_5 );
    return VAR_4;
}
