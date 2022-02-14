
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cc; scalar_t__ policy; scalar_t__ nchan; scalar_t__ schan; int member_0; } ;
typedef TYPE_1__ wifi_country_t ;
typedef int lua_State ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6( lua_State* VAR_0 ){

  wifi_country_t VAR_1 = {0};


  if(FUNC_5(&VAR_1)){
    FUNC_1(VAR_0);

    FUNC_3(VAR_0, "country");
    FUNC_3(VAR_0, VAR_1.cc);
    FUNC_4(VAR_0, -3);

    FUNC_3(VAR_0, "start_ch");
    FUNC_2(VAR_0, VAR_1.schan);
    FUNC_4(VAR_0, -3);

    FUNC_3(VAR_0, "end_ch");
    FUNC_2(VAR_0, (VAR_1.schan + VAR_1.nchan)-1);
    FUNC_4(VAR_0, -3);

    FUNC_3(VAR_0, "policy");
    FUNC_2(VAR_0, VAR_1.policy);
    FUNC_4(VAR_0, -3);

    return 1;
  }
  else{
    return FUNC_0(VAR_0, "Unable to get country info");
  }
}
