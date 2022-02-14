
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int wanthost; scalar_t__ type; TYPE_1__* state; scalar_t__ lenchartoken; scalar_t__ lenbytetoken; } ;
struct TYPE_8__ {int charlen; int lenchartoken; int lenbytetoken; int poschar; int posbyte; } ;
typedef TYPE_2__ TParser ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_3(TParser *VAR_1)
{
 TParser *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = 0;

 VAR_2->wanthost = 1;

 if (FUNC_2(VAR_2) && VAR_2->type == VAR_0)
 {
  VAR_1->state->posbyte += VAR_2->lenbytetoken;
  VAR_1->state->poschar += VAR_2->lenchartoken;
  VAR_1->state->lenbytetoken += VAR_2->lenbytetoken;
  VAR_1->state->lenchartoken += VAR_2->lenchartoken;
  VAR_1->state->charlen = VAR_2->state->charlen;
  VAR_3 = 1;
 }
 FUNC_0(VAR_2);

 return VAR_3;
}
