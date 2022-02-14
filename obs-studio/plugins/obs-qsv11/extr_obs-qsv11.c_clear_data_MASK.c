
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_qsv {int * extra_data; int * context; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct obs_qsv *VAR_1)
{
 if (VAR_1->context) {
  FUNC_0(&VAR_0);
  FUNC_3(VAR_1->context);
  VAR_1->context = ((void*)0);
  FUNC_1(&VAR_0);


  FUNC_2(VAR_1->extra_data);


  VAR_1->extra_data = ((void*)0);
 }
}
