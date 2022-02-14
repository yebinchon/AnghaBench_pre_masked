
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ,char*,int,char const*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (int) ;

void
FUNC_6(char *VAR_3)
{
 const char *VAR_4 = VAR_2 ? VAR_2 : "NULL";

 if (FUNC_4(VAR_3, "all") != 0)
 {
  FUNC_0(VAR_0, "{ ECPGdeallocate(__LINE__, %d, %s, ", VAR_1, VAR_4);
  FUNC_3(VAR_3, 1);
  FUNC_1(");", VAR_0);
 }
 else
  FUNC_0(VAR_0, "{ ECPGdeallocate_all(__LINE__, %d, %s);", VAR_1, VAR_4);

 FUNC_5(2);
 FUNC_2(VAR_3);
 if (VAR_2 != ((void*)0))
  FUNC_2(VAR_2);
 VAR_2 = ((void*)0);
}
