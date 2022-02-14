
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dialog_control {char const* member_1; TYPE_2__* member_0; } ;
struct TYPE_8__ {int name; TYPE_1__* package; } ;
typedef TYPE_2__ msi_dialog ;
typedef char WCHAR ;
struct TYPE_9__ {int hdr; } ;
struct TYPE_7__ {int db; } ;
typedef TYPE_3__ MSIQUERY ;


 int FUNC_0 (TYPE_3__*,int *,int ,struct dialog_control*) ;
 int FUNC_1 (int ,TYPE_3__**,char const*,int ,char const*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( msi_dialog *VAR_1, const WCHAR *VAR_2 )
{
    static const WCHAR VAR_3[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',
         '`','E','v','e','n','t','M','a','p','p','i','n','g','`',' ',
         'W','H','E','R','E',' ','`','D','i','a','l','o','g','_','`',' ','=',' ','\'','%','s','\'',' ',
         'A','N','D',' ','`','C','o','n','t','r','o','l','_','`',' ','=',' ','\'','%','s','\'',0};
    MSIQUERY *VAR_4;
    struct dialog_control VAR_5 =
    {
        VAR_1,
        VAR_2
    };

    if (!FUNC_1( VAR_1->package->db, &VAR_4, VAR_3, VAR_1->name, VAR_2 ))
    {
        FUNC_0( VAR_4, ((void*)0), VAR_0, &VAR_5 );
        FUNC_2( &VAR_4->hdr );
    }
}
