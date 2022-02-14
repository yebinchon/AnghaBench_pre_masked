
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_bearer_names {int if_name; int media_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3,
    struct tipc_bearer_names *VAR_4)
{
 char VAR_5[VAR_0];
 char *VAR_6;
 char *VAR_7;
 u32 VAR_8;
 u32 VAR_9;


 VAR_5[VAR_0 - 1] = 0;

 FUNC_3(VAR_5, VAR_3, VAR_0);
 if (VAR_5[VAR_0 - 1] != 0)
  return 0;


 VAR_6 = VAR_5;
 VAR_7 = FUNC_0(VAR_6, ':');
 if (VAR_7 == ((void*)0))
  return 0;
 *(VAR_7++) = 0;
 VAR_8 = VAR_7 - VAR_6;
 VAR_9 = FUNC_2(VAR_7) + 1;


 if ((VAR_8 <= 1) || (VAR_8 > VAR_2) ||
     (VAR_9 <= 1) || (VAR_9 > VAR_1))
  return 0;


 if (VAR_4) {
  FUNC_1(VAR_4->media_name, VAR_6);
  FUNC_1(VAR_4->if_name, VAR_7);
 }
 return 1;
}
