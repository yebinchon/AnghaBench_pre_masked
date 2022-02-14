
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfs_rq {int dummy; } ;


 int FUNC_0 (struct cfs_rq*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;

char *FUNC_2(struct cfs_rq *VAR_0, char *VAR_1, int VAR_2)
{
 if (!VAR_0) {
  if (VAR_1)
   FUNC_1(VAR_1, "(null)", VAR_2);
  else
   return ((void*)0);
 }

 FUNC_0(VAR_0, VAR_1, VAR_2);
 return VAR_1;
}
