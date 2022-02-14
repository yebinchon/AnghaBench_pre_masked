
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct luma_wipe_info {int wipes_list; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct luma_wipe_info *VAR_1 = VAR_0;

 char *VAR_2 = FUNC_2("luma_wipes/wipes.json");

 VAR_1->wipes_list = FUNC_1(VAR_2);

 FUNC_0(VAR_2);
}
