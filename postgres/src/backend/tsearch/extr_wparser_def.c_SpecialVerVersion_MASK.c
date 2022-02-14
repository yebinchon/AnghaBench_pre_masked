
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* state; } ;
struct TYPE_4__ {scalar_t__ lenchartoken; scalar_t__ lenbytetoken; int poschar; int posbyte; } ;
typedef TYPE_2__ TParser ;



__attribute__((used)) static void
FUNC_0(TParser *VAR_0)
{
 VAR_0->state->posbyte -= VAR_0->state->lenbytetoken;
 VAR_0->state->poschar -= VAR_0->state->lenchartoken;
 VAR_0->state->lenbytetoken = 0;
 VAR_0->state->lenchartoken = 0;
}
