
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int dummy; } ;
struct complex_expr {int op; int right; int left; } ;
typedef int WCHAR ;
typedef int UINT ;
typedef scalar_t__ LONGLONG ;
typedef scalar_t__ INT_PTR ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int,scalar_t__,scalar_t__,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct table const*,int ,int ,scalar_t__*,int *) ;
 scalar_t__ FUNC_3 (int,int const*,int const*,scalar_t__*) ;
 int * FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct complex_expr const*,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct complex_expr const*,int ,int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static HRESULT FUNC_9( const struct table *VAR_2, UINT VAR_3, const struct complex_expr *VAR_4,
                            LONGLONG *VAR_5, UINT *VAR_6 )
{
    HRESULT VAR_7, VAR_8;
    LONGLONG VAR_9, VAR_10;
    UINT VAR_11, VAR_12;

    VAR_7 = FUNC_2( VAR_2, VAR_3, VAR_4->left, &VAR_9, &VAR_11 );
    VAR_8 = FUNC_2( VAR_2, VAR_3, VAR_4->right, &VAR_10, &VAR_12 );
    if (VAR_7 != VAR_0 || VAR_8 != VAR_0) return VAR_1;

    *VAR_6 = FUNC_8( VAR_11, VAR_12 );

    if (FUNC_5( VAR_4, VAR_11, VAR_12 ))
        return FUNC_1( VAR_4->op, VAR_9, VAR_10, VAR_11, VAR_12, VAR_5 );

    if (FUNC_7( VAR_4, VAR_11, VAR_12 ))
    {
        const WCHAR *VAR_13, *VAR_14;
        WCHAR VAR_15[21], VAR_16[21];

        if (FUNC_6( VAR_11 )) VAR_13 = FUNC_4( VAR_15, VAR_11, VAR_9 );
        else VAR_13 = (const WCHAR *)(INT_PTR)VAR_9;

        if (FUNC_6( VAR_12 )) VAR_14 = FUNC_4( VAR_16, VAR_12, VAR_10 );
        else VAR_14 = (const WCHAR *)(INT_PTR)VAR_10;

        return FUNC_3( VAR_4->op, VAR_13, VAR_14, VAR_5 );
    }
    switch (VAR_4->op)
    {
    case 134:
        *VAR_5 = (VAR_9 == VAR_10);
        break;
    case 135:
        *VAR_5 = (VAR_9 && VAR_10);
        break;
    case 128:
        *VAR_5 = (VAR_9 || VAR_10);
        break;
    case 132:
        *VAR_5 = (VAR_9 > VAR_10);
        break;
    case 130:
        *VAR_5 = (VAR_9 < VAR_10);
        break;
    case 131:
        *VAR_5 = (VAR_9 <= VAR_10);
        break;
    case 133:
        *VAR_5 = (VAR_9 >= VAR_10);
        break;
    case 129:
        *VAR_5 = (VAR_9 != VAR_10);
        break;
    default:
        FUNC_0("unhandled operator %u\n", VAR_4->op);
        return VAR_1;
    }
    return VAR_0;
}
