
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pos; scalar_t__ nbytes; size_t buffer; int writing; } ;
struct TYPE_6__ {int nTapes; TYPE_2__* tapes; } ;
typedef TYPE_1__ LogicalTapeSet ;
typedef TYPE_2__ LogicalTape ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (void*,size_t,size_t) ;

size_t
FUNC_3(LogicalTapeSet *VAR_0, int VAR_1,
    void *VAR_2, size_t VAR_3)
{
 LogicalTape *VAR_4;
 size_t VAR_5 = 0;
 size_t VAR_6;

 FUNC_0(VAR_1 >= 0 && VAR_1 < VAR_0->nTapes);
 VAR_4 = &VAR_0->tapes[VAR_1];
 FUNC_0(!VAR_4->writing);

 while (VAR_3 > 0)
 {
  if (VAR_4->pos >= VAR_4->nbytes)
  {

   if (!FUNC_1(VAR_0, VAR_4))
    break;
  }

  VAR_6 = VAR_4->nbytes - VAR_4->pos;
  if (VAR_6 > VAR_3)
   VAR_6 = VAR_3;
  FUNC_0(VAR_6 > 0);

  FUNC_2(VAR_2, VAR_4->buffer + VAR_4->pos, VAR_6);

  VAR_4->pos += VAR_6;
  VAR_2 = (void *) ((char *) VAR_2 + VAR_6);
  VAR_3 -= VAR_6;
  VAR_5 += VAR_6;
 }

 return VAR_5;
}
