
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;

void *
FUNC_3(int VAR_0)
{
 void *VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 == ((void*)0))
 {
  FUNC_0("xmalloc %d\n", VAR_0);
  FUNC_1(1);
 }
 return VAR_1;
}
