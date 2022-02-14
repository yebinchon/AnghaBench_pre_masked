
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct update_info {int temp; int cache; int local; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,char const*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct update_info *VAR_0, const char *VAR_1)
{
 char *VAR_2 = FUNC_1(VAR_0->local, VAR_1);
 char *VAR_3 = FUNC_1(VAR_0->cache, VAR_1);
 char *VAR_4 = FUNC_1(VAR_0->temp, VAR_1);

 FUNC_2(VAR_2, VAR_4);
 FUNC_4(VAR_3);
 FUNC_3(VAR_4, VAR_3);

 FUNC_0(VAR_2);
 FUNC_0(VAR_3);
 FUNC_0(VAR_4);
}
