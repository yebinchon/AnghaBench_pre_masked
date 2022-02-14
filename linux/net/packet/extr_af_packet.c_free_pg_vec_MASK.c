
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pgv {int * buffer; } ;


 int FUNC_0 (unsigned long,unsigned int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct pgv*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct pgv *VAR_0, unsigned int VAR_1,
   unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (FUNC_3(VAR_0[VAR_3].buffer)) {
   if (FUNC_1(VAR_0[VAR_3].buffer))
    FUNC_4(VAR_0[VAR_3].buffer);
   else
    FUNC_0((unsigned long)VAR_0[VAR_3].buffer,
        VAR_1);
   VAR_0[VAR_3].buffer = ((void*)0);
  }
 }
 FUNC_2(VAR_0);
}
