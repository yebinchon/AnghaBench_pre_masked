
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int curvar; TYPE_1__* target; int is_move; } ;
struct TYPE_5__ {int dno; char* refname; } ;
typedef TYPE_2__ PLpgSQL_stmt_fetch ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static void
FUNC_3(PLpgSQL_stmt_fetch *VAR_1)
{
 FUNC_1();

 if (!VAR_1->is_move)
 {
  FUNC_2("FETCH curvar=%d\n", VAR_1->curvar);
  FUNC_0(VAR_1);

  VAR_0 += 2;
  if (VAR_1->target != ((void*)0))
  {
   FUNC_1();
   FUNC_2("    target = %d %s\n",
       VAR_1->target->dno, VAR_1->target->refname);
  }
  VAR_0 -= 2;
 }
 else
 {
  FUNC_2("MOVE curvar=%d\n", VAR_1->curvar);
  FUNC_0(VAR_1);
 }
}
