
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;
typedef int json_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,char*,int ) ;
 int * FUNC_3 (int *,char*,int ,int ,int ) ;
 int FUNC_4 (int *,char*,int ,int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static obs_properties_t *FUNC_9(void *VAR_6)
{
 FUNC_0(VAR_6);

 obs_properties_t *VAR_7 = FUNC_5();
 obs_property_t *VAR_8;
 json_t *VAR_9;

 VAR_9 = FUNC_8();
 if (VAR_9)
  FUNC_6(VAR_7, VAR_9, VAR_3);

 VAR_8 = FUNC_3(VAR_7, "service", FUNC_1("Service"),
        VAR_1,
        VAR_0);

 FUNC_7(VAR_8, VAR_4);

 VAR_8 = FUNC_2(VAR_7, "show_all",
        FUNC_1("ShowAll"));

 FUNC_7(VAR_8, VAR_5);

 FUNC_3(VAR_7, "server", FUNC_1("Server"),
    VAR_1, VAR_0);

 FUNC_4(VAR_7, "key", FUNC_1("StreamKey"),
    VAR_2);
 return VAR_7;
}
