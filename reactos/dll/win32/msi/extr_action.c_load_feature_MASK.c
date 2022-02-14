
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* feature; TYPE_3__* package; } ;
typedef TYPE_1__ _ilfs ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_14__ {void* Feature; int entry; void* ActionRequest; void* Action; void* Installed; void* Attributes; void* Directory; void* Level; void* Display; void* Description; void* Title; void* Feature_Parent; int Components; int Children; } ;
struct TYPE_13__ {int db; int features; } ;
struct TYPE_12__ {int hdr; } ;
typedef int MSIRECORD ;
typedef TYPE_2__ MSIQUERY ;
typedef TYPE_3__ MSIPACKAGE ;
typedef TYPE_4__ MSIFEATURE ;
typedef TYPE_3__* LPVOID ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__**,char const*,void*) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (void*) ;
 int VAR_3 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 TYPE_4__* FUNC_8 (int) ;
 void* FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static UINT FUNC_11(MSIRECORD * VAR_4, LPVOID VAR_5)
{
    static const WCHAR VAR_6[] = {
        'S','E','L','E','C','T',' ','`','C','o','m','p','o','n','e','n','t','_','`',
         ' ','F','R','O','M',' ','`','F','e','a','t','u','r','e',
         'C','o','m','p','o','n','e','n','t','s','`',' ','W','H','E','R','E',' ',
         '`','F','e', 'a','t','u','r','e','_','`',' ','=','\'','%','s','\'',0};
    MSIPACKAGE *VAR_7 = VAR_5;
    MSIFEATURE *VAR_8;
    MSIQUERY *VAR_9;
    _ilfs VAR_10;
    UINT VAR_11;



    VAR_8 = FUNC_8( sizeof (MSIFEATURE) );
    if (!VAR_8)
        return VAR_0;

    FUNC_7( &VAR_8->Children );
    FUNC_7( &VAR_8->Components );

    VAR_8->Feature = FUNC_9( VAR_4, 1 );

    FUNC_4("Loading feature %s\n",FUNC_5(VAR_8->Feature));

    VAR_8->Feature_Parent = FUNC_9( VAR_4, 2 );
    VAR_8->Title = FUNC_9( VAR_4, 3 );
    VAR_8->Description = FUNC_9( VAR_4, 4 );

    if (!FUNC_3(VAR_4,5))
        VAR_8->Display = FUNC_2(VAR_4,5);

    VAR_8->Level= FUNC_2(VAR_4,6);
    VAR_8->Directory = FUNC_9( VAR_4, 7 );
    VAR_8->Attributes = FUNC_2(VAR_4,8);

    VAR_8->Installed = VAR_2;
    VAR_8->Action = VAR_2;
    VAR_8->ActionRequest = VAR_2;

    FUNC_6( &VAR_7->features, &VAR_8->entry );



    VAR_11 = FUNC_1( VAR_7->db, &VAR_9, VAR_6, VAR_8->Feature );
    if (VAR_11 != VAR_1)
        return VAR_1;

    VAR_10.package = VAR_7;
    VAR_10.feature = VAR_8;

    VAR_11 = FUNC_0(VAR_9, ((void*)0), VAR_3 , &VAR_10);
    FUNC_10(&VAR_9->hdr);
    return VAR_11;
}
