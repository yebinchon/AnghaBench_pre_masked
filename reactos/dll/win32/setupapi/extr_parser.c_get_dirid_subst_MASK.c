
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_file {int dummy; } ;
typedef int WCHAR ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int const* FUNC_1 (struct inf_file const*,unsigned int*) ;
 unsigned int FUNC_2 (int const*) ;

__attribute__((used)) static const WCHAR *FUNC_3( const struct inf_file *VAR_1, int VAR_2, unsigned int *VAR_3 )
{
    const WCHAR *VAR_4;

    if (VAR_2 == VAR_0) return FUNC_1( VAR_1, VAR_3 );
    VAR_4 = FUNC_0( VAR_2 );
    if (VAR_4) *VAR_3 = FUNC_2(VAR_4);
    return VAR_4;
}
