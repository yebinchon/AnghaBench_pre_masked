
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct patch_offset_list {int count; int patches; int max; int min; } ;
struct patch_offset {int entry; int sequence; int name; } ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_13__ {int hdr; } ;
struct TYPE_12__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef TYPE_2__ MSIQUERY ;
typedef int MSIDATABASE ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char const*,TYPE_2__**) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_1__**) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 struct patch_offset* FUNC_9 (int) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12( MSIDATABASE *VAR_1, UINT VAR_2, struct patch_offset_list *VAR_3 )
{
    static const WCHAR VAR_4[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','P','a','t','c','h',' ',
        'W','H','E','R','E',' ','S','e','q','u','e','n','c','e',' ','<','=',' ','?',' ',
        'O','R','D','E','R',' ','B','Y',' ','S','e','q','u','e','n','c','e',0};
    MSIQUERY *VAR_5;
    MSIRECORD *VAR_6;
    UINT VAR_7;

    VAR_7 = FUNC_1( VAR_1, VAR_4, &VAR_5 );
    if (VAR_7 != VAR_0)
        return;

    VAR_6 = FUNC_0( 1 );
    FUNC_3( VAR_6, 1, VAR_2 );

    VAR_7 = FUNC_4( VAR_5, VAR_6 );
    FUNC_11( &VAR_6->hdr );
    if (VAR_7 != VAR_0)
        return;

    while (FUNC_5( VAR_5, &VAR_6 ) == VAR_0)
    {
        struct patch_offset *VAR_8 = FUNC_9( sizeof(struct patch_offset) );

        VAR_8->name = FUNC_10( VAR_6, 1 );
        VAR_8->sequence = FUNC_2( VAR_6, 2 );
        VAR_3->min = FUNC_8( VAR_3->min, VAR_8->sequence );
        VAR_3->max = FUNC_7( VAR_3->max, VAR_8->sequence );
        FUNC_6( &VAR_3->patches, &VAR_8->entry );
        VAR_3->count++;

        FUNC_11( &VAR_6->hdr );
    }
    FUNC_11( &VAR_5->hdr );
}
