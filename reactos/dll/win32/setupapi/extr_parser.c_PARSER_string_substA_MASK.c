
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_file {int dummy; } ;
typedef int buffW ;
typedef int WCHAR ;
typedef size_t DWORD ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct inf_file const*,int const*,int *,int) ;
 int FUNC_1 (char*,unsigned int,size_t*,int *,unsigned int) ;
 int FUNC_2 (size_t*,int *,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3( const struct inf_file *VAR_1, const WCHAR *VAR_2,
                                          char *VAR_3, unsigned int VAR_4 )
{
    WCHAR VAR_5[VAR_0+1];
    DWORD VAR_6;

    unsigned int VAR_7 = FUNC_0( VAR_1, VAR_2, VAR_5, sizeof(VAR_5)/sizeof(WCHAR) );
    if (!VAR_3) FUNC_2( &VAR_6, VAR_5, VAR_7 * sizeof(WCHAR) );
    else
    {
        FUNC_1( VAR_3, VAR_4-1, &VAR_6, VAR_5, VAR_7 * sizeof(WCHAR) );
        VAR_3[VAR_6] = 0;
    }
    return VAR_6;
}
