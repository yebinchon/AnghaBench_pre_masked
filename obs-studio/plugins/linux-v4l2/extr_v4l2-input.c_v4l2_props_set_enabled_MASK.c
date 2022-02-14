
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(obs_properties_t *VAR_0,
       obs_property_t *VAR_1, bool VAR_2)
{
 if (!VAR_0)
  return;

 for (obs_property_t *VAR_3 = FUNC_0(VAR_0); VAR_3 != ((void*)0);
      FUNC_1(&VAR_3)) {
  if (VAR_3 == VAR_1)
   continue;

  FUNC_2(VAR_3, VAR_2);
 }
}
