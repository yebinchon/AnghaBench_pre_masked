
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int exitlabel; } ;
struct TYPE_7__ {scalar_t__ is_exit; int label; int * cond; } ;
typedef TYPE_1__ PLpgSQL_stmt_exit ;
typedef TYPE_2__ PLpgSQL_execstate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int *,int*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(PLpgSQL_execstate *VAR_3, PLpgSQL_stmt_exit *VAR_4)
{



 if (VAR_4->cond != ((void*)0))
 {
  bool VAR_5;
  bool VAR_6;

  VAR_5 = FUNC_0(VAR_3, VAR_4->cond, &VAR_6);
  FUNC_1(VAR_3);
  if (VAR_6 || VAR_5 == 0)
   return VAR_2;
 }

 VAR_3->exitlabel = VAR_4->label;
 if (VAR_4->is_exit)
  return VAR_1;
 else
  return VAR_0;
}
