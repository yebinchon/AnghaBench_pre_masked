
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int assembly; void* ActionRequest; void* Action; void* Installed; void* KeyPath; void* Condition; int Attributes; void* Directory; void* ComponentId; void* Component; int entry; } ;
struct TYPE_8__ {int components; } ;
typedef int MSIRECORD ;
typedef TYPE_1__ MSIPACKAGE ;
typedef TYPE_2__ MSICOMPONENT ;
typedef TYPE_1__* LPVOID ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,int *) ;
 TYPE_2__* FUNC_4 (int) ;
 void* FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static UINT FUNC_7( MSIRECORD *VAR_3, LPVOID VAR_4 )
{
    MSIPACKAGE *VAR_5 = VAR_4;
    MSICOMPONENT *VAR_6;

    VAR_6 = FUNC_4( sizeof(MSICOMPONENT) );
    if (!VAR_6)
        return VAR_0;

    FUNC_3( &VAR_5->components, &VAR_6->entry );


    VAR_6->Component = FUNC_5( VAR_3, 1 );

    FUNC_1("Loading Component %s\n", FUNC_2(VAR_6->Component));

    VAR_6->ComponentId = FUNC_5( VAR_3, 2 );
    VAR_6->Directory = FUNC_5( VAR_3, 3 );
    VAR_6->Attributes = FUNC_0(VAR_3,4);
    VAR_6->Condition = FUNC_5( VAR_3, 5 );
    VAR_6->KeyPath = FUNC_5( VAR_3, 6 );

    VAR_6->Installed = VAR_2;
    VAR_6->Action = VAR_2;
    VAR_6->ActionRequest = VAR_2;

    VAR_6->assembly = FUNC_6( VAR_5, VAR_6 );
    return VAR_1;
}
