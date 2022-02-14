
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_4(void)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_1, 1);
 if (VAR_2) {
  FUNC_0("Failed to register TIPC protocol type\n");
  goto out;
 }

 VAR_2 = FUNC_3(&VAR_0);
 if (VAR_2) {
  FUNC_0("Failed to register TIPC socket type\n");
  FUNC_2(&VAR_1);
  goto out;
 }
 out:
 return VAR_2;
}
