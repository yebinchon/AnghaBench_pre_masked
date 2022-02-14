
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strfilter {int root; } ;


 char* FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;

char *FUNC_2(struct strfilter *VAR_0)
{
 int VAR_1;
 char *VAR_2 = ((void*)0);

 VAR_1 = FUNC_1(VAR_0->root, ((void*)0));
 if (VAR_1 < 0)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_1 + 1);
 if (VAR_2)
  FUNC_1(VAR_0->root, VAR_2);

 return VAR_2;
}
