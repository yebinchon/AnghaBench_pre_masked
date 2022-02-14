
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int indentLevel; int buf; } ;
typedef TYPE_1__ deparse_context ;
typedef int StringInfo ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(deparse_context *VAR_2, const char *VAR_3,
      int VAR_4, int VAR_5, int VAR_6)
{
 StringInfo VAR_7 = VAR_2->buf;

 if (FUNC_1(VAR_2))
 {
  int VAR_8;

  VAR_2->indentLevel += VAR_4;


  FUNC_5(VAR_7);

  FUNC_2(VAR_7, '\n');

  if (VAR_2->indentLevel < VAR_0)
   VAR_8 = FUNC_0(VAR_2->indentLevel, 0) + VAR_6;
  else
  {
   VAR_8 = VAR_0 +
    (VAR_2->indentLevel - VAR_0) /
    (VAR_1 / 2);
   VAR_8 %= VAR_0;

   VAR_8 += VAR_6;
  }
  FUNC_3(VAR_7, VAR_8);

  FUNC_4(VAR_7, VAR_3);

  VAR_2->indentLevel += VAR_5;
  if (VAR_2->indentLevel < 0)
   VAR_2->indentLevel = 0;
 }
 else
  FUNC_4(VAR_7, VAR_3);
}
