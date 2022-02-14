
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mutex {int dummy; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*,char const*,int*,struct mutex*) ;
 void* FUNC_1 (int ,char*,char const*,char const*) ;

__attribute__((used)) static void *
FUNC_2(struct list_head *VAR_0, const char *VAR_1, const char *VAR_2,
   int *VAR_3, struct mutex *VAR_4)
{
 return FUNC_1(
   FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4),
   "%s%s", VAR_2, VAR_1);
}
