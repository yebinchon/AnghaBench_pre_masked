
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int outer_result; int outer_tuptable; int outer_processed; int * procCxt; int * execCxt; int savedcxt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 size_t VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;

int
FUNC_3(void)
{
 int VAR_7;

 VAR_7 = FUNC_2(0);
 if (VAR_7 < 0)
  return VAR_7;


 FUNC_1(VAR_5->savedcxt);


 FUNC_0(VAR_5->execCxt);
 VAR_5->execCxt = ((void*)0);
 FUNC_0(VAR_5->procCxt);
 VAR_5->procCxt = ((void*)0);





 VAR_1 = VAR_5->outer_processed;
 VAR_3 = VAR_5->outer_tuptable;
 VAR_2 = VAR_5->outer_result;


 VAR_4--;
 if (VAR_4 < 0)
  VAR_5 = ((void*)0);
 else
  VAR_5 = &(VAR_6[VAR_4]);

 return VAR_0;
}
