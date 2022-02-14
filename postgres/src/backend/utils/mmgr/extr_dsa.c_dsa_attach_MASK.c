
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dsm_segment ;
typedef int dsa_handle ;
typedef int dsa_area ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int *,int ) ;
 int VAR_2 ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int *,int ) ;

dsa_area *
FUNC_8(dsa_handle VAR_3)
{
 dsm_segment *VAR_4;
 dsa_area *VAR_5;





 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 == ((void*)0))
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_6("could not attach to dynamic shared area")));

 VAR_5 = FUNC_1(FUNC_3(VAR_4), VAR_4, VAR_3);


 FUNC_7(VAR_4, &VAR_2,
      FUNC_0(FUNC_3(VAR_4)));

 return VAR_5;
}
