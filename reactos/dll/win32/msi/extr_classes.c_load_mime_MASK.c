
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int entry; void* clsid; int Class; int suffix; int Extension; void* ContentType; } ;
struct TYPE_8__ {int mimes; } ;
typedef int MSIRECORD ;
typedef TYPE_1__ MSIPACKAGE ;
typedef TYPE_2__ MSIMIME ;
typedef int LPCWSTR ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,void*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_6 (int) ;
 void* FUNC_7 (int *,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static MSIMIME *FUNC_9( MSIPACKAGE* VAR_0, MSIRECORD *VAR_1 )
{
    LPCWSTR VAR_2;
    MSIMIME *VAR_3;



    VAR_3 = FUNC_6( sizeof(MSIMIME) );
    if (!VAR_3)
        return VAR_3;

    VAR_3->ContentType = FUNC_7( VAR_1, 1 );
    FUNC_1("loading mime %s\n", FUNC_2(VAR_3->ContentType));

    VAR_2 = FUNC_0( VAR_1, 2 );
    VAR_3->Extension = FUNC_5( VAR_0, VAR_2 );
    VAR_3->suffix = FUNC_8( VAR_2 );

    VAR_3->clsid = FUNC_7( VAR_1, 3 );
    VAR_3->Class = FUNC_4( VAR_0, VAR_3->clsid );

    FUNC_3( &VAR_0->mimes, &VAR_3->entry );

    return VAR_3;
}
