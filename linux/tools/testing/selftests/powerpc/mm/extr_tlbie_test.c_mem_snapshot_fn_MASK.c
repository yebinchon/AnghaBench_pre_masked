
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 void* FUNC_1 (size_t) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (void*,void*,size_t) ;
 int FUNC_3 (void*,size_t,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void *FUNC_5(void *VAR_7)
{
 int VAR_8 = FUNC_0();
 size_t VAR_9 = VAR_8;
 void *VAR_10 = FUNC_1(VAR_9);

 while (!VAR_2 && !VAR_6) {

  VAR_5 = 1;

  FUNC_3(VAR_3, VAR_9, VAR_0);





  FUNC_2(VAR_10, VAR_3, VAR_9);







  FUNC_2(VAR_4, VAR_10, VAR_9);




  asm volatile("sync" ::: "memory");
  FUNC_3(VAR_3, VAR_9, VAR_0|VAR_1);
  asm volatile("sync" ::: "memory");
  VAR_5 = 0;

  FUNC_4(1);
 }

 return 0;
}
