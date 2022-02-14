
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64 ;
typedef TYPE_4__* WindowObject ;
struct TYPE_9__ {TYPE_1__* ps_ExprContext; } ;
struct TYPE_10__ {TYPE_2__ ps; } ;
struct TYPE_12__ {int spooled_rows; int buffer; TYPE_3__ ss; } ;
typedef TYPE_5__ WindowAggState ;
typedef int TupleTableSlot ;
struct TYPE_11__ {int markpos; int seekpos; int readptr; TYPE_5__* winstate; } ;
struct TYPE_8__ {int ecxt_per_query_memory; } ;
typedef int MemoryContext ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_5__*,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int,int) ;

__attribute__((used)) static bool
FUNC_9(WindowObject VAR_1, int64 VAR_2, TupleTableSlot *VAR_3)
{
 WindowAggState *VAR_4 = VAR_1->winstate;
 MemoryContext VAR_5;


 FUNC_1();


 if (VAR_2 < 0)
  return 0;


 FUNC_4(VAR_4, VAR_2);

 if (VAR_2 >= VAR_4->spooled_rows)
  return 0;

 if (VAR_2 < VAR_1->markpos)
  FUNC_3(VAR_0, "cannot fetch row before WindowObject's mark position");

 VAR_5 = FUNC_2(VAR_4->ss.ps.ps_ExprContext->ecxt_per_query_memory);

 FUNC_7(VAR_4->buffer, VAR_1->readptr);




 if (VAR_1->seekpos < VAR_2 - 1)
 {
  if (!FUNC_8(VAR_4->buffer,
           VAR_2 - 1 - VAR_1->seekpos,
           1))
   FUNC_3(VAR_0, "unexpected end of tuplestore");
  VAR_1->seekpos = VAR_2 - 1;
 }
 else if (VAR_1->seekpos > VAR_2 + 1)
 {
  if (!FUNC_8(VAR_4->buffer,
           VAR_1->seekpos - (VAR_2 + 1),
           0))
   FUNC_3(VAR_0, "unexpected end of tuplestore");
  VAR_1->seekpos = VAR_2 + 1;
 }
 else if (VAR_1->seekpos == VAR_2)
 {







  FUNC_5(VAR_4->buffer, 1);
  VAR_1->seekpos++;
 }





 if (VAR_1->seekpos > VAR_2)
 {
  if (!FUNC_6(VAR_4->buffer, 0, 1, VAR_3))
   FUNC_3(VAR_0, "unexpected end of tuplestore");
  VAR_1->seekpos--;
 }
 else
 {
  if (!FUNC_6(VAR_4->buffer, 1, 1, VAR_3))
   FUNC_3(VAR_0, "unexpected end of tuplestore");
  VAR_1->seekpos++;
 }

 FUNC_0(VAR_1->seekpos == VAR_2);

 FUNC_2(VAR_5);

 return 1;
}
