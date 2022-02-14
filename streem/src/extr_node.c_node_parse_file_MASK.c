
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* fname; } ;
typedef TYPE_1__ parser_state ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (TYPE_1__*,int *,char const*) ;
 int FUNC_3 (char*) ;

int
FUNC_4(parser_state* VAR_0, const char* VAR_1)
{
  int VAR_2;
  FILE* VAR_3 = FUNC_1(VAR_1, "rb");
  if (VAR_3 == ((void*)0)) {
    FUNC_3("fopen");
    return 0;
  }
  VAR_0->fname = VAR_1;
  VAR_2 = FUNC_2(VAR_0, VAR_3, VAR_1);
  FUNC_0(VAR_3);
  return VAR_2;
}
