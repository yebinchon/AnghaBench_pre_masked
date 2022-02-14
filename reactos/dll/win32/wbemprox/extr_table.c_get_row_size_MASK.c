
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {scalar_t__ num_cols; } ;
typedef scalar_t__ UINT ;


 scalar_t__ FUNC_0 (struct table const*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct table const*,scalar_t__) ;

__attribute__((used)) static UINT FUNC_2( const struct table *VAR_0 )
{
    return FUNC_0( VAR_0, VAR_0->num_cols - 1 ) + FUNC_1( VAR_0, VAR_0->num_cols - 1 );
}
