
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int randstate; } ;
struct TYPE_4__ {int targrows; int samplerows; int numrows; int rowstoskip; int temp_cxt; int retrieved_attrs; int attinmeta; int rel; int * rows; int anl_cxt; TYPE_2__ rstate; } ;
typedef TYPE_1__ PgFdwAnalyzeState ;
typedef int PGresult ;
typedef int MemoryContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int ,int ,int ,int *,int ) ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(PGresult *VAR_0, int VAR_1, PgFdwAnalyzeState *VAR_2)
{
 int VAR_3 = VAR_2->targrows;
 int VAR_4;
 MemoryContext VAR_5;


 VAR_2->samplerows += 1;





 if (VAR_2->numrows < VAR_3)
 {

  VAR_4 = VAR_2->numrows++;
 }
 else
 {





  if (VAR_2->rowstoskip < 0)
   VAR_2->rowstoskip = FUNC_4(&VAR_2->rstate, VAR_2->samplerows, VAR_3);

  if (VAR_2->rowstoskip <= 0)
  {

   VAR_4 = (int) (VAR_3 * FUNC_5(VAR_2->rstate.randstate));
   FUNC_0(VAR_4 >= 0 && VAR_4 < VAR_3);
   FUNC_2(VAR_2->rows[VAR_4]);
  }
  else
  {

   VAR_4 = -1;
  }

  VAR_2->rowstoskip -= 1;
 }

 if (VAR_4 >= 0)
 {




  VAR_5 = FUNC_1(VAR_2->anl_cxt);

  VAR_2->rows[VAR_4] = FUNC_3(VAR_0, VAR_1,
                VAR_2->rel,
                VAR_2->attinmeta,
                VAR_2->retrieved_attrs,
                ((void*)0),
                VAR_2->temp_cxt);

  FUNC_1(VAR_5);
 }
}
