
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* fname; scalar_t__ nerr; } ;
typedef TYPE_1__ parser_state ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(parser_state* VAR_0, const char* VAR_1)
{
  int VAR_2;


  VAR_0->fname = "-e";
  FUNC_0(VAR_1);
  VAR_2 = FUNC_1(VAR_0);
  if (VAR_2 == 0 && VAR_0->nerr == 0) {
    return 0;
  }
  return 1;
}
