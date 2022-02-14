
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* state; scalar_t__* str; } ;
struct TYPE_4__ {int charlen; int posbyte; } ;
typedef TYPE_2__ TParser ;


 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static int
FUNC_1(TParser *VAR_0)
{
 return (VAR_0->state->charlen == 1 && FUNC_0((unsigned char) *(VAR_0->str + VAR_0->state->posbyte))) ? 1 : 0;
}
