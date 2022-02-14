
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (size_t,int) ;
 int FUNC_1 (char*,void*) ;
 void* FUNC_2 (size_t) ;

void *
FUNC_3(size_t VAR_3)
{
 void *VAR_4 = ((void*)0);

 if (VAR_3 < VAR_1)
  VAR_4 = FUNC_0(VAR_3, VAR_0 | VAR_2);

 if (VAR_4) {
  FUNC_1("%p: allocated with kmalloc\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4)
  return ((void*)0);
 FUNC_1("%p: allocated with vmalloc\n", VAR_4);

 return VAR_4;
}
