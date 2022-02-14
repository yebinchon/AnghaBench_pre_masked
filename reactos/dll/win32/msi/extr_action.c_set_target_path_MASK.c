
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_11__ {int Directory; TYPE_3__* assembly; } ;
struct TYPE_10__ {int const* tempdir; } ;
struct TYPE_9__ {void* TargetPath; void* File; int FileName; TYPE_6__* Component; } ;
struct TYPE_8__ {int db; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef TYPE_2__ MSIFILE ;
typedef TYPE_3__ MSIASSEMBLY ;


 int FUNC_0 (char*,int ,int ) ;
 int const* FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int const*,int ) ;
 int FUNC_4 (void*) ;
 int * FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;

__attribute__((used)) static void FUNC_7( MSIPACKAGE *VAR_0, MSIFILE *VAR_1 )
{
    FUNC_4( VAR_1->TargetPath );
    if (FUNC_6( VAR_1->Component ))
    {
        MSIASSEMBLY *VAR_2 = VAR_1->Component->assembly;

        if (!VAR_2->tempdir) VAR_2->tempdir = FUNC_1( VAR_0->db );
        VAR_1->TargetPath = FUNC_3( 2, VAR_2->tempdir, VAR_1->FileName );
    }
    else
    {
        const WCHAR *VAR_3 = FUNC_5( VAR_0, VAR_1->Component->Directory );
        VAR_1->TargetPath = FUNC_3( 2, VAR_3, VAR_1->FileName );
    }

    FUNC_0("file %s resolves to %s\n", FUNC_2(VAR_1->File), FUNC_2(VAR_1->TargetPath));
}
