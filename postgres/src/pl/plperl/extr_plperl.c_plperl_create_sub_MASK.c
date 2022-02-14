
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* proname; int * reference; } ;
typedef TYPE_1__ plperl_proc_desc ;
typedef int SV ;
typedef int Oid ;
typedef int HV ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char const*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (int *,char*,int *) ;
 scalar_t__ FUNC_12 () ;
 int * FUNC_13 () ;
 int * FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (char*,int) ;
 scalar_t__ VAR_19 ;
 int FUNC_17 (char*,char*,char*,int) ;
 char* FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int * FUNC_20 (int ) ;

__attribute__((used)) static void
FUNC_21(plperl_proc_desc *VAR_20, const char *VAR_21, Oid VAR_22)
{
 VAR_18;
 VAR_17;
 char VAR_23[VAR_9 + 40];
 HV *VAR_24 = FUNC_13();
 SV *VAR_25 = ((void*)0);
 int VAR_26;

 FUNC_17(VAR_23, "%s__%u", VAR_20->proname, VAR_22);

 if (VAR_19)
  FUNC_11(VAR_24, "strict", (SV *) FUNC_12());

 VAR_0;
 VAR_13;
 FUNC_1(VAR_14);
 FUNC_0(VAR_14, 4);
 FUNC_2(FUNC_20(FUNC_7(VAR_23)));
 FUNC_2(FUNC_20(FUNC_15((SV *) VAR_24)));






 FUNC_2(&VAR_10);
 FUNC_2(FUNC_20(FUNC_7(VAR_21)));
 VAR_12;






 VAR_26 = FUNC_16("PostgreSQL::InServer::mkfunc",
       VAR_7 | VAR_5 | VAR_6);
 VAR_15;

 if (VAR_26 == 1)
 {
  SV *VAR_27 = (SV *) VAR_11;

  if (VAR_27 && FUNC_3(VAR_27) && FUNC_6(FUNC_4(VAR_27)) == VAR_16)
  {
   VAR_25 = FUNC_14(FUNC_4(VAR_27));
  }
 }

 VAR_12;
 VAR_4;
 VAR_8;

 if (FUNC_5(VAR_3))
  FUNC_8(VAR_2,
    (FUNC_9(VAR_1),
     FUNC_10("%s", FUNC_18(FUNC_19(VAR_3)))));

 if (!VAR_25)
  FUNC_8(VAR_2,
    (FUNC_9(VAR_1),
     FUNC_10("didn't get a CODE reference from compiling function \"%s\"",
      VAR_20->proname)));

 VAR_20->reference = VAR_25;

 return;
}
