
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_vector {int dummy; } ;


 unsigned long FUNC_0 (struct key_vector*) ;
 struct key_vector* FUNC_1 (struct key_vector*,unsigned long) ;
 struct key_vector* FUNC_2 (struct key_vector*) ;
 int FUNC_3 (struct key_vector*,struct key_vector*) ;

__attribute__((used)) static void FUNC_4(struct key_vector *VAR_0)
{
 unsigned long VAR_1;


 for (VAR_1 = FUNC_0(VAR_0); VAR_1;) {
  struct key_vector *VAR_2 = FUNC_1(VAR_0, --VAR_1);

  if (!VAR_2)
   continue;





  if (FUNC_2(VAR_2) == VAR_0)
   FUNC_4(VAR_2);
  else
   FUNC_3(VAR_2, VAR_0);
 }
}
