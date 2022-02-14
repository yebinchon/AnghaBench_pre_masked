
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_file {int * string_pos; } ;
typedef int WCHAR ;


 int FUNC_0 (int *,int const*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static WCHAR *FUNC_2( struct inf_file *VAR_0, const WCHAR *VAR_1 )
{
    WCHAR *VAR_2 = VAR_0->string_pos;
    FUNC_0( VAR_2, VAR_1 );
    VAR_0->string_pos += FUNC_1( VAR_2 ) + 1;
    return VAR_2;
}
