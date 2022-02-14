
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evlist {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct evlist*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,struct evlist*) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 () ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int *,char*,struct evlist*,int) ;

int FUNC_8(struct evlist *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_2 != VAR_1) {
  VAR_6 = FUNC_7(&VAR_3, "parent", VAR_5, -1);
  if (VAR_6 < 0)
   return VAR_6;
 }

 FUNC_6();




 if (VAR_4 != VAR_0)
  FUNC_3();

 VAR_6 = FUNC_0();
 if (VAR_6 < 0)
  return VAR_6;


 FUNC_5(&VAR_3);

 FUNC_2(&VAR_3);


 if (FUNC_4(&VAR_3, VAR_5) < 0)
  return -1;

 return 0;
}
