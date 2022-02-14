
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PerlInterpreter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int*,char***,char***) ;

 int FUNC_2 (int ,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int ,int,char**,int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int VAR_17 ;
 char* VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_12 (int ,int ) ;
 char* FUNC_13 (char*) ;
 char* FUNC_14 (int ,int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static PerlInterpreter *
FUNC_17(void)
{
 PerlInterpreter *VAR_21;

 static char *VAR_22[3 + 2] = {
  "", "-e", 128
 };
 int VAR_23 = 3;
 if (VAR_18 && *VAR_18)
 {
  VAR_22[VAR_23++] = "-e";
  VAR_22[VAR_23++] = VAR_18;
 }
 VAR_21 = FUNC_8();
 if (!VAR_21)
  FUNC_3(VAR_1, "could not allocate Perl interpreter");

 FUNC_0(VAR_21);
 FUNC_9(VAR_21);






 {
  VAR_16;

  VAR_12 |= VAR_11;






  if (!VAR_20)
   VAR_20 = VAR_14[VAR_10];
  else
  {
   VAR_14[VAR_10] = VAR_20;
   VAR_14[VAR_9] = VAR_20;
  }
  if (FUNC_10(VAR_21, VAR_17,
        VAR_23, VAR_22, ((void*)0)) != 0)
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_7("%s", FUNC_15(FUNC_16(VAR_2))),
      FUNC_6("while parsing Perl initialization")));

  if (FUNC_11(VAR_21) != 0)
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_7("%s", FUNC_15(FUNC_16(VAR_2))),
      FUNC_6("while running Perl initialization")));
 }

 return VAR_21;
}
