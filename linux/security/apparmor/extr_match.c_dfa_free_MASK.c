
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_dfa {int ** tables; } ;


 int FUNC_0 (int **) ;
 int FUNC_1 (struct aa_dfa*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct aa_dfa *VAR_0)
{
 if (VAR_0) {
  int VAR_1;

  for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->tables); VAR_1++) {
   FUNC_2(VAR_0->tables[VAR_1]);
   VAR_0->tables[VAR_1] = ((void*)0);
  }
  FUNC_1(VAR_0);
 }
}
