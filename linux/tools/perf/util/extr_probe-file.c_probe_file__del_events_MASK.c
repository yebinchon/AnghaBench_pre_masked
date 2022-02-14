
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strlist {int dummy; } ;
struct strfilter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct strlist*) ;
 int FUNC_1 (int,struct strfilter*,struct strlist*) ;
 int FUNC_2 (struct strlist*) ;
 struct strlist* FUNC_3 (int *,int *) ;

int FUNC_4(int VAR_1, struct strfilter *VAR_2)
{
 struct strlist *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(((void*)0), ((void*)0));
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3);
 FUNC_2(VAR_3);

 return VAR_4;
}
