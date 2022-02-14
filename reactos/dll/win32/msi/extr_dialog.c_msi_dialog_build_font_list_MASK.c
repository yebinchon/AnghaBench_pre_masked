
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* package; } ;
typedef TYPE_2__ msi_dialog ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_11__ {int hdr; } ;
struct TYPE_9__ {int db; } ;
typedef TYPE_3__ MSIQUERY ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int *,int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_3__**,char const*) ;
 int FUNC_2 (char*,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static UINT FUNC_4( msi_dialog *VAR_2 )
{
    static const WCHAR VAR_3[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
        '`','T','e','x','t','S','t','y','l','e','`',0};
    MSIQUERY *VAR_4;
    UINT VAR_5;

    FUNC_2("dialog %p\n", VAR_2 );

    VAR_5 = FUNC_1( VAR_2->package->db, &VAR_4, VAR_3 );
    if( VAR_5 != VAR_0 )
        return VAR_5;

    VAR_5 = FUNC_0( VAR_4, ((void*)0), VAR_1, VAR_2 );
    FUNC_3( &VAR_4->hdr );
    return VAR_5;
}
