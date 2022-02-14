
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct patch_offset_list {int count; int files; int max; int min; } ;
struct patch_offset {int entry; void* sequence; int name; } ;
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
 void* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_1__**) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,void*) ;
 int FUNC_8 (int ,void*) ;
 struct patch_offset* FUNC_9 (int) ;
 int FUNC_10 (TYPE_1__*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12( MSIDATABASE *VAR_2, UINT VAR_3, struct patch_offset_list *VAR_4 )
{
    static const WCHAR VAR_5[] = {
        'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','F','i','l','e',' ',
        'W','H','E','R','E',' ','S','e','q','u','e','n','c','e',' ','<','=',' ','?',' ',
        'O','R','D','E','R',' ','B','Y',' ','S','e','q','u','e','n','c','e',0};
    MSIQUERY *VAR_6;
    MSIRECORD *VAR_7;
    UINT VAR_8;

    VAR_8 = FUNC_1( VAR_2, VAR_5, &VAR_6 );
    if (VAR_8 != VAR_0)
        return;

    VAR_7 = FUNC_0( 1 );
    FUNC_3( VAR_7, 1, VAR_3 );

    VAR_8 = FUNC_4( VAR_6, VAR_7 );
    FUNC_11( &VAR_7->hdr );
    if (VAR_8 != VAR_0)
        return;

    while (FUNC_5( VAR_6, &VAR_7 ) == VAR_0)
    {
        UINT VAR_9 = FUNC_2( VAR_7, 7 );
        if (VAR_9 & VAR_1)
        {
            struct patch_offset *VAR_10 = FUNC_9( sizeof(struct patch_offset) );

            VAR_10->name = FUNC_10( VAR_7, 1 );
            VAR_10->sequence = FUNC_2( VAR_7, 8 );
            VAR_4->min = FUNC_8( VAR_4->min, VAR_10->sequence );
            VAR_4->max = FUNC_7( VAR_4->max, VAR_10->sequence );
            FUNC_6( &VAR_4->files, &VAR_10->entry );
            VAR_4->count++;
        }
        FUNC_11( &VAR_7->hdr );
    }
    FUNC_11( &VAR_6->hdr );
}
