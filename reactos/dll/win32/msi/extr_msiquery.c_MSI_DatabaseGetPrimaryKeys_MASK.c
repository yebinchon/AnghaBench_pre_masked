
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct msi_primary_key_record_info {TYPE_1__* rec; scalar_t__ n; } ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {int hdr; } ;
struct TYPE_7__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIQUERY ;
typedef int MSIDATABASE ;
typedef int LPCWSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int ,struct msi_primary_key_record_info*) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__**,char const*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;

UINT FUNC_6( MSIDATABASE *VAR_3,
                LPCWSTR VAR_4, MSIRECORD **VAR_5 )
{
    static const WCHAR VAR_6[] = {
        's','e','l','e','c','t',' ','*',' ',
        'f','r','o','m',' ','`','_','C','o','l','u','m','n','s','`',' ',
        'w','h','e','r','e',' ',
        '`','T','a','b','l','e','`',' ','=',' ','\'','%','s','\'',0 };
    struct msi_primary_key_record_info VAR_7;
    MSIQUERY *VAR_8 = ((void*)0);
    UINT VAR_9;

    if (!FUNC_3( VAR_3, VAR_4 ))
        return VAR_0;

    VAR_9 = FUNC_2( VAR_3, &VAR_8, VAR_6, VAR_4 );
    if( VAR_9 != VAR_1 )
        return VAR_9;


    VAR_7.n = 0;
    VAR_7.rec = 0;
    VAR_9 = FUNC_1( VAR_8, 0, VAR_2, &VAR_7 );
    if( VAR_9 == VAR_1 )
    {
        FUNC_4("Found %d primary keys\n", VAR_7.n );


        VAR_7.rec = FUNC_0( VAR_7.n );
        VAR_7.n = 0;
        VAR_9 = FUNC_1( VAR_8, 0, VAR_2, &VAR_7 );
        if( VAR_9 == VAR_1 )
            *VAR_5 = VAR_7.rec;
        else
            FUNC_5( &VAR_7.rec->hdr );
    }
    FUNC_5( &VAR_8->hdr );

    return VAR_9;
}
