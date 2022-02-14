
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int unexpected_end ;
struct mrb_parser_state {scalar_t__ nerr; int lstate; TYPE_1__* error_buffer; scalar_t__ lex_strterm; int * parsing_heredoc; } ;
typedef int mrb_bool ;
struct TYPE_2__ {char* message; } ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;

__attribute__((used)) static mrb_bool
FUNC_2(struct mrb_parser_state *VAR_2)
{
  mrb_bool VAR_3 = VAR_0;


  if (VAR_2->parsing_heredoc != ((void*)0)) return VAR_1;


  if (VAR_2->lex_strterm) return VAR_1;


  if (0 < VAR_2->nerr) {
    const char VAR_4[] = "syntax error, unexpected $end";
    const char *VAR_5 = VAR_2->error_buffer[0].message;






    if (FUNC_1(VAR_5, VAR_4, sizeof(VAR_4) - 1) == 0) {
      VAR_3 = VAR_1;
    }
    else if (FUNC_0(VAR_5, "syntax error, unexpected keyword_end") == 0) {
      VAR_3 = VAR_0;
    }
    else if (FUNC_0(VAR_5, "syntax error, unexpected tREGEXP_BEG") == 0) {
      VAR_3 = VAR_0;
    }
    return VAR_3;
  }

  switch (VAR_2->lstate) {



  case 138:


    VAR_3 = VAR_0;
    break;
  case 135:


    VAR_3 = VAR_1;
    break;
  case 137:


    VAR_3 = VAR_1;
    break;
  case 131:

    VAR_3 = VAR_1;
    break;
  case 128:

    VAR_3 = VAR_1;
    break;



  case 139:

    VAR_3 = VAR_0;
    break;



  case 136:
    break;
  case 134:

    break;
  case 133:

    break;
  case 132:

    break;
  case 129:

    break;
  case 130:

    break;
  default:

    break;
  }

  return VAR_3;
}
