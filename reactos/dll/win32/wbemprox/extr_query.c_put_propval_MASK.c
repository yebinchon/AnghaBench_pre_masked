
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct view {size_t* result; TYPE_2__* table; } ;
typedef int WCHAR ;
typedef int VARIANT ;
typedef size_t UINT ;
struct TYPE_6__ {TYPE_1__* columns; } ;
struct TYPE_5__ {int type; } ;
typedef int LONGLONG ;
typedef scalar_t__ HRESULT ;
typedef int CIMTYPE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int const*,size_t*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_3 (TYPE_2__*,size_t,size_t,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int *) ;

HRESULT FUNC_5( const struct view *VAR_3, UINT VAR_4, const WCHAR *VAR_5, VARIANT *VAR_6, CIMTYPE VAR_7 )
{
    HRESULT VAR_8;
    UINT VAR_9, VAR_10 = VAR_3->result[VAR_4];
    LONGLONG VAR_11;

    VAR_8 = FUNC_1( VAR_3->table, VAR_5, &VAR_9 );
    if (VAR_8 != VAR_1)
    {
        FUNC_0("no support for creating new properties\n");
        return VAR_2;
    }
    if (FUNC_2( VAR_3->table, VAR_9 ) || !(VAR_3->table->columns[VAR_9].type & VAR_0))
        return VAR_2;

    VAR_8 = FUNC_4( VAR_6, &VAR_11, &VAR_7 );
    if (VAR_8 != VAR_1) return VAR_8;

    return FUNC_3( VAR_3->table, VAR_10, VAR_9, VAR_11, VAR_7 );
}
