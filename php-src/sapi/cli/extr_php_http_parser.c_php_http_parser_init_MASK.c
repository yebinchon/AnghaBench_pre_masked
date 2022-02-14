
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; scalar_t__ method; scalar_t__ flags; scalar_t__ upgrade; scalar_t__ nread; int state; } ;
typedef TYPE_1__ php_http_parser ;
typedef enum php_http_parser_type { ____Placeholder_php_http_parser_type } php_http_parser_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_0 (php_http_parser *VAR_5, enum php_http_parser_type VAR_6)
{
  VAR_5->type = VAR_6;
  VAR_5->state = (VAR_6 == VAR_0 ? VAR_2 : (VAR_6 == VAR_1 ? VAR_4 : VAR_3));
  VAR_5->nread = 0;
  VAR_5->upgrade = 0;
  VAR_5->flags = 0;
  VAR_5->method = 0;
}
