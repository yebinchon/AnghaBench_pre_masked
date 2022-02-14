
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (void*,void*,size_t) ;

void FUNC_3(void *VAR_0, size_t VAR_1, size_t VAR_2, size_t VAR_3)
{
 size_t VAR_4, VAR_5;
 void *VAR_6;
 void *VAR_7;
 void *VAR_8;

 if (VAR_2 <= 1) return;

 VAR_4 = 0;
 VAR_5 = VAR_2 - 1;
 VAR_8 = FUNC_1(VAR_3);
 if (VAR_8 == ((void*)0)) return;

 while (VAR_4 < VAR_5) {
  VAR_6 = (void *)((VAR_4 * VAR_3) + (intptr_t)VAR_0);
  VAR_7 = (void *)((VAR_5 * VAR_3) + (intptr_t)VAR_0);



  FUNC_2(VAR_8, VAR_6, VAR_3);
  FUNC_2(VAR_6, VAR_7, VAR_3);
  FUNC_2(VAR_7, VAR_8, VAR_3);

  ++VAR_4;
  --VAR_5;
 }
 FUNC_0(VAR_8);
}
