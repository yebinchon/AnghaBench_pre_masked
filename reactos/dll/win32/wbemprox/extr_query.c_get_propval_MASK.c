
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct view {size_t* result; TYPE_2__* table; int count; } ;
struct array {int dummy; } ;
typedef int WCHAR ;
typedef int VARTYPE ;
typedef int VARIANT ;
typedef size_t UINT ;
struct TYPE_7__ {TYPE_1__* columns; } ;
struct TYPE_6__ {int type; int vartype; } ;
typedef scalar_t__ LONGLONG ;
typedef scalar_t__ LONG ;
typedef scalar_t__ INT_PTR ;
typedef scalar_t__ HRESULT ;
typedef int CIMTYPE ;




 int VAR_0 ;





 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_3 ;
 void* FUNC_1 (int const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int const*,size_t*) ;
 scalar_t__ FUNC_3 (struct view const*,size_t,int const*,int *,int*,scalar_t__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,size_t,size_t,scalar_t__*) ;
 void* FUNC_5 (TYPE_2__*,size_t,size_t) ;
 scalar_t__ FUNC_6 (TYPE_2__*,size_t) ;
 int FUNC_7 (struct view const*,int const*) ;
 scalar_t__ FUNC_8 (int const*) ;
 int FUNC_9 (int,scalar_t__,void*,int *) ;
 void* FUNC_10 (struct array const*,int) ;
 int FUNC_11 (int) ;

HRESULT FUNC_12( const struct view *VAR_16, UINT VAR_17, const WCHAR *VAR_18, VARIANT *VAR_19,
                     CIMTYPE *VAR_20, LONG *VAR_21 )
{
    HRESULT VAR_22;
    UINT VAR_23, VAR_24;
    VARTYPE VAR_25;
    void *VAR_26 = ((void*)0);
    LONGLONG VAR_27;

    if (FUNC_8( VAR_18 )) return FUNC_3( VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21 );
    if (!VAR_16->count || !FUNC_7( VAR_16, VAR_18 )) return VAR_15;

    VAR_22 = FUNC_2( VAR_16->table, VAR_18, &VAR_23 );
    if (VAR_22 != VAR_3 || FUNC_6( VAR_16->table, VAR_23 )) return VAR_15;

    VAR_24 = VAR_16->result[VAR_17];
    VAR_22 = FUNC_4( VAR_16->table, VAR_24, VAR_23, &VAR_27 );
    if (VAR_22 != VAR_3) return VAR_22;

    if (VAR_20) *VAR_20 = VAR_16->table->columns[VAR_23].type & VAR_2;
    if (VAR_21) *VAR_21 = 0;

    if (!VAR_19) return VAR_3;

    VAR_25 = VAR_16->table->columns[VAR_23].vartype;
    if (VAR_16->table->columns[VAR_23].type & VAR_0)
    {
        CIMTYPE VAR_28 = VAR_16->table->columns[VAR_23].type & VAR_1;

        VAR_26 = FUNC_10( (const struct array *)(INT_PTR)VAR_27, VAR_28 );
        if (!VAR_26) VAR_25 = VAR_10;
        else if (!VAR_25) VAR_25 = FUNC_11( VAR_28 ) | VAR_4;
        FUNC_9( VAR_25, VAR_27, VAR_26, VAR_19 );
        return VAR_3;
    }

    switch (VAR_16->table->columns[VAR_23].type & VAR_2)
    {
    case 138:
        if (!VAR_25) VAR_25 = VAR_5;
        break;
    case 132:
    case 137:
        if (VAR_27)
        {
            VAR_25 = VAR_6;
            VAR_26 = FUNC_1( (const WCHAR *)(INT_PTR)VAR_27 );
        }
        else
            VAR_25 = VAR_10;
        break;
    case 133:
        if (!VAR_25) VAR_25 = VAR_7;
        break;
    case 128:
        if (!VAR_25) VAR_25 = VAR_11;
        break;
    case 136:
        if (!VAR_25) VAR_25 = VAR_8;
        break;
    case 131:
        if (!VAR_25) VAR_25 = VAR_12;
        break;
    case 135:
        if (!VAR_25) VAR_25 = VAR_9;
        break;
    case 130:
        if (!VAR_25) VAR_25 = VAR_13;
        break;
    case 134:
        VAR_25 = VAR_6;
        VAR_26 = FUNC_5( VAR_16->table, VAR_24, VAR_23 );
        break;
    case 129:
        VAR_25 = VAR_6;
        VAR_26 = FUNC_5( VAR_16->table, VAR_24, VAR_23 );
        break;
    default:
        FUNC_0("unhandled column type %u\n", VAR_16->table->columns[VAR_23].type);
        return VAR_14;
    }

    FUNC_9( VAR_25, VAR_27, VAR_26, VAR_19 );
    return VAR_3;
}
