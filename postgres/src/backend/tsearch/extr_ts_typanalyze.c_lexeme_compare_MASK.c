
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; int lexeme; } ;
typedef TYPE_1__ LexemeHashKey ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const LexemeHashKey *VAR_2 = (const LexemeHashKey *) VAR_0;
 const LexemeHashKey *VAR_3 = (const LexemeHashKey *) VAR_1;


 if (VAR_2->length > VAR_3->length)
  return 1;
 else if (VAR_2->length < VAR_3->length)
  return -1;

 return FUNC_0(VAR_2->lexeme, VAR_3->lexeme, VAR_2->length);
}
