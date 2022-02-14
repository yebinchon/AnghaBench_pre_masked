
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SV ;
typedef int I32 ;
typedef int HV ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_12 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int ) ;
 int * FUNC_9 (char*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *,char**,int *) ;
 int FUNC_13 (int *) ;
 char* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void
FUNC_16(void)
{
 VAR_12;
 HV *VAR_17;
 SV *VAR_18;
 char *VAR_19;
 I32 VAR_20;


 VAR_9[VAR_6] = VAR_15;
 VAR_9[VAR_5] = VAR_15;

 FUNC_8(VAR_7, VAR_3);
 if (FUNC_3(VAR_2))
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_7("%s", FUNC_14(FUNC_15(VAR_2))),
     FUNC_6("while executing PLC_TRUSTED")));






 FUNC_8("my $a=chr(0x100); return $a =~ /\\xa9/i", VAR_3);
 if (FUNC_3(VAR_2))
  FUNC_4(VAR_1,
    (FUNC_5(VAR_0),
     FUNC_7("%s", FUNC_14(FUNC_15(VAR_2))),
     FUNC_6("while executing utf8fix")));






 VAR_9[VAR_6] = VAR_16;
 VAR_9[VAR_5] = VAR_16;





 VAR_8 = VAR_14;


 VAR_17 = FUNC_9("DynaLoader", VAR_4);
 FUNC_11(VAR_17);
 while ((VAR_18 = FUNC_12(VAR_17, &VAR_19, &VAR_20)))
 {
  if (!FUNC_13(VAR_18) || !FUNC_0(VAR_18))
   continue;
  FUNC_2(FUNC_0(VAR_18));
  FUNC_1(VAR_18, ((void*)0));
 }
 FUNC_10(VAR_17);


 ++VAR_11;
 FUNC_10(VAR_10);




 if (VAR_13 && *VAR_13)
 {
  FUNC_8(VAR_13, VAR_3);

  if (FUNC_3(VAR_2))
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_7("%s", FUNC_14(FUNC_15(VAR_2))),
      FUNC_6("while executing plperl.on_plperl_init")));
 }
}
