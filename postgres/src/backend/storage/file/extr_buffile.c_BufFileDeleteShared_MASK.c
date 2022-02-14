
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SharedFileSet ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (int ,char*,char const*) ;

void
FUNC_4(SharedFileSet *VAR_2, const char *VAR_3)
{
 char VAR_4[VAR_1];
 int VAR_5 = 0;
 bool VAR_6 = 0;






 for (;;)
 {
  FUNC_2(VAR_4, VAR_3, VAR_5);
  if (!FUNC_1(VAR_2, VAR_4, 1))
   break;
  VAR_6 = 1;
  ++VAR_5;

  FUNC_0();
 }

 if (!VAR_6)
  FUNC_3(VAR_0, "could not delete unknown shared BufFile \"%s\"", VAR_3);
}
