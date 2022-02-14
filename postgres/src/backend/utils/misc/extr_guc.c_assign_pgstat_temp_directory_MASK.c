
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,scalar_t__) ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int FUNC_2 (char*,char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_4, void *VAR_5)
{

 char *VAR_6;
 char *VAR_7;
 char *VAR_8;


 VAR_6 = FUNC_1(VAR_0, FUNC_3(VAR_4) + 1);
 FUNC_2(VAR_6, "%s", VAR_4);


 VAR_7 = FUNC_1(VAR_0, FUNC_3(VAR_4) + 12);
 FUNC_2(VAR_7, "%s/global.tmp", VAR_4);
 VAR_8 = FUNC_1(VAR_0, FUNC_3(VAR_4) + 13);
 FUNC_2(VAR_8, "%s/global.stat", VAR_4);

 if (VAR_1)
  FUNC_0(VAR_1);
 VAR_1 = VAR_6;
 if (VAR_3)
  FUNC_0(VAR_3);
 VAR_3 = VAR_7;
 if (VAR_2)
  FUNC_0(VAR_2);
 VAR_2 = VAR_8;
}
