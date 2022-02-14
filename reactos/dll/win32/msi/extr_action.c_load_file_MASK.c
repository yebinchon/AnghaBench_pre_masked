
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_17__ {int Attributes; int IsCompressed; int entry; void* Sequence; struct TYPE_17__* File; int state; void* Language; void* Version; void* FileSize; void* ShortName; int LongName; void* FileName; int Component; } ;
struct TYPE_16__ {int WordCount; int files; } ;
typedef int MSIRECORD ;
typedef TYPE_1__ MSIPACKAGE ;
typedef TYPE_2__ MSIFILE ;
typedef TYPE_1__* LPVOID ;
typedef TYPE_2__* LPCWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* FUNC_0 (int *,int) ;
 TYPE_2__* FUNC_1 (int *,int) ;
 int FUNC_2 (char*,int ,void*) ;
 int VAR_3 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (void*,char) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_9 (int) ;
 void* FUNC_10 (int *,int) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_13 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_14 (int ) ;

__attribute__((used)) static UINT FUNC_15(MSIRECORD *VAR_10, LPVOID VAR_11)
{
    MSIPACKAGE* VAR_12 = VAR_11;
    LPCWSTR VAR_13;
    MSIFILE *VAR_14;



    VAR_14 = FUNC_9( sizeof (MSIFILE) );
    if (!VAR_14)
        return VAR_0;

    VAR_14->File = FUNC_10( VAR_10, 1 );

    VAR_13 = FUNC_1( VAR_10, 2 );
    VAR_14->Component = FUNC_12( VAR_12, VAR_13 );

    if (!VAR_14->Component)
    {
        FUNC_3("Component not found: %s\n", FUNC_4(VAR_13));
        FUNC_11(VAR_14->File);
        FUNC_11(VAR_14);
        return VAR_1;
    }

    VAR_14->FileName = FUNC_10( VAR_10, 3 );
    FUNC_13( VAR_14->FileName );

    VAR_14->ShortName = FUNC_10( VAR_10, 3 );
    VAR_14->LongName = FUNC_14( FUNC_5(VAR_14->ShortName, '|'));

    VAR_14->FileSize = FUNC_0( VAR_10, 4 );
    VAR_14->Version = FUNC_10( VAR_10, 5 );
    VAR_14->Language = FUNC_10( VAR_10, 6 );
    VAR_14->Attributes = FUNC_0( VAR_10, 7 );
    VAR_14->Sequence = FUNC_0( VAR_10, 8 );

    VAR_14->state = VAR_9;




    if (VAR_12->WordCount & VAR_7)
    {
        VAR_14->IsCompressed = VAR_2;
    }
    else if (VAR_14->Attributes &
             (VAR_4 | VAR_6))
    {
        VAR_14->IsCompressed = VAR_3;
    }
    else if (VAR_14->Attributes & VAR_5)
    {
        VAR_14->IsCompressed = VAR_2;
    }
    else
    {
        VAR_14->IsCompressed = VAR_12->WordCount & VAR_8;
    }

    FUNC_8(VAR_12, VAR_14);
    FUNC_7(VAR_12, VAR_14);

    FUNC_2("File loaded (file %s sequence %u)\n", FUNC_4(VAR_14->File), VAR_14->Sequence);

    FUNC_6( &VAR_12->files, &VAR_14->entry );

    return VAR_1;
}
