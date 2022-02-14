
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int result_count; int result_size; char** result; TYPE_1__* lex; } ;
struct TYPE_3__ {int lex_level; } ;
typedef TYPE_2__ OkeysState ;


 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char**,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, char *VAR_1, bool VAR_2)
{
 OkeysState *VAR_3 = (OkeysState *) VAR_0;


 if (VAR_3->lex->lex_level != 1)
  return;


 if (VAR_3->result_count >= VAR_3->result_size)
 {
  VAR_3->result_size *= 2;
  VAR_3->result = (char **)
   FUNC_1(VAR_3->result, sizeof(char *) * VAR_3->result_size);
 }


 VAR_3->result[VAR_3->result_count++] = FUNC_0(VAR_1);
}
