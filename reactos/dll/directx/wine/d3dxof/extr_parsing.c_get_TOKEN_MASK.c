
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int current_token; scalar_t__ token_present; } ;
typedef TYPE_1__ parse_buffer ;
typedef int WORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static WORD FUNC_1(parse_buffer * VAR_1)
{
  if (VAR_1->token_present)
  {
    VAR_1->token_present = VAR_0;
    return VAR_1->current_token;
  }

  VAR_1->current_token = FUNC_0(VAR_1);

  return VAR_1->current_token;
}
