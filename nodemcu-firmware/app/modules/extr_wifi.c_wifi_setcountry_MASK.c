
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* cc; int schan; int nchan; int policy; int member_0; } ;
typedef TYPE_1__ wifi_country_t ;
typedef int uint8 ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int*,int,int,int) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (int *,int,int,char*) ;
 int FUNC_3 (int *,int,char*) ;
 char* FUNC_4 (int *,int,size_t*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int,char*) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int*,char const*,size_t) ;
 int FUNC_15 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_16( lua_State* VAR_2 ){
  size_t VAR_3;
  uint8 VAR_4;
  uint8 VAR_5;
  wifi_country_t VAR_6 = {0};

  if(FUNC_11(VAR_2, 1)){
    FUNC_7(VAR_2, 1, "country");
    if (!FUNC_8(VAR_2, -1)){
      if( FUNC_10(VAR_2, -1) ){
        const char *VAR_7 = FUNC_4( VAR_2, -1, &VAR_3 );
        FUNC_2(VAR_2, (VAR_3==2 && FUNC_1(VAR_7[0]) && FUNC_1(VAR_7[1])), 1, "country: country code must be 2 chars");
        FUNC_14(VAR_6.cc, VAR_7, VAR_3);
        if(VAR_6.cc[0] >= 0x61) VAR_6.cc[0]=VAR_6.cc[0]-32;
        if(VAR_6.cc[1] >= 0x61) VAR_6.cc[1]=VAR_6.cc[1]-32;
      }
      else
        return FUNC_3( VAR_2, 1, "country: must be string" );
    }
    else{
      VAR_6.cc[0]='C';
      VAR_6.cc[1]='N';
      VAR_6.cc[2]=0x00;
    }
    FUNC_12(VAR_2, 1);

    FUNC_7(VAR_2, 1, "start_ch");
    if (!FUNC_8(VAR_2, -1)){
      if(FUNC_9(VAR_2, -1)){
        VAR_4 = (uint8)FUNC_5(VAR_2, -1);
        FUNC_2(VAR_2, (VAR_4 >= 1 && VAR_4 <= 14), 1, "start_ch: Range:1-14");
        VAR_6.schan = VAR_4;
      }
      else
        FUNC_3(VAR_2, 1, "start_ch: must be a number");
    }
    else
      VAR_6.schan = 1;

    FUNC_12(VAR_2, 1);

    FUNC_7(VAR_2, 1, "end_ch");
    if (!FUNC_8(VAR_2, -1)){
      if(FUNC_9(VAR_2, -1)){
        VAR_5 = (uint8)FUNC_5(VAR_2, -1);
        FUNC_2(VAR_2, (VAR_5 >= 1 && VAR_5 <= 14), 1, "end_ch: Range:1-14");
        FUNC_2(VAR_2, (VAR_5 >= VAR_6.schan), 1, "end_ch: can't be less than start_ch");
        VAR_6.nchan = (VAR_5-VAR_6.schan)+1;
      }
      else
        FUNC_3(VAR_2, 1, "end_ch: must be a number");
    }
    else
      VAR_6.nchan = (13-VAR_6.schan)+1;
    FUNC_12(VAR_2, 1);

    FUNC_7(VAR_2, 1, "policy");
    if (!FUNC_8(VAR_2, -1)){
      if(FUNC_9(VAR_2, -1)){
        uint8 VAR_8 = (uint8)FUNC_5(VAR_2, -1);
        FUNC_2(VAR_2, (VAR_8 == VAR_0 || VAR_8 == VAR_1), 1, "policy: must be 0 or 1");
        VAR_6.policy = VAR_8;
      }
      else
        FUNC_3(VAR_2, 1, "policy: must be a number");
    }
    else
      VAR_6.policy = VAR_0;
    FUNC_12(VAR_2, 1);

    FUNC_12(VAR_2, 1);

    bool VAR_9 = FUNC_15(&VAR_6);
    FUNC_0("\n country_cfg:\tcc:\"%s\"\tschan:%d\tnchan:%d\tpolicy:%d\n", VAR_6.cc, VAR_6.schan, VAR_6.nchan, VAR_6.policy);

    if (VAR_9==1)
      FUNC_13(VAR_2, 1);
    else
      return FUNC_6(VAR_2, "Unable to set country info");
  }
  else
    return FUNC_3(VAR_2, 1, "Table not found!");
  return 1;
}
