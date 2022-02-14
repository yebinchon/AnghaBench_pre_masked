
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_9__ {int entry; void* SourceShortPath; void* SourceLongPath; void* TargetDefault; void* Directory; void* Parent; int children; } ;
struct TYPE_8__ {int folders; } ;
typedef int MSIRECORD ;
typedef TYPE_1__ MSIPACKAGE ;
typedef TYPE_2__ MSIFOLDER ;
typedef int * LPWSTR ;
typedef TYPE_1__* LPVOID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (void*) ;
 int * FUNC_2 (int *,char) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int) ;
 void* FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int *) ;
 void* FUNC_10 (int *) ;
 int VAR_2 ;

__attribute__((used)) static UINT FUNC_11( MSIRECORD *VAR_3, LPVOID VAR_4 )
{
    MSIPACKAGE *VAR_5 = VAR_4;
    static WCHAR VAR_6[] = { 0 };
    LPWSTR VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    MSIFOLDER *VAR_12;

    if (!(VAR_12 = FUNC_6( sizeof(*VAR_12) ))) return VAR_0;
    FUNC_4( &VAR_12->children );
    VAR_12->Directory = FUNC_7( VAR_3, 1 );
    VAR_12->Parent = FUNC_7( VAR_3, 2 );
    VAR_7 = FUNC_7(VAR_3, 3);

    FUNC_0("%s\n", FUNC_1(VAR_12->Directory));


    VAR_8 = VAR_7;
    VAR_10 = FUNC_2( VAR_7, ':' );


    VAR_9 = FUNC_2( VAR_8, '|' );
    VAR_11 = FUNC_2( VAR_10, '|' );


    if (VAR_8 && !FUNC_9( VAR_2, VAR_8 ))
        VAR_8 = VAR_6;
    if (VAR_10 && !FUNC_9( VAR_2, VAR_10 ))
        VAR_10 = VAR_6;

    if (!VAR_9)
        VAR_9 = VAR_8;

    if (!VAR_10) {
        VAR_10 = VAR_8;
        VAR_11 = VAR_9;
    }

    if (!VAR_11)
        VAR_11 = VAR_10;


    VAR_12->TargetDefault = FUNC_10(VAR_9);
    VAR_12->SourceShortPath = FUNC_10(VAR_10);
    VAR_12->SourceLongPath = FUNC_10(VAR_11);
    FUNC_8(VAR_7);

    FUNC_0("TargetDefault = %s\n",FUNC_1( VAR_12->TargetDefault ));
    FUNC_0("SourceLong = %s\n", FUNC_1( VAR_12->SourceLongPath ));
    FUNC_0("SourceShort = %s\n", FUNC_1( VAR_12->SourceShortPath ));

    FUNC_5( VAR_5, VAR_12 );

    FUNC_3( &VAR_5->folders, &VAR_12->entry );
    return VAR_1;
}
