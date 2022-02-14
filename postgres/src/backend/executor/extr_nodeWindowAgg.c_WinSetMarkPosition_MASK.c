
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64 ;
typedef TYPE_1__* WindowObject ;
struct TYPE_6__ {int buffer; } ;
typedef TYPE_2__ WindowAggState ;
struct TYPE_5__ {scalar_t__ markpos; scalar_t__ seekpos; int readptr; int markptr; TYPE_2__* winstate; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,scalar_t__,int) ;

void
FUNC_5(WindowObject VAR_1, int64 VAR_2)
{
 WindowAggState *VAR_3;

 FUNC_0(FUNC_1(VAR_1));
 VAR_3 = VAR_1->winstate;

 if (VAR_2 < VAR_1->markpos)
  FUNC_2(VAR_0, "cannot move WindowObject's mark position backward");
 FUNC_3(VAR_3->buffer, VAR_1->markptr);
 if (VAR_2 > VAR_1->markpos)
 {
  FUNC_4(VAR_3->buffer,
         VAR_2 - VAR_1->markpos,
         1);
  VAR_1->markpos = VAR_2;
 }
 FUNC_3(VAR_3->buffer, VAR_1->readptr);
 if (VAR_2 > VAR_1->seekpos)
 {
  FUNC_4(VAR_3->buffer,
         VAR_2 - VAR_1->seekpos,
         1);
  VAR_1->seekpos = VAR_2;
 }
}
