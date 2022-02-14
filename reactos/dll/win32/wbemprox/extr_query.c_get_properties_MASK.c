
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct view {TYPE_2__* table; } ;
typedef size_t UINT ;
struct TYPE_4__ {size_t num_cols; TYPE_1__* columns; } ;
struct TYPE_3__ {int name; } ;
typedef int SAFEARRAY ;
typedef int LONG ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ,int ,size_t) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_5 (struct view const*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,size_t) ;
 int FUNC_7 (struct view const*,int ) ;
 scalar_t__ FUNC_8 (int ) ;

HRESULT FUNC_9( const struct view *VAR_5, LONG VAR_6, SAFEARRAY **VAR_7 )
{
    SAFEARRAY *VAR_8;
    BSTR VAR_9;
    UINT VAR_10, VAR_11 = FUNC_5( VAR_5 );
    LONG VAR_12;

    if (!(VAR_8 = FUNC_0( VAR_2, 0, VAR_11 ))) return VAR_0;

    for (VAR_10 = 0, VAR_12 = 0; VAR_10 < VAR_5->table->num_cols; VAR_10++)
    {
        BOOL VAR_13;

        if (FUNC_6( VAR_5->table, VAR_10 )) continue;
        if (!FUNC_7( VAR_5, VAR_5->table->columns[VAR_10].name )) continue;

        VAR_13 = FUNC_8( VAR_5->table->columns[VAR_10].name );
        if ((VAR_6 & VAR_3) && VAR_13) continue;
        else if ((VAR_6 & VAR_4) && !VAR_13) continue;

        VAR_9 = FUNC_3( VAR_5->table->columns[VAR_10].name );
        if (!VAR_9 || FUNC_2( VAR_8, &VAR_12, VAR_9 ) != VAR_1)
        {
            FUNC_4( VAR_9 );
            FUNC_1( VAR_8 );
            return VAR_0;
        }
        FUNC_4( VAR_9 );
        VAR_12++;
    }
    *VAR_7 = VAR_8;
    return VAR_1;
}
