
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int charlen; int posbyte; } ;
struct TYPE_4__ {char* str; TYPE_3__* state; } ;
typedef TYPE_1__ TParser ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_1(TParser *VAR_0, char VAR_1)
{
 FUNC_0(VAR_0->state);
 return ((VAR_0->state->charlen == 1 && *(VAR_0->str + VAR_0->state->posbyte) == VAR_1)) ? 1 : 0;
}
