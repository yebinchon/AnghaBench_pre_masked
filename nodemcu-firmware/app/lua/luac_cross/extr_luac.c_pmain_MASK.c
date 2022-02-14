
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Smain {int argc; char** argv; } ;
typedef int lua_State ;
typedef int Proto ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int const*,int ,int *,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 char const* VAR_4 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ VAR_5 ;
 int * FUNC_7 (int *,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (int *,char const*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int const*,int ,int *,int ,int ) ;
 int FUNC_11 (int const*,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,int,int,int ) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,char const*) ;
 char* FUNC_18 (int *,int) ;
 scalar_t__ FUNC_19 (int *,int) ;
 int FUNC_20 (int *) ;
 int VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_21(lua_State* VAR_14)
{
 struct Smain* VAR_15 = (struct Smain*)FUNC_19(VAR_14, 1);
 int VAR_16=VAR_15->argc;
 char** VAR_17=VAR_15->argv;
 const Proto* VAR_18;
 int VAR_19;
 if (!FUNC_12(VAR_14,VAR_16)) FUNC_4("too many input files");
 if (VAR_4)
 {
  if (FUNC_8(VAR_14,VAR_4)!=0) FUNC_4(FUNC_18(VAR_14,-1));
  FUNC_9(VAR_14);
  FUNC_17(VAR_14, VAR_4);
  if (FUNC_15(VAR_14, 1, 1, 0)) FUNC_4(FUNC_18(VAR_14,-1));
  if (!FUNC_13(VAR_14, -1))
  {
   FUNC_16(VAR_14,1);
   if(VAR_16 == 0) return 0;
   VAR_4 = ((void*)0);
  }
 }
 for (VAR_19=0; VAR_19<VAR_16; VAR_19++)
 {
  const char* VAR_20=FUNC_0("-") ? ((void*)0) : VAR_17[VAR_19];
  if (FUNC_8(VAR_14,VAR_20)!=0) FUNC_4(FUNC_18(VAR_14,-1));
 }
 VAR_18=FUNC_2(VAR_14,VAR_16 + (VAR_4 ? 1: 0), VAR_7);
 if (VAR_6) FUNC_11(VAR_18,VAR_6>1);
 if (VAR_3)
 {
  int VAR_21;
  FILE* VAR_22= (VAR_9==((void*)0)) ? VAR_10 : FUNC_7(VAR_9,"wb");
  if (VAR_22==((void*)0)) FUNC_1("open");
  FUNC_14(VAR_14);
  if (VAR_5)
  {
    VAR_21=FUNC_3(VAR_14,VAR_18,VAR_13, VAR_22, VAR_11, VAR_2, VAR_8);
  } else
  {
    VAR_21=FUNC_10(VAR_14,VAR_18,VAR_13,VAR_22,VAR_11,VAR_12);
  }
  FUNC_20(VAR_14);
  if (VAR_21==VAR_0) FUNC_4("value too big or small for target integer type");
  if (VAR_21==VAR_1) FUNC_4("target lua_Number is integral but fractional value found");
  if (FUNC_6(VAR_22)) FUNC_1("write");
  if (FUNC_5(VAR_22)) FUNC_1("close");
 }
 return 0;
}
