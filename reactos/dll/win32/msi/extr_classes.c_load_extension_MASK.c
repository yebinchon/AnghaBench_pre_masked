
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int action; int Feature; int Mime; void* ProgIDText; int ProgID; int Component; void* Extension; int entry; int verbs; } ;
struct TYPE_10__ {int extensions; } ;
typedef int MSIRECORD ;
typedef TYPE_1__ MSIPACKAGE ;
typedef TYPE_2__ MSIEXTENSION ;
typedef int LPCWSTR ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,void*) ;
 TYPE_2__* FUNC_7 (int) ;
 void* FUNC_8 (int *,int) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;

__attribute__((used)) static MSIEXTENSION *FUNC_11( MSIPACKAGE* VAR_1, MSIRECORD *VAR_2 )
{
    MSIEXTENSION *VAR_3;
    LPCWSTR VAR_4;



    VAR_3 = FUNC_7( sizeof(MSIEXTENSION) );
    if (!VAR_3)
        return ((void*)0);

    FUNC_4( &VAR_3->verbs );

    FUNC_3( &VAR_1->extensions, &VAR_3->entry );

    VAR_3->Extension = FUNC_8( VAR_2, 1 );
    FUNC_1("loading extension %s\n", FUNC_2(VAR_3->Extension));

    VAR_4 = FUNC_0( VAR_2, 2 );
    VAR_3->Component = FUNC_9( VAR_1, VAR_4 );

    VAR_3->ProgIDText = FUNC_8( VAR_2, 3 );
    VAR_3->ProgID = FUNC_6( VAR_1, VAR_3->ProgIDText );

    VAR_4 = FUNC_0( VAR_2, 4 );
    VAR_3->Mime = FUNC_5( VAR_1, VAR_4 );

    VAR_4 = FUNC_0(VAR_2,5);
    VAR_3->Feature = FUNC_10( VAR_1, VAR_4 );
    VAR_3->action = VAR_0;
    return VAR_3;
}
