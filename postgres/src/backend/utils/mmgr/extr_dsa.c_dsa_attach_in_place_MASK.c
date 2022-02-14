
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dsm_segment ;
typedef int dsa_area ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int * FUNC_1 (void*,int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int ) ;

dsa_area *
FUNC_3(void *VAR_2, dsm_segment *VAR_3)
{
 dsa_area *VAR_4;

 VAR_4 = FUNC_1(VAR_2, ((void*)0), VAR_0);





 if (VAR_3 != ((void*)0))
  FUNC_2(VAR_3, &VAR_1,
       FUNC_0(VAR_2));

 return VAR_4;
}
