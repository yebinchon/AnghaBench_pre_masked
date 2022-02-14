
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int dummy; } ;
typedef scalar_t__ UINT ;


 scalar_t__ FUNC_0 (struct table const*,scalar_t__) ;

__attribute__((used)) static UINT FUNC_1( const struct table *VAR_0, UINT VAR_1 )
{
    UINT VAR_2, VAR_3 = 0;
    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) VAR_3 += FUNC_0( VAR_0, VAR_2 );
    return VAR_3;
}
