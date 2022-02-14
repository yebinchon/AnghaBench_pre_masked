
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (unsigned long) ;

int FUNC_3(void)
{
 unsigned long VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = FUNC_1();
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   FUNC_2(VAR_4);
   if (FUNC_0(VAR_4))
    goto fail;
  }
 }
 FUNC_2(VAR_2);
 return 0;
fail:
 FUNC_2(VAR_2);
 return 1;
}
