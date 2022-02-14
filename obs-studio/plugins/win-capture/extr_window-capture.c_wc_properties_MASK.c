
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (void*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 (int *,char*,int ,int ,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static obs_properties_t *FUNC_6(void *VAR_14)
{
 FUNC_0(VAR_14);

 obs_properties_t *VAR_15 = FUNC_4();
 obs_property_t *VAR_16;

 VAR_16 = FUNC_3(VAR_15, "window", VAR_10,
        VAR_3,
        VAR_2);
 FUNC_1(VAR_16, VAR_0, ((void*)0));

 VAR_16 = FUNC_3(VAR_15, "priority", VAR_8,
        VAR_3, VAR_1);
 FUNC_5(VAR_16, VAR_9, VAR_13);
 FUNC_5(VAR_16, VAR_6, VAR_11);
 FUNC_5(VAR_16, VAR_7, VAR_12);

 FUNC_2(VAR_15, "cursor", VAR_4);

 FUNC_2(VAR_15, "compatibility", VAR_5);

 return VAR_15;
}
