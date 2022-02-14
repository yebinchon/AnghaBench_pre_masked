
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 () ;
 long FUNC_1 () ;
 long FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_4(void)
{
 long VAR_5;

 if (!VAR_3 || !VAR_4)
  return 0;

 VAR_5 = FUNC_1();
 if (!VAR_2) {
  if (VAR_5 > FUNC_2() *
      VAR_0)
   FUNC_3();
  goto out;
 }


 if (VAR_5 < FUNC_2() * VAR_1)
  FUNC_0();
out:
 return VAR_2;
}
