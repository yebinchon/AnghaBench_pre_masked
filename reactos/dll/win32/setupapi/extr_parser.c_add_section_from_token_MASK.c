
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {scalar_t__ token_len; int cur_section; int error; int file; int token; } ;
typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3( struct parser *VAR_3 )
{
    int VAR_4;

    if (VAR_3->token_len > VAR_2)
    {
        VAR_3->error = VAR_1;
        return -1;
    }
    if ((VAR_4 = FUNC_1( VAR_3->file, VAR_3->token )) == -1)
    {

        const WCHAR *VAR_5 = FUNC_2( VAR_3->file, VAR_3->token );
        if ((VAR_4 = FUNC_0( VAR_3->file, VAR_5 )) == -1)
        {
            VAR_3->error = VAR_0;
            return -1;
        }
    }
    VAR_3->token_len = 0;
    VAR_3->cur_section = VAR_4;
    return VAR_4;
}
