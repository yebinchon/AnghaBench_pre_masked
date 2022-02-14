
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct complex_expr {scalar_t__ op; int right; int left; } ;
typedef int WCHAR ;
typedef scalar_t__ UINT ;
typedef int MSIWHEREVIEW ;
typedef int MSIRECORD ;
typedef int INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,scalar_t__ const*,int ,int const*,int const**) ;
 int VAR_4 ;
 int FUNC_1 (int const*,int const*) ;

__attribute__((used)) static UINT FUNC_2( MSIWHEREVIEW *VAR_5, const UINT VAR_6[], const struct complex_expr *VAR_7,
                             INT *VAR_8, const MSIRECORD *VAR_9 )
{
    int VAR_10;
    const WCHAR *VAR_11, *VAR_12;
    UINT VAR_13;

    *VAR_8 = VAR_4;
    VAR_13 = FUNC_0(VAR_5, VAR_6, VAR_7->left, VAR_9, &VAR_11);
    if (VAR_13 == VAR_0)
        return VAR_13;
    VAR_13 = FUNC_0(VAR_5, VAR_6, VAR_7->right, VAR_9, &VAR_12);
    if (VAR_13 == VAR_0)
        return VAR_13;

    if( VAR_11 == VAR_12 ||
        ((!VAR_11 || !*VAR_11) && (!VAR_12 || !*VAR_12)) )
        VAR_10 = 0;
    else if( VAR_11 && ! VAR_12 )
        VAR_10 = 1;
    else if( VAR_12 && ! VAR_11 )
        VAR_10 = -1;
    else
        VAR_10 = FUNC_1( VAR_11, VAR_12 );

    *VAR_8 = ( VAR_7->op == VAR_2 && ( VAR_10 == 0 ) ) ||
           ( VAR_7->op == VAR_3 && ( VAR_10 != 0 ) );

    return VAR_1;
}
