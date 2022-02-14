
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct table {TYPE_3__* columns; } ;
struct complex_expr {int op; TYPE_4__* left; } ;
typedef size_t UINT ;
struct TYPE_6__ {TYPE_1__* propval; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
struct TYPE_7__ {size_t type; } ;
struct TYPE_5__ {int name; } ;
typedef int LONGLONG ;
typedef scalar_t__ HRESULT ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int) ;

 int VAR_1 ;

 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct table const*,size_t,TYPE_4__*,int*,size_t*) ;
 scalar_t__ FUNC_2 (struct table const*,int ,size_t*) ;
 scalar_t__ FUNC_3 (struct table const*,size_t,size_t,int*) ;

__attribute__((used)) static HRESULT FUNC_4( const struct table *VAR_4, UINT VAR_5, const struct complex_expr *VAR_6,
                           LONGLONG *VAR_7, UINT *VAR_8 )

{
    HRESULT VAR_9;
    UINT VAR_10;
    LONGLONG VAR_11;

    if (VAR_6->op == VAR_1)
    {
        VAR_9 = FUNC_1( VAR_4, VAR_5, VAR_6->left, &VAR_11, VAR_8 );
        if (VAR_9 != VAR_2)
            return VAR_9;
        *VAR_7 = !VAR_11;
        return VAR_2;
    }

    VAR_9 = FUNC_2( VAR_4, VAR_6->left->u.propval->name, &VAR_10 );
    if (VAR_9 != VAR_2)
        return VAR_9;

    VAR_9 = FUNC_3( VAR_4, VAR_5, VAR_10, &VAR_11 );
    if (VAR_9 != VAR_2)
        return VAR_9;

    switch (VAR_6->op)
    {
    case 129:
        *VAR_7 = !VAR_11;
        break;
    case 128:
        *VAR_7 = VAR_11;
        break;
    default:
        FUNC_0("unknown operator %u\n", VAR_6->op);
        return VAR_3;
    }

    *VAR_8 = VAR_4->columns[VAR_10].type & VAR_0;
    return VAR_2;
}
