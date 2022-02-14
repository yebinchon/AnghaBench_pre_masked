
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int obs_property_t ;
typedef int obs_properties_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 char* FUNC_1 (char*) ;
 int * FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,char*,char*,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static obs_properties_t *FUNC_6(void *VAR_3)
{
 FUNC_0(VAR_3);

 obs_properties_t *VAR_4 = FUNC_4();
 obs_property_t *VAR_5;

 FUNC_3(VAR_4, "server", "URL", VAR_0);

 FUNC_3(VAR_4, "key", FUNC_1("StreamKey"),
    VAR_1);

 VAR_5 = FUNC_2(VAR_4, "use_auth",
        FUNC_1("UseAuth"));
 FUNC_3(VAR_4, "username", FUNC_1("Username"),
    VAR_0);
 FUNC_3(VAR_4, "password", FUNC_1("Password"),
    VAR_1);
 FUNC_5(VAR_5, VAR_2);
 return VAR_4;
}
