
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strlist {int dummy; } ;
struct nsinfo {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (int *,char const*,struct nsinfo*,int,int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 struct strlist* FUNC_2 (char*,int ) ;
 int VAR_2 ;

int FUNC_3(const char *VAR_3, struct nsinfo *VAR_4,
       struct strlist **VAR_5)
{
 char *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_0(((void*)0), VAR_3, VAR_4, 0, 0);
 if (!VAR_6)
  return -VAR_0;

 *VAR_5 = FUNC_2(VAR_6, VAR_2);
 if (!*VAR_5)
  VAR_7 = -VAR_1;
 FUNC_1(VAR_6);

 return VAR_7;
}
