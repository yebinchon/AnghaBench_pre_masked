
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_4(bool VAR_5)
{
 while (!FUNC_2(&VAR_4))
 {
  VAR_0 *VAR_3;

  VAR_3 = FUNC_1(VAR_0, VAR_2, &VAR_4);
  if (VAR_5)
   FUNC_3(VAR_1, "leaked parallel context");
  FUNC_0(VAR_3);
 }
}
