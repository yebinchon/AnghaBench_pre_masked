
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {scalar_t__ token_len; int * cur_section; int error; int token; int file; } ;
typedef int * PVOID ;
typedef int * PINFCACHESECTION ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ) ;
 int * FUNC_1 (int ,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static PVOID FUNC_2( struct parser *VAR_3 )
{
  PINFCACHESECTION VAR_4;

  if (VAR_3->token_len > VAR_2)
    {
      VAR_3->error = VAR_1;
      return ((void*)0);
    }

  VAR_4 = FUNC_1(VAR_3->file,
                            VAR_3->token);
  if (VAR_4 == ((void*)0))
    {

      VAR_4= FUNC_0(VAR_3->file,
                              VAR_3->token);
      if (VAR_4 == ((void*)0))
        {
          VAR_3->error = VAR_0;
          return ((void*)0);
        }
    }

  VAR_3->token_len = 0;
  VAR_3->cur_section = VAR_4;

  return (PVOID)VAR_4;
}
