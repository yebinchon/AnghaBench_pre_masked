
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* source; char lexchar; int line; } ;
typedef TYPE_1__ js_State ;
typedef char Rune ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static void FUNC_2(js_State *VAR_0)
{
 Rune VAR_1;
 VAR_0->source += FUNC_0(&VAR_1, VAR_0->source);

 if (VAR_1 == '\r' && *VAR_0->source == '\n')
  ++VAR_0->source;
 if (FUNC_1(VAR_1)) {
  VAR_0->line++;
  VAR_1 = '\n';
 }
 VAR_0->lexchar = VAR_1;
}
