
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msi_maskedit_info {int num_chars; size_t num_groups; TYPE_2__* dialog; scalar_t__* prop; TYPE_1__* group; } ;
typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_4__ {int package; } ;
struct TYPE_3__ {unsigned int len; int hwnd; scalar_t__ type; } ;
typedef scalar_t__* LPWSTR ;


 int FUNC_0 (char*,size_t) ;
 size_t FUNC_1 (int ,scalar_t__*,int) ;
 size_t FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (char*,size_t,size_t) ;
 int VAR_0 ;
 size_t FUNC_4 (scalar_t__*) ;
 scalar_t__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_8 (scalar_t__*) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__* FUNC_10 (scalar_t__*,size_t) ;

__attribute__((used)) static void FUNC_11( struct msi_maskedit_info *VAR_1 )
{
    LPWSTR VAR_2;
    UINT VAR_3, VAR_4, VAR_5;

    VAR_2 = FUNC_5( (VAR_1->num_chars+1)*sizeof(WCHAR) );
    for( VAR_3=0, VAR_4=0; VAR_3<VAR_1->num_groups; VAR_3++ )
    {
        if (VAR_1->group[VAR_3].len == ~0u)
        {
            UINT VAR_6 = FUNC_2( VAR_1->group[VAR_3].hwnd, VAR_0, 0, 0 );
            VAR_2 = FUNC_10( VAR_2, (VAR_6 + 1) * sizeof(WCHAR) );
            FUNC_1( VAR_1->group[VAR_3].hwnd, VAR_2, VAR_6 + 1 );
        }
        else
        {
            if (VAR_1->group[VAR_3].len + VAR_4 > VAR_1->num_chars)
            {
                FUNC_0("can't fit control %d text into template\n",VAR_3);
                break;
            }
            if (!FUNC_9(VAR_1->group[VAR_3].type))
            {
                for(VAR_5=0; VAR_5<VAR_1->group[VAR_3].len; VAR_5++)
                    VAR_2[VAR_4+VAR_5] = VAR_1->group[VAR_3].type;
                VAR_2[VAR_4+VAR_5] = 0;
            }
            else
            {
                VAR_5 = FUNC_1( VAR_1->group[VAR_3].hwnd, &VAR_2[VAR_4], VAR_1->group[VAR_3].len+1 );
                if( VAR_5 != VAR_1->group[VAR_3].len )
                    break;
            }
            VAR_4 += VAR_5;
        }
    }

    FUNC_3("%d/%d controls were good\n", VAR_3, VAR_1->num_groups);

    if( VAR_3 == VAR_1->num_groups )
    {
        FUNC_3("Set property %s to %s\n", FUNC_4(VAR_1->prop), FUNC_4(VAR_2));
        FUNC_7( VAR_1->dialog->package, VAR_1->prop, VAR_2 );
        FUNC_6( VAR_1->dialog );
    }
    FUNC_8( VAR_2 );
}
