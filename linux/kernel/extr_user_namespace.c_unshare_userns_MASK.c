
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cred*) ;
 struct cred* FUNC_1 () ;
 int FUNC_2 (struct cred*) ;

int FUNC_3(unsigned long VAR_2, struct cred **VAR_3)
{
 struct cred *VAR_4;
 int VAR_5 = -VAR_1;

 if (!(VAR_2 & VAR_0))
  return 0;

 VAR_4 = FUNC_1();
 if (VAR_4) {
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5)
   FUNC_2(VAR_4);
  else
   *VAR_3 = VAR_4;
 }

 return VAR_5;
}
