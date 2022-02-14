
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int element; } ;
typedef TYPE_1__ TextFreq ;
struct TYPE_4__ {int length; int lexeme; } ;
typedef TYPE_2__ LexemeKey ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(const void *VAR_0, const void *VAR_1)
{
 const LexemeKey *VAR_2 = (const LexemeKey *) VAR_0;
 const TextFreq *VAR_3 = (const TextFreq *) VAR_1;
 int VAR_4,
    VAR_5;

 VAR_4 = VAR_2->length;
 VAR_5 = FUNC_1(VAR_3->element);


 if (VAR_4 > VAR_5)
  return 1;
 else if (VAR_4 < VAR_5)
  return -1;


 return FUNC_2(VAR_2->lexeme, FUNC_0(VAR_3->element), VAR_4);
}
