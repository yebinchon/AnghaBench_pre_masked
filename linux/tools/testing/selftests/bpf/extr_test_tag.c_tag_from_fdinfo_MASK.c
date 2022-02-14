
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int buff ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (char*,int,char*,int,int) ;
 scalar_t__ FUNC_7 (char*,char*,int const) ;

__attribute__((used)) static void FUNC_8(int VAR_0, uint8_t *VAR_1, uint32_t VAR_2)
{
 const int VAR_3 = sizeof("prog_tag:\t") - 1;
 char VAR_4[256];
 int VAR_5 = -1;
 FILE *VAR_6;

 FUNC_6(VAR_4, sizeof(VAR_4), "/proc/%d/fdinfo/%d", FUNC_4(),
   VAR_0);
 VAR_6 = FUNC_3(VAR_4, "r");
 FUNC_0(*VAR_6);

 while (FUNC_2(VAR_4, sizeof(VAR_4), VAR_6)) {
  if (FUNC_7(VAR_4, "prog_tag:\t", VAR_3))
   continue;
  VAR_5 = FUNC_5(VAR_1, VAR_4 + VAR_3, VAR_2);
  break;
 }

 FUNC_1(VAR_6);
 FUNC_0(!VAR_5);
}
