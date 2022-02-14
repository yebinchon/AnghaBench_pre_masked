
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_13__ {int File; } ;
struct TYPE_12__ {int entry; void* Sequence; TYPE_4__* File; void* Attributes; void* PatchSize; } ;
struct TYPE_11__ {int filepatches; } ;
typedef int MSIRECORD ;
typedef TYPE_1__ MSIPACKAGE ;
typedef TYPE_2__ MSIFILEPATCH ;
typedef TYPE_1__* LPVOID ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (char*,int ,void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_4__* FUNC_9 (TYPE_1__*,int const*) ;

__attribute__((used)) static UINT FUNC_10(MSIRECORD *VAR_3, LPVOID VAR_4)
{
    MSIPACKAGE *VAR_5 = VAR_4;
    MSIFILEPATCH *VAR_6;
    const WCHAR *VAR_7;

    VAR_6 = FUNC_7( sizeof (MSIFILEPATCH) );
    if (!VAR_6)
        return VAR_1;

    VAR_7 = FUNC_2( VAR_3, 1 );
    VAR_6->File = FUNC_9( VAR_5, VAR_7 );
    if (!VAR_6->File)
    {
        FUNC_0("Failed to find target for patch in File table\n");
        FUNC_8(VAR_6);
        return VAR_0;
    }

    VAR_6->Sequence = FUNC_1( VAR_3, 2 );
    VAR_6->PatchSize = FUNC_1( VAR_3, 3 );
    VAR_6->Attributes = FUNC_1( VAR_3, 4 );






    FUNC_6( VAR_5, VAR_6 );

    FUNC_3("Patch loaded (file %s sequence %u)\n", FUNC_4(VAR_6->File->File), VAR_6->Sequence);

    FUNC_5( &VAR_5->filepatches, &VAR_6->entry );

    return VAR_2;
}
