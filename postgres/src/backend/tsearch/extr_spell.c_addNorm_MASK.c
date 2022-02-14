
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_4__ {char* lexeme; int flags; int nvariant; } ;
typedef TYPE_1__ TSLexeme ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(TSLexeme **VAR_1, TSLexeme **VAR_2, char *VAR_3, int VAR_4, uint16 VAR_5)
{
 if (*VAR_1 == ((void*)0))
  *VAR_2 = *VAR_1 = (TSLexeme *) FUNC_0(VAR_0 * sizeof(TSLexeme));

 if (*VAR_2 - *VAR_1 < VAR_0 - 1)
 {
  (*VAR_2)->lexeme = VAR_3;
  (*VAR_2)->flags = VAR_4;
  (*VAR_2)->nvariant = VAR_5;
  (*VAR_2)++;
  (*VAR_2)->lexeme = ((void*)0);
 }
}
