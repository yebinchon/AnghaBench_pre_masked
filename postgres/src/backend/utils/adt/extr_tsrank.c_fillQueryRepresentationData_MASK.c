
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_8__ {int nitem; TYPE_7__** items; } ;
struct TYPE_9__ {TYPE_1__ query; } ;
struct TYPE_11__ {int pos; TYPE_2__ data; } ;
struct TYPE_10__ {int operandexists; int npos; int * pos; scalar_t__ reverseinsert; } ;
typedef TYPE_3__ QueryRepresentationOperand ;
typedef int QueryRepresentation ;
typedef TYPE_4__ DocRepresentation ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (int *,TYPE_7__*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(QueryRepresentation *VAR_2, DocRepresentation *VAR_3)
{
 int VAR_4;
 int VAR_5;
 QueryRepresentationOperand *VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_3->data.query.nitem; VAR_4++)
 {
  if (VAR_3->data.query.items[VAR_4]->type != VAR_1)
   continue;

  VAR_6 = FUNC_0(VAR_2, VAR_3->data.query.items[VAR_4]);

  VAR_6->operandexists = 1;

  if (VAR_6->npos == 0)
  {
   VAR_5 = (VAR_6->reverseinsert) ? (VAR_0 - 1) : 0;
   VAR_6->pos[VAR_5] = VAR_3->pos;
   VAR_6->npos++;
   continue;
  }

  VAR_5 = VAR_6->reverseinsert ?
   (VAR_0 - VAR_6->npos) :
   (VAR_6->npos - 1);

  if (FUNC_1(VAR_6->pos[VAR_5]) != FUNC_1(VAR_3->pos))
  {
   VAR_5 = VAR_6->reverseinsert ?
    (VAR_0 - 1 - VAR_6->npos) :
    (VAR_6->npos);

   VAR_6->pos[VAR_5] = VAR_3->pos;
   VAR_6->npos++;
  }
 }
}
