
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,scalar_t__) ;
 int FUNC_1 (void*,int ,scalar_t__) ;
 int FUNC_2 (void*,int ,char**) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,char*) ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 char** VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_7(const char *VAR_6, void *VAR_7,
   char *VAR_8)
{
 FUNC_2(VAR_7, VAR_2, VAR_3);
 FUNC_2(VAR_7, VAR_2, VAR_4);
 FUNC_1(VAR_7, VAR_2, VAR_5);

 FUNC_4(VAR_8, VAR_0);
 FUNC_4(VAR_8 + FUNC_6(VAR_8), "%s:", (*VAR_3)[0] ? *VAR_3 : "*");
 FUNC_3(VAR_8, *VAR_4);
 FUNC_0(VAR_8, ":", VAR_5 != VAR_1, VAR_5);

 FUNC_5(VAR_8, ":*");

 return 1;
}
