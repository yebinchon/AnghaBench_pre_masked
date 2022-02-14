
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_2;

 VAR_2 = FUNC_3();
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_7();
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_4();
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_1(VAR_1, 0);
 if (VAR_2 < 0) {
  FUNC_0("sys_membarrier() failed\n");
  return VAR_2;
 }
 if (VAR_2 & VAR_0) {
  VAR_2 = FUNC_8();
  if (VAR_2)
   return VAR_2;
  VAR_2 = FUNC_5();
  if (VAR_2)
   return VAR_2;
 }




 VAR_2 = FUNC_2();
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_6();
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_2();
 if (VAR_2)
  return VAR_2;
 return 0;
}
