
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int charlen; int lenchartoken; int lenbytetoken; int poschar; int posbyte; int state; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_3__* state; scalar_t__ lenchartoken; scalar_t__ lenbytetoken; } ;
typedef TYPE_1__ TParser ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_4(TParser *VAR_2)
{
 TParser *VAR_3 = FUNC_1(VAR_2);
 int VAR_4 = 0;

 VAR_3->state = FUNC_3(VAR_3->state);
 VAR_3->state->state = VAR_0;

 if (FUNC_2(VAR_3) && VAR_3->type == VAR_1)
 {
  VAR_2->state->posbyte += VAR_3->lenbytetoken;
  VAR_2->state->poschar += VAR_3->lenchartoken;
  VAR_2->state->lenbytetoken += VAR_3->lenbytetoken;
  VAR_2->state->lenchartoken += VAR_3->lenchartoken;
  VAR_2->state->charlen = VAR_3->state->charlen;
  VAR_4 = 1;
 }
 FUNC_0(VAR_3);

 return VAR_4;
}
