
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ repl; } ;
typedef TYPE_1__ AFFIX ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char const*,unsigned char const*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_1, const void *VAR_2)
{
 const AFFIX *VAR_3 = (const AFFIX *) VAR_1;
 const AFFIX *VAR_4 = (const AFFIX *) VAR_2;

 if (VAR_3->type < VAR_4->type)
  return -1;
 if (VAR_3->type > VAR_4->type)
  return 1;
 if (VAR_3->type == VAR_0)
  return FUNC_1(VAR_3->repl, VAR_4->repl);
 else
  return FUNC_0((const unsigned char *) VAR_3->repl,
        (const unsigned char *) VAR_4->repl);
}
