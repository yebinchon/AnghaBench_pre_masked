
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (void*,int) ;

void *
FUNC_3(void *VAR_0, int VAR_1)
{
 void *VAR_2;

 if (VAR_1 < 1)
  VAR_1 = 1;
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
 {
  FUNC_0("xrealloc %d\n", VAR_1);
  FUNC_1(1);
 }
 return VAR_2;
}
