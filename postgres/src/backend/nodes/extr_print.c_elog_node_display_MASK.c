
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (void const*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;

void
FUNC_7(int VAR_0, const char *VAR_1, const void *VAR_2, bool VAR_3)
{
 char *VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_3)
  VAR_5 = FUNC_6(VAR_4);
 else
  VAR_5 = FUNC_3(VAR_4);
 FUNC_5(VAR_4);
 FUNC_0(VAR_0,
   (FUNC_2("%s:", VAR_1),
    FUNC_1("%s", VAR_5)));
 FUNC_5(VAR_5);
}
