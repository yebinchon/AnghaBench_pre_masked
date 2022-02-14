
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (char*,char const*,char*) ;
 int FUNC_2 (char const*,char*,int*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(const char *VAR_4)
{
 char VAR_5[VAR_1];
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_4 + FUNC_3(VAR_2) + FUNC_3(VAR_3),
       "%i", &VAR_6);
 if (VAR_7 != 1)
  return -VAR_0;

 VAR_7 = FUNC_1("name", VAR_4, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_0("Trigger %03d: %s\n", VAR_6, VAR_5);

 return 0;
}
