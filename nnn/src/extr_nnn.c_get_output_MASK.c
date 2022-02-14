
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char const*,char const*,char const*,char const*,int *) ;
 int FUNC_5 (int,int ,int) ;
 int * FUNC_6 (int,char*) ;
 char* FUNC_7 (char*,size_t const,int *) ;
 scalar_t__ FUNC_8 () ;
 int VAR_7 ;
 int FUNC_9 (int*) ;
 int FUNC_10 (int ,int *,int *,int *,int ) ;
 int FUNC_11 (scalar_t__,int*,int ) ;

__attribute__((used)) static char *FUNC_12(char *VAR_8, const size_t VAR_9, const char *VAR_10,
   const char *VAR_11, const char *VAR_12, const bool VAR_13)
{
 pid_t VAR_14;
 int VAR_15[2];
 FILE *VAR_16;
 int VAR_17, VAR_18;
 char *VAR_19 = ((void*)0);

 if (FUNC_9(VAR_15) == -1)
  FUNC_3();

 for (VAR_17 = 0; VAR_17 < 2; ++VAR_17) {

  VAR_18 = FUNC_5(VAR_15[VAR_17], VAR_1, 0);


  VAR_18 |= VAR_3;


  FUNC_5(VAR_15[VAR_17], VAR_2, VAR_18);
 }

 VAR_14 = FUNC_8();
 if (VAR_14 == 0) {

  FUNC_1(VAR_15[0]);
  FUNC_2(VAR_15[1], VAR_6);
  FUNC_2(VAR_15[1], VAR_4);
  FUNC_1(VAR_15[1]);
  FUNC_4(VAR_10, VAR_10, VAR_11, VAR_12, ((void*)0));
  FUNC_0(1);
 }


 FUNC_11(VAR_14, &VAR_17, 0);
 FUNC_1(VAR_15[1]);

 if (!VAR_13) {
  VAR_16 = FUNC_6(VAR_15[0], "r");
  if (VAR_16) {
   VAR_19 = FUNC_7(VAR_8, VAR_9, VAR_16);
   FUNC_1(VAR_15[0]);
  }

  return VAR_19;
 }


 VAR_14 = FUNC_8();
 if (VAR_14 == 0) {

  FUNC_2(VAR_15[0], VAR_5);
  FUNC_1(VAR_15[0]);
  FUNC_10(VAR_7, ((void*)0), ((void*)0), ((void*)0), VAR_0);
  FUNC_0(1);
 }


 FUNC_11(VAR_14, &VAR_17, 0);
 FUNC_1(VAR_15[0]);

 return ((void*)0);
}
